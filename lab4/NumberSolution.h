#ifndef NUMSOL
#define NUMSOL

#include <math.h>
#include <cmath>

//------------------------------------------------------ЗАДАЧИ_И_ТИПЫ_ДАННЫХ-------------------------------------------------------------------
const double breakPoint = (1 / sqrt(3));											//Точка разрыва коэффициентов
typedef double(*PIntFunc)(int, double);							//Указатель на функцию первообразной
typedef double(*PCoefsFunc)(double, double, double, PIntFunc);	//Указатель на функцию для вычисления коэффициентов ai, di, phi_iu
//Структура для хранения одной итерации прогонки
typedef struct {
	double Xn;
	double Hn;
	double Vn;
}OneStepOfProgonka;

//Точное решение тестовой задачи номер 2
double U_x(double x)
{
	double res;
	double C1, C2, C3, C4;
	C1 = -0.32226129893712507357;
	C2 = 0.91290708793219321748;
	C3 = -1.1361384419522901901;
	C4 = 0.034373899843605150439;
	if (x <= breakPoint)
		res = C1 * exp((sqrt(4.0/3)) * x) + C2 * exp((-sqrt(4.0 / 3)) * x) + sin(1.0/sqrt(3))/(4.0/3);
	else
		res = C3 * exp(sqrt((1.0/3)/exp(cos(1.0 / sqrt(3)))) * x) + C4 * exp(-sqrt((1.0 / 3) / exp(cos(1.0/ sqrt(3)))) * x) + sin(1.0/ sqrt(3))/(1.0/3);

	return res;
}
//------Test 1-------
double U1_x(double x)//test1
{
	double res = x*x -2*x +1;
	return res;
}

double ai_t(int mode, double x)
{
	return 1.0;
}
double phi_t(int mode, double x)
{
	return -2.0;
}
double di_t(int mode, double x)
{
	return 0.0;
}
//------------------------------------------------------ПЕРВООБРАЗНЫЕ_ДЛЯ_ТЕСТОВОЙ_ЗАДАЧИ_№2-------------------------------------------------------------------
double integral_of_k(int mode, double x)
{
	double res;

	switch (mode)
	{
	case 1:
		res = (1) * x;
		break;
	case 2:
		res = (1 / exp(cos(1.0/sqrt(3)))) * x;
		break;
	}

	return res;
}
double integral_of_q(int mode, double x)
{
	double res;

	switch (mode)
	{
	case 1:
		res = 4.0/3 * x;
		break;
	case 2:
		res = 1.0/3 * x;
		break;
	}

	return res;
}
double integral_of_f(int mode, double x)
{
	double res;

	switch (mode)
	{
	case 1:
		res = sin(1/sqrt(3)) * x;
		break;
	case 2:
		res = sin(1 / sqrt(3)) * x;
		break;
	}

	return res;
}
//------------------------------------------------------ПЕРВООБРАЗНЫЕ_ДЛЯ_ОСНОВНОЙ_ЗАДАЧИ-------------------------------------------------------------------
double integral_of_k_main(int mode, double x)
{
	double res;

	switch (mode)
	{
	case 1:
		res = x;
		break;
	case 2:
		res = x/exp(1) + x*x*x/(6*exp(1))+pow(x,5)/(60 * exp(1));
		break;
	}

	return res;
}
double integral_of_q_main(int mode, double x)
{
	double res;

	switch (mode)
	{
	case 1:
		res = (x * x * x)/3.0+x;
		break;
	case 2:
		res = (x * x * x) / 3.0;
		break;
	}

	return res;
}
double integral_of_f_main(int mode, double x)
{
	double res;

	switch (mode)
	{
	case 1:
		res = -cos(x);
		break;
	case 2:
		res = -cos(x);
		break;
	}

	return res;
}
//------------------------------------------------------ВСПОМОГАТЕЛЬНЫЕ_КОЭФФИЦИЕНТЫ-------------------------------------------------------------------
double di(double Xnext, double Xprev, double h, PIntFunc Qi)
{
	double res;

	if (Xnext <= breakPoint)
		res = (1 / h) * (Qi(1, Xnext) - Qi(1, Xprev));
	else
		if (Xprev >= breakPoint)
			res = (1 / h) * (Qi(2, Xnext) - Qi(2, Xprev));
		else
			if (Xprev <= breakPoint && Xnext >= breakPoint)
				res = (1 / h) * (Qi(1, breakPoint) - Qi(1, Xprev) + Qi(2, Xnext) - Qi(2, breakPoint));

	return res;
}
double phi_i(double Xnext, double Xprev, double h, PIntFunc Fi)
{
	double res;

	if (Xnext <= breakPoint)
		res = (1 / h) * (Fi(1, Xnext) - Fi(1, Xprev));
	else
		if (Xprev >= breakPoint)
			res = (1 / h) * (Fi(2, Xnext) - Fi(2, Xprev));
		else
			if (Xprev <= breakPoint && Xnext >= breakPoint)
				res = (1 / h) * (Fi(1, breakPoint) - Fi(1, Xprev) + Fi(2, Xnext) - Fi(2, breakPoint));

	return res;
}
double ai(double Xnext, double Xprev, double h, PIntFunc Ki)
{
	double res;

	if (Xnext <= breakPoint)
		res = h / (Ki(1, Xnext) - Ki(1, Xprev));
	else
		if (Xprev >= breakPoint)
			res = h / (Ki(2, Xnext) - Ki(2, Xprev));
		else
			if (Xprev <= breakPoint && Xnext >= breakPoint)
				res = h / (Ki(1, breakPoint) - Ki(1, Xprev) + Ki(2, Xnext) - Ki(2, breakPoint));
	return res;
}
//----------------------------------------------------ВЫЧИСЛЕНИЕ_ЧИСЛЕННОЙ_ТРАЕКТОРИИ----------------------------------------------------------
//Функция, вычисляющая всю численную траекторию
//Входные параметры(10):
//x0			- начальная координата на стержне
//h				- шаг сетки
//length		- длина стержня
//n				- размерность сетки
//M1			- температура на левом конце стержня
//M2			- температура на правом конце стержня
//NumTrajectory	- структура для хранения численной траектории
//IntK			- первообразная от функции k(x), необходимая для вычисления коэффициента ai
//IntQ			- первообразная от функции q(x), необходимая для вычисления коэффициента di
//IntF			- первообразная от функции f(x), необходимая для вычисления коэффициента phi_i
void NumSolution(double x0, double h, double length, double n, double M1, double M2, std::vector<OneStepOfProgonka> &NumTrajectory, PIntFunc IntK, PIntFunc IntQ, PIntFunc IntF)
{
	std::vector<double> alpha;
	std::vector<double> beta;
	std::vector<double> Xi;

	//Прямой ход прогонки
	double Ai, Bi, Ci, alpha_next, beta_next;
	int i;

	alpha.push_back(0);
	beta.push_back(M1);
	Xi.push_back(x0);

	for (int counter = 0; counter < n - 1; counter++)
	{
		i = counter + 1;

		double Xnext = x0 + i * h;
		double Xprev = x0 + (i - 1) * h;
		double Xnext_2 = (x0 + (h / 2)) + i * h;
		double Xprev_2 = (x0 + (h / 2)) + (i - 1) * h;

		double a_curr = ai(Xnext, Xprev, h, IntK);
		double a_next = ai(Xnext + h, Xprev + h, h, IntK);
		double d_curr = di(Xnext_2, Xprev_2, h, IntQ);
		double phi_curr = phi_i(Xnext_2, Xprev_2, h, IntF);

		Ai = a_curr / (h * h);
		Ci = (a_curr + a_next) / (h * h) + d_curr;
		Bi = a_next / (h * h);

		alpha_next = Bi / (Ci - alpha[i - 1] * Ai);
		beta_next = (phi_curr + beta[i - 1] * Ai) / (Ci - alpha[i - 1] * Ai);

		alpha.push_back(alpha_next);
		beta.push_back(beta_next);
		Xi.push_back(Xnext);
	}

	//Обратный ход прогонки
	OneStepOfProgonka tmp;

	tmp.Xn = x0;
	tmp.Hn = h;
	tmp.Vn = M1;
	NumTrajectory[0] = tmp;

	tmp.Xn = x0 + length;
	tmp.Hn = h;
	tmp.Vn = M2;
	NumTrajectory[n] = tmp;

	for (int i = n - 1; i >= 0; i--)
	{
		tmp.Xn = Xi[i];
		tmp.Hn = h;
		tmp.Vn = alpha[i] * NumTrajectory[i + 1].Vn + beta[i];
		NumTrajectory[i] = tmp;
	}
}


void NumSolution_test(double x0, double h, double length, double n, double M1, double M2, std::vector<OneStepOfProgonka> &NumTrajectory, PIntFunc IntK, PIntFunc IntQ, PIntFunc IntF)
{
	std::vector<double> alpha;
	std::vector<double> beta;
	std::vector<double> Xi;

	//Прямой ход прогонки
	double Ai, Bi, Ci, alpha_next, beta_next;
	int i;

	alpha.push_back(0);
	beta.push_back(M1);
	Xi.push_back(x0);

	for (int counter = 0; counter < n - 1; counter++)
	{
		i = counter + 1;

		double Xnext = x0 + i * h;
		double Xprev = x0 + (i - 1) * h;
		double Xnext_2 = (x0 + (h / 2)) + i * h;
		double Xprev_2 = (x0 + (h / 2)) + (i - 1) * h;

		double a_curr = 1.0;
		double a_next = 1.0;
		double d_curr = 0.0;
		double phi_curr = -2.0;

		Ai = a_curr / (h * h);
		Ci = (a_curr + a_next) / (h * h) + d_curr;
		Bi = a_next / (h * h);

		alpha_next = Bi / (Ci - alpha[i - 1] * Ai);
		beta_next = (phi_curr + beta[i - 1] * Ai) / (Ci - alpha[i - 1] * Ai);

		alpha.push_back(alpha_next);
		beta.push_back(beta_next);
		Xi.push_back(Xnext);
	}

	//Обратный ход прогонки
	OneStepOfProgonka tmp;

	tmp.Xn = x0;
	tmp.Hn = h;
	tmp.Vn = M1;
	NumTrajectory[0] = tmp;

	tmp.Xn = x0 + length;
	tmp.Hn = h;
	tmp.Vn = M2;
	NumTrajectory[n] = tmp;

	for (int i = n - 1; i >= 0; i--)
	{
		tmp.Xn = Xi[i];
		tmp.Hn = h;
		tmp.Vn = alpha[i] * NumTrajectory[i + 1].Vn + beta[i];
		NumTrajectory[i] = tmp;
	}
}
#endif