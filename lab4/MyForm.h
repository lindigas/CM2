#pragma once

#include <cmath>
#include <math.h>
#include <vector>
#include <stdlib.h>

#include "NumberSolution.h"
#include "Table.h"
#include "about.h"
#include "TestTask.h"
#include "MainTask.h"

namespace lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox1;






	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;




	private: System::Windows::Forms::TextBox^  textBox6;

	private: System::Windows::Forms::TextBox^  textBox5;



	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox2;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	//private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox11;

	private: System::Windows::Forms::TextBox^  textBox9;

	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox14;






	private: System::Windows::Forms::GroupBox^  groupBox4;


	private: System::Windows::Forms::Button^  button7;





	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::TextBox^  textBox26;

	private: System::Windows::Forms::TextBox^  textBox28;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;





	private: System::Windows::Forms::Button^  button5;
























private: System::Windows::Forms::Button^  button9;










private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Button^  button8;

private: System::Windows::Forms::TextBox^  textBox15;

private: System::Windows::Forms::Label^  label20;


private: System::Windows::Forms::GroupBox^  groupBox3;
private: System::Windows::Forms::TextBox^  textBox31;
private: System::Windows::Forms::Label^  label42;

















private: System::Windows::Forms::TextBox^  textBox19;

private: System::Windows::Forms::TextBox^  textBox20;

private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::TextBox^  textBox21;








private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;


private: System::Windows::Forms::TextBox^  textBox16;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label9;

private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::PictureBox^  pictureBox6;
private: System::Windows::Forms::PictureBox^  pictureBox7;
private: System::Windows::Forms::PictureBox^  pictureBox8;
private: System::Windows::Forms::TabPage^  tabPage3;
private: System::Windows::Forms::PictureBox^  pictureBox9;
private: System::Windows::Forms::PictureBox^  pictureBox10;
private: System::Windows::Forms::PictureBox^  pictureBox11;
private: System::Windows::Forms::PictureBox^  pictureBox12;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart5;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart6;
private: System::Windows::Forms::GroupBox^  groupBox6;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::Button^  button13;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;

private: System::Windows::Forms::Button^  button14;

private: System::Windows::Forms::TextBox^  textBox18;
private: System::Windows::Forms::TextBox^  textBox22;

private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::GroupBox^  groupBox5;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::TextBox^  textBox7;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::TextBox^  textBox8;
private: System::Windows::Forms::TextBox^  textBox17;

//private: System::Windows::Forms::TextBox^  textBox24;

















	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea6 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->BeginInit();
			this->groupBox6->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 34);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1128, 662);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->pictureBox9);
			this->tabPage3->Controls->Add(this->pictureBox10);
			this->tabPage3->Controls->Add(this->pictureBox11);
			this->tabPage3->Controls->Add(this->pictureBox12);
			this->tabPage3->Controls->Add(this->chart5);
			this->tabPage3->Controls->Add(this->chart6);
			this->tabPage3->Controls->Add(this->groupBox6);
			this->tabPage3->Controls->Add(this->groupBox5);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1120, 633);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Тестовая задача 1";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(270, 399);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(36, 196);
			this->pictureBox9->TabIndex = 13;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(314, 587);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(593, 41);
			this->pictureBox10->TabIndex = 12;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(270, 4);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(36, 340);
			this->pictureBox11->TabIndex = 11;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(314, 322);
			this->pictureBox12->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(593, 41);
			this->pictureBox12->TabIndex = 10;
			this->pictureBox12->TabStop = false;
			// 
			// chart5
			// 
			this->chart5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->Name = L"ChartArea1";
			this->chart5->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart5->Legends->Add(legend1);
			this->chart5->Location = System::Drawing::Point(286, 386);
			this->chart5->Margin = System::Windows::Forms::Padding(4);
			this->chart5->Name = L"chart5";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart5->Series->Add(series1);
			this->chart5->Size = System::Drawing::Size(640, 209);
			this->chart5->TabIndex = 9;
			this->chart5->Text = L"chart5";
			// 
			// chart6
			// 
			this->chart6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea2->Name = L"ChartArea1";
			this->chart6->ChartAreas->Add(chartArea2);
			legend2->Name = L"Точное решение";
			legend2->Position->Auto = false;
			legend2->Position->Height = 10.8755F;
			legend2->Position->Width = 80.78675F;
			legend2->Position->X = 12.21325F;
			this->chart6->Legends->Add(legend2);
			this->chart6->Location = System::Drawing::Point(286, 4);
			this->chart6->Margin = System::Windows::Forms::Padding(4);
			this->chart6->Name = L"chart6";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->Legend = L"Точное решение";
			series2->Name = L"Точное решение";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->Legend = L"Точное решение";
			series3->Name = L"Численное решение";
			this->chart6->Series->Add(series2);
			this->chart6->Series->Add(series3);
			this->chart6->Size = System::Drawing::Size(635, 330);
			this->chart6->TabIndex = 8;
			this->chart6->Text = L"chart6";
			// 
			// groupBox6
			// 
			this->groupBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->groupBox6->Controls->Add(this->button11);
			this->groupBox6->Controls->Add(this->button12);
			this->groupBox6->Controls->Add(this->button13);
			this->groupBox6->Controls->Add(this->label25);
			this->groupBox6->Controls->Add(this->label26);
			this->groupBox6->Controls->Add(this->button14);
			this->groupBox6->Controls->Add(this->textBox17);
			this->groupBox6->Controls->Add(this->textBox18);
			this->groupBox6->Controls->Add(this->textBox22);
			this->groupBox6->Controls->Add(this->label28);
			this->groupBox6->Location = System::Drawing::Point(4, 246);
			this->groupBox6->Margin = System::Windows::Forms::Padding(4);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(4);
			this->groupBox6->Size = System::Drawing::Size(240, 396);
			this->groupBox6->TabIndex = 3;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"[Справка]";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(3, 318);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(105, 54);
			this->button11->TabIndex = 31;
			this->button11->Text = L"Очистить полотно";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(3, 286);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(235, 28);
			this->button12->TabIndex = 30;
			this->button12->Text = L"Построить точное решение";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(128, 318);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(109, 54);
			this->button13->TabIndex = 10;
			this->button13->Text = L"Показать таблицу";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(8, 166);
			this->label25->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(160, 51);
			this->label25->TabIndex = 8;
			this->label25->Text = L"Узел сетки, на котром \r\nдостигается \r\nмакс. погрешность:";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(8, 118);
			this->label26->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(157, 17);
			this->label26->TabIndex = 7;
			this->label26->Text = L"Полученная точность:";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(3, 250);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(235, 28);
			this->button14->TabIndex = 21;
			this->button14->Text = L"Построить численное решение";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// textBox17
			// 
			this->textBox17->Enabled = false;
			this->textBox17->Location = System::Drawing::Point(12, 138);
			this->textBox17->Margin = System::Windows::Forms::Padding(4);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(213, 22);
			this->textBox17->TabIndex = 5;
			// 
			// textBox18
			// 
			this->textBox18->Enabled = false;
			this->textBox18->Location = System::Drawing::Point(12, 218);
			this->textBox18->Margin = System::Windows::Forms::Padding(4);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(213, 22);
			this->textBox18->TabIndex = 4;
			// 
			// textBox22
			// 
			this->textBox22->Enabled = false;
			this->textBox22->Location = System::Drawing::Point(12, 42);
			this->textBox22->Margin = System::Windows::Forms::Padding(4);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(213, 22);
			this->textBox22->TabIndex = 2;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(8, 22);
			this->label28->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(139, 17);
			this->label28->TabIndex = 0;
			this->label28->Text = L"Размерность сетки:";
			// 
			// groupBox5
			// 
			this->groupBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->groupBox5->Controls->Add(this->button6);
			this->groupBox5->Controls->Add(this->label18);
			this->groupBox5->Controls->Add(this->label19);
			this->groupBox5->Controls->Add(this->label21);
			this->groupBox5->Controls->Add(this->textBox1);
			this->groupBox5->Controls->Add(this->textBox2);
			this->groupBox5->Controls->Add(this->label22);
			this->groupBox5->Controls->Add(this->label23);
			this->groupBox5->Controls->Add(this->textBox4);
			this->groupBox5->Controls->Add(this->textBox7);
			this->groupBox5->Controls->Add(this->label24);
			this->groupBox5->Controls->Add(this->textBox8);
			this->groupBox5->Location = System::Drawing::Point(4, 4);
			this->groupBox5->Margin = System::Windows::Forms::Padding(4);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(4);
			this->groupBox5->Size = System::Drawing::Size(240, 242);
			this->groupBox5->TabIndex = 1;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"[Параметры задачи]";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(5, 23);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(231, 31);
			this->button6->TabIndex = 35;
			this->button6->Text = L"Показать задачу";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(5, 63);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(169, 34);
			this->label18->TabIndex = 34;
			this->label18->Text = L"Температура на концах \r\nстержня:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(8, 159);
			this->label19->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(164, 17);
			this->label19->TabIndex = 33;
			this->label19->Text = L"Нач. коорд. на стержне";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(8, 215);
			this->label21->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(139, 17);
			this->label21->TabIndex = 32;
			this->label21->Text = L"Размерность сетки:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(176, 212);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(59, 22);
			this->textBox1->TabIndex = 30;
			this->textBox1->Text = L"10";
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(176, 155);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(59, 22);
			this->textBox2->TabIndex = 26;
			this->textBox2->Text = L"0";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(8, 130);
			this->label22->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(82, 17);
			this->label22->TabIndex = 18;
			this->label22->Text = L"На правом:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(8, 100);
			this->label23->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(74, 17);
			this->label23->TabIndex = 17;
			this->label23->Text = L"На левом:";
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(176, 127);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(59, 22);
			this->textBox4->TabIndex = 12;
			this->textBox4->Text = L"0";
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(176, 96);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(59, 22);
			this->textBox7->TabIndex = 10;
			this->textBox7->Text = L"1";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(8, 187);
			this->label24->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(114, 17);
			this->label24->TabIndex = 6;
			this->label24->Text = L"Длина стержня:";
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(176, 183);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(59, 22);
			this->textBox8->TabIndex = 5;
			this->textBox8->Text = L"1";
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->pictureBox4);
			this->tabPage1->Controls->Add(this->pictureBox3);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->chart3);
			this->tabPage1->Controls->Add(this->groupBox2);
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(1120, 633);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тестовая задача 2";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(267, 406);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(36, 196);
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(311, 594);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(593, 41);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(267, 11);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(36, 340);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(311, 329);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(593, 41);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// chart3
			// 
			this->chart3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(283, 393);
			this->chart3->Margin = System::Windows::Forms::Padding(4);
			this->chart3->Name = L"chart3";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series4->IsVisibleInLegend = false;
			series4->Legend = L"Legend1";
			series4->Name = L"Series1";
			this->chart3->Series->Add(series4);
			this->chart3->Size = System::Drawing::Size(640, 209);
			this->chart3->TabIndex = 3;
			this->chart3->Text = L"chart3";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Controls->Add(this->button8);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->textBox12);
			this->groupBox2->Controls->Add(this->textBox11);
			this->groupBox2->Controls->Add(this->textBox9);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Location = System::Drawing::Point(5, 255);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(240, 396);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"[Справка]";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(3, 318);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(105, 54);
			this->button10->TabIndex = 31;
			this->button10->Text = L"Очистить полотно";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(3, 286);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(235, 28);
			this->button8->TabIndex = 30;
			this->button8->Text = L"Построить точное решение";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(128, 318);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 54);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Показать таблицу";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(8, 166);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(160, 51);
			this->label17->TabIndex = 8;
			this->label17->Text = L"Узел сетки, на котром \r\nдостигается \r\nмакс. погрешность:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(8, 118);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(157, 17);
			this->label16->TabIndex = 7;
			this->label16->Text = L"Полученная точность:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 250);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 28);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Построить численное решение";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox12
			// 
			this->textBox12->Enabled = false;
			this->textBox12->Location = System::Drawing::Point(12, 138);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(213, 22);
			this->textBox12->TabIndex = 5;
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(12, 218);
			this->textBox11->Margin = System::Windows::Forms::Padding(4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(213, 22);
			this->textBox11->TabIndex = 4;
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(12, 42);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(213, 22);
			this->textBox9->TabIndex = 2;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(8, 22);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(139, 17);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Размерность сетки:";
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea4->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea4);
			legend4->Name = L"Точное решение";
			legend4->Position->Auto = false;
			legend4->Position->Height = 10.8755F;
			legend4->Position->Width = 80.78675F;
			legend4->Position->X = 12.21325F;
			this->chart1->Legends->Add(legend4);
			this->chart1->Location = System::Drawing::Point(283, 11);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series5->Legend = L"Точное решение";
			series5->Name = L"Точное решение";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series6->Legend = L"Точное решение";
			series6->Name = L"Численное решение";
			this->chart1->Series->Add(series5);
			this->chart1->Series->Add(series6);
			this->chart1->Size = System::Drawing::Size(635, 330);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label20);
			this->groupBox1->Controls->Add(this->textBox15);
			this->groupBox1->Controls->Add(this->textBox14);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Location = System::Drawing::Point(5, 5);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(240, 242);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"[Параметры задачи]";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(5, 23);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(231, 31);
			this->button3->TabIndex = 35;
			this->button3->Text = L"Показать задачу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(5, 63);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(169, 34);
			this->label3->TabIndex = 34;
			this->label3->Text = L"Температура на концах \r\nстержня:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 159);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 17);
			this->label2->TabIndex = 33;
			this->label2->Text = L"Нач. коорд. на стержне";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(8, 215);
			this->label20->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(139, 17);
			this->label20->TabIndex = 32;
			this->label20->Text = L"Размерность сетки:";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(176, 212);
			this->textBox15->Margin = System::Windows::Forms::Padding(4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(59, 22);
			this->textBox15->TabIndex = 30;
			this->textBox15->Text = L"10";
			// 
			// textBox14
			// 
			this->textBox14->Enabled = false;
			this->textBox14->Location = System::Drawing::Point(176, 155);
			this->textBox14->Margin = System::Windows::Forms::Padding(4);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(59, 22);
			this->textBox14->TabIndex = 26;
			this->textBox14->Text = L"0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(8, 130);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(82, 17);
			this->label11->TabIndex = 18;
			this->label11->Text = L"На правом:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 100);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(74, 17);
			this->label10->TabIndex = 17;
			this->label10->Text = L"На левом:";
			// 
			// textBox6
			// 
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(176, 127);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(59, 22);
			this->textBox6->TabIndex = 12;
			this->textBox6->Text = L"0";
			// 
			// textBox5
			// 
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(176, 96);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(59, 22);
			this->textBox5->TabIndex = 10;
			this->textBox5->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 187);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Длина стержня:";
			// 
			// textBox3
			// 
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(176, 183);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(59, 22);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"1";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pictureBox5);
			this->tabPage2->Controls->Add(this->pictureBox6);
			this->tabPage2->Controls->Add(this->pictureBox7);
			this->tabPage2->Controls->Add(this->pictureBox8);
			this->tabPage2->Controls->Add(this->chart4);
			this->tabPage2->Controls->Add(this->groupBox4);
			this->tabPage2->Controls->Add(this->chart2);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(1120, 633);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Основная задача";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(271, 401);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(36, 196);
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(315, 590);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(593, 41);
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(271, 6);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(36, 340);
			this->pictureBox7->TabIndex = 9;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(315, 324);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(593, 41);
			this->pictureBox8->TabIndex = 8;
			this->pictureBox8->TabStop = false;
			// 
			// chart4
			// 
			this->chart4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea5->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart4->Legends->Add(legend5);
			this->chart4->Location = System::Drawing::Point(312, 353);
			this->chart4->Margin = System::Windows::Forms::Padding(4);
			this->chart4->Name = L"chart4";
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series7->IsVisibleInLegend = false;
			series7->Legend = L"Legend1";
			series7->Name = L"Series1";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series8->IsVisibleInLegend = false;
			series8->Legend = L"Legend1";
			series8->Name = L"Series2";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series9->IsVisibleInLegend = false;
			series9->Legend = L"Legend1";
			series9->Name = L"Series3";
			this->chart4->Series->Add(series7);
			this->chart4->Series->Add(series8);
			this->chart4->Series->Add(series9);
			this->chart4->Size = System::Drawing::Size(619, 244);
			this->chart4->TabIndex = 4;
			this->chart4->Text = L"chart4";
			// 
			// groupBox4
			// 
			this->groupBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->button9);
			this->groupBox4->Controls->Add(this->button7);
			this->groupBox4->Controls->Add(this->button5);
			this->groupBox4->Controls->Add(this->textBox25);
			this->groupBox4->Controls->Add(this->textBox26);
			this->groupBox4->Controls->Add(this->textBox28);
			this->groupBox4->Location = System::Drawing::Point(4, 249);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4);
			this->groupBox4->Size = System::Drawing::Size(259, 374);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"[Справка]";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(8, 181);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(160, 51);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Узел сетки, на котром \r\nдостигается \r\nмакс. погрешность:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 132);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(157, 17);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Полученная точность:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(8, 36);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(139, 17);
			this->label13->TabIndex = 22;
			this->label13->Text = L"Размерность сетки:";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(5, 311);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 54);
			this->button9->TabIndex = 12;
			this->button9->Text = L"Очистить полотно";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(144, 310);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(104, 55);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Показать таблицу";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(5, 265);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(243, 39);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Построить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox25
			// 
			this->textBox25->Enabled = false;
			this->textBox25->Location = System::Drawing::Point(12, 153);
			this->textBox25->Margin = System::Windows::Forms::Padding(4);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(235, 22);
			this->textBox25->TabIndex = 5;
			// 
			// textBox26
			// 
			this->textBox26->Enabled = false;
			this->textBox26->Location = System::Drawing::Point(12, 233);
			this->textBox26->Margin = System::Windows::Forms::Padding(4);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(235, 22);
			this->textBox26->TabIndex = 4;
			// 
			// textBox28
			// 
			this->textBox28->Enabled = false;
			this->textBox28->Location = System::Drawing::Point(12, 55);
			this->textBox28->Margin = System::Windows::Forms::Padding(4);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(235, 22);
			this->textBox28->TabIndex = 2;
			// 
			// chart2
			// 
			this->chart2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea6->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea6);
			legend6->Name = L"Точное решение";
			this->chart2->Legends->Add(legend6);
			this->chart2->Location = System::Drawing::Point(312, 7);
			this->chart2->Margin = System::Windows::Forms::Padding(4);
			this->chart2->Name = L"chart2";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series10->IsVisibleInLegend = false;
			series10->Legend = L"Точное решение";
			series10->Name = L"Численное решение";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series11->IsVisibleInLegend = false;
			series11->Legend = L"Точное решение";
			series11->Name = L"Series2";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series12->IsVisibleInLegend = false;
			series12->Legend = L"Точное решение";
			series12->Name = L"Series3";
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series13->IsVisibleInLegend = false;
			series13->Legend = L"Точное решение";
			series13->Name = L"Series4";
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series14->IsVisibleInLegend = false;
			series14->Legend = L"Точное решение";
			series14->Name = L"Series5";
			series15->ChartArea = L"ChartArea1";
			series15->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series15->IsVisibleInLegend = false;
			series15->Legend = L"Точное решение";
			series15->Name = L"Series6";
			this->chart2->Series->Add(series10);
			this->chart2->Series->Add(series11);
			this->chart2->Series->Add(series12);
			this->chart2->Series->Add(series13);
			this->chart2->Series->Add(series14);
			this->chart2->Series->Add(series15);
			this->chart2->Size = System::Drawing::Size(619, 338);
			this->chart2->TabIndex = 2;
			this->chart2->Text = L"chart2";
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->textBox16);
			this->groupBox3->Controls->Add(this->textBox31);
			this->groupBox3->Controls->Add(this->label42);
			this->groupBox3->Controls->Add(this->textBox19);
			this->groupBox3->Controls->Add(this->textBox20);
			this->groupBox3->Controls->Add(this->label31);
			this->groupBox3->Controls->Add(this->textBox21);
			this->groupBox3->Location = System::Drawing::Point(4, 5);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(259, 236);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"[Параметры задачи]";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(5, 22);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(245, 30);
			this->button4->TabIndex = 41;
			this->button4->Text = L"Показать задачу";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(4, 153);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(168, 17);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Нач. коорд. на стержне:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 55);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 34);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Температура на концах \r\nстержня:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 127);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 17);
			this->label5->TabIndex = 38;
			this->label5->Text = L"На правом:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(4, 100);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 17);
			this->label6->TabIndex = 37;
			this->label6->Text = L"На левом:";
			// 
			// textBox16
			// 
			this->textBox16->Enabled = false;
			this->textBox16->Location = System::Drawing::Point(187, 149);
			this->textBox16->Margin = System::Windows::Forms::Padding(4);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(60, 22);
			this->textBox16->TabIndex = 26;
			this->textBox16->Text = L"0";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(187, 204);
			this->textBox31->Margin = System::Windows::Forms::Padding(4);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(60, 22);
			this->textBox31->TabIndex = 36;
			this->textBox31->Text = L"10";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(4, 208);
			this->label42->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(139, 17);
			this->label42->TabIndex = 35;
			this->label42->Text = L"Размерность сетки:";
			// 
			// textBox19
			// 
			this->textBox19->Enabled = false;
			this->textBox19->Location = System::Drawing::Point(187, 123);
			this->textBox19->Margin = System::Windows::Forms::Padding(4);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(60, 22);
			this->textBox19->TabIndex = 12;
			this->textBox19->Text = L"0";
			// 
			// textBox20
			// 
			this->textBox20->Enabled = false;
			this->textBox20->Location = System::Drawing::Point(187, 96);
			this->textBox20->Margin = System::Windows::Forms::Padding(4);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(60, 22);
			this->textBox20->TabIndex = 10;
			this->textBox20->Text = L"1";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(4, 181);
			this->label31->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(114, 17);
			this->label31->TabIndex = 6;
			this->label31->Text = L"Длина стержня:";
			// 
			// textBox21
			// 
			this->textBox21->Enabled = false;
			this->textBox21->Location = System::Drawing::Point(187, 177);
			this->textBox21->Margin = System::Windows::Forms::Padding(4);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(60, 22);
			this->textBox21->TabIndex = 5;
			this->textBox21->Text = L"1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1128, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->оПрограммеToolStripMenuItem });
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(132, 24);
			this->toolStripMenuItem1->Text = L"Дополнительно";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(179, 26);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1128, 693);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Решение краевых задач для ОДУ";
			this->tabControl1->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

Table^tb = gcnew Table();		//Создание экземпляра типа "вторая форма"(для таблиц)
int FlagClear = 0;				//Флаг для очистки таблицы

//-------------------------------------------------------------------ТЕСТОВАЯ_ЗАДАЧА_№1---------------------------------------------------------------------------------------------
//Построение численной траектории(тестовая задача)
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
	//Входные данные
	int n;					//Размерность сетки
	double start;			//Начальная координата на стержне
	double length;			//Длина стержня
	double h;				//Шаг сетки
	double M1, M2;			//Граничные условия
	
	//Выходные данные [Справка]
	double E = 0.0000005;	//Требуемая точность
	double E1;				//Полученная точность
	double Xmax;			//Узел, на котором достигается максимальная погрешность E1
	
	//Инициализация переменных из текстовых полей
	M1 = Convert::ToDouble(textBox5->Text);
	M2 = Convert::ToDouble(textBox6->Text);
	start = Convert::ToDouble(textBox14->Text);
	length = Convert::ToDouble(textBox3->Text);
	n = Convert::ToDouble(textBox15->Text);
	h = length / n;

	//Построение численной траектории
	std::vector<OneStepOfProgonka> NumTrajectory(n + 1);
	NumSolution(start, h, length, n, M1, M2, NumTrajectory, &integral_of_k, &integral_of_q, &integral_of_f);
	
	//Рисование графика температуры
	for (int i = 0; i <= n; i++)
		chart1->Series["Численное решение"]->Points->AddXY(NumTrajectory[i].Xn, NumTrajectory[i].Vn);
	//Рисование графика вычислительной погрешности
	for (int i = 0; i <= n; i++)
		chart3->Series["Series1"]->Points->AddXY(NumTrajectory[i].Xn, abs(U_x(NumTrajectory[i].Xn) - NumTrajectory[i].Vn));

	//Заполнение таблицы
	if (FlagClear == 1)//Чистка таблицы, если она не пустая
	{
		tb->dataGridView1->Rows->Clear();
		FlagClear = 0;
	}
	for (int i = 0; i < NumTrajectory.size(); i++)
	{
		tb->dataGridView1->Rows->Add();
		tb->dataGridView1->Rows->Insert(i, i, NumTrajectory[i].Xn, NumTrajectory[i].Hn, NumTrajectory[i].Vn, U_x(NumTrajectory[i].Xn) - NumTrajectory[i].Vn);
	}
	FlagClear = 1;
	
	//Выписка выходных данных[Справка]
	E1 = 0;
	for (int i = 0; i <= n; i++)
	{
		double tmp = abs(U_x(NumTrajectory[i].Xn) - NumTrajectory[i].Vn);
		if (tmp >= E1)
		{
			E1 = tmp;
			Xmax = NumTrajectory[i].Xn;
		}
	}
	textBox9->Text = System::Convert::ToString(n);
	//textBox13->Text = System::Convert::ToString(E);
	textBox12->Text = System::Convert::ToString(E1);
	textBox11->Text = System::Convert::ToString(Xmax);
}
//Построить точное решение(тестовая задача)
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	for (double i = 0; i < 1; i += 0.1)
		chart1->Series["Точное решение"]->Points->AddXY(i, U_x(i));
}
//Очистить полотно(тестовая задача)
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	chart1->Series["Численное решение"]->Points->Clear();
	chart1->Series["Точное решение"]->Points->Clear();
	chart3->Series["Series1"]->Points->Clear();
}
//Показать таблицу с расчетами
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	tb->ShowDialog();//Вызов этого экземпляра
}
//Вызов формы при нажатии кнопки "О программе"
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	about^ab = gcnew about();
	ab->ShowDialog();
}
//Вызов формы при нажатии кнопки "Тестовая задача"
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	TestTask^tt = gcnew TestTask();
	tt->ShowDialog();
}
//-------------------------------------------------------------------ОСНОВНАЯ_ЗАДАЧА---------------------------------------------------------------------------------------------
int CallCounter = 0;//Количество построений
//Постороение основной задачи
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox20->Text == "" || textBox19->Text == "" || textBox16->Text == "" || textBox21->Text == "" || textBox31->Text == "")
		MessageBox::Show("Проверьте поля, возможно \nнекоторые из них не заполнены.");
	else
	{
		//Входные данные
		int n;					//Размерность сетки
		double start;			//Начальная координата на стержне
		double length;			//Длина стержня
		double h;				//Шаг сетки
		double M1, M2;			//Граничные условия

		//Выходные данные [Справка]
		double E = 0.0000005;	//Требуемая точность
		double E2;				//Полученная точность
		double Xmax;			//Узел, на котором достигается максимальная погрешность E2

		//Инициализация переменных из текстовых полей
		M1 = Convert::ToDouble(textBox20->Text);
		M2 = Convert::ToDouble(textBox19->Text);
		start = Convert::ToDouble(textBox16->Text);
		length = Convert::ToDouble(textBox21->Text);
		n = Convert::ToDouble(textBox31->Text);
		h = length / n;

		//Построение численной траектории
		std::vector<OneStepOfProgonka> NumTrajectory(n + 1);
		std::vector<OneStepOfProgonka> NumTrajectory2(2 * n + 1);//С половинным шагом
		NumSolution(start, h, length, n, M1, M2, NumTrajectory, &integral_of_k_main, &integral_of_q_main, &integral_of_f_main);
		NumSolution(start, h / 2, length, 2 * n, M1, M2, NumTrajectory2, &integral_of_k_main, &integral_of_q_main, &integral_of_f_main);

		//Рисование, на выбор три различных линии для трех начальных условий
		switch (CallCounter % 3){
		case 0:
			//Рисование графика температуры
			for (int i = 0; i <= n; i++)
				chart2->Series["Численное решение"]->Points->AddXY(NumTrajectory[i].Xn, NumTrajectory[i].Vn);
			for (int i = 0; i < NumTrajectory2.size(); i++)
				chart2->Series["Series2"]->Points->AddXY(NumTrajectory2[i].Xn, NumTrajectory2[i].Vn);

			//Рисование графика вычислительной погрешности
			for (int i = 0; i <= n; i++)
				chart4->Series["Series1"]->Points->AddXY(NumTrajectory[i].Xn, abs(NumTrajectory[i].Vn - NumTrajectory2[2 * i].Vn));
			break;
		case 1:
			//Рисование графика температуры
			for (int i = 0; i <= n; i++)
				chart2->Series["Series3"]->Points->AddXY(NumTrajectory[i].Xn, NumTrajectory[i].Vn);
			for (int i = 0; i < NumTrajectory2.size(); i++)
				chart2->Series["Series4"]->Points->AddXY(NumTrajectory2[i].Xn, NumTrajectory2[i].Vn);

			//Рисование графика вычислительной погрешности
			for (int i = 0; i <= n; i++)
				chart4->Series["Series2"]->Points->AddXY(NumTrajectory[i].Xn, abs(NumTrajectory[i].Vn - NumTrajectory2[2 * i].Vn));
			break;
		case 2:
			//Рисование графика температуры
			for (int i = 0; i <= n; i++)
				chart2->Series["Series5"]->Points->AddXY(NumTrajectory[i].Xn, NumTrajectory[i].Vn);
			for (int i = 0; i < NumTrajectory2.size(); i++)
				chart2->Series["Series6"]->Points->AddXY(NumTrajectory2[i].Xn, NumTrajectory2[i].Vn);

			//Рисование графика вычислительной погрешности
			for (int i = 0; i <= n; i++)
				chart4->Series["Series3"]->Points->AddXY(NumTrajectory[i].Xn, abs(NumTrajectory[i].Vn - NumTrajectory2[2 * i].Vn));
			break;
		}

		//Заполнение таблицы
		if (FlagClear == 1)//Чистка таблицы, если она не пустая
		{
			tb->dataGridView2->Rows->Clear();
			FlagClear = 0;
		}
		for (int i = 0; i < NumTrajectory.size(); i++)
		{
			tb->dataGridView2->Rows->Add();
			tb->dataGridView2->Rows->Insert(i, i, NumTrajectory[i].Xn, NumTrajectory[i].Hn, NumTrajectory[i].Vn, NumTrajectory2[2 * i].Vn, NumTrajectory[i].Vn - NumTrajectory2[2 * i].Vn);
		}
		FlagClear = 1;

		//Выписка выходных данных[Справка]
		E2 = 0;
		for (int i = 0; i <= n; i++)
		{
			double tmp = abs(NumTrajectory[i].Vn - NumTrajectory2[2 * i].Vn);
			if (tmp >= E2)
			{
				E2 = tmp;
				Xmax = NumTrajectory[i].Xn;
			}
		}
		textBox28->Text = System::Convert::ToString(n);
		
		textBox25->Text = System::Convert::ToString(E2);
		textBox26->Text = System::Convert::ToString(Xmax);

		CallCounter++;
	}
}
//Показать таблицу значений
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	tb->ShowDialog();//Вызов этого экземпляра
}
//Очистить полотно
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	chart2->Series["Численное решение"]->Points->Clear();
	chart2->Series["Series2"]->Points->Clear();
	chart2->Series["Series3"]->Points->Clear();
	chart2->Series["Series4"]->Points->Clear();
	chart2->Series["Series5"]->Points->Clear();
	chart2->Series["Series6"]->Points->Clear();
	chart4->Series["Series1"]->Points->Clear();
	chart4->Series["Series2"]->Points->Clear();
	chart4->Series["Series3"]->Points->Clear();
}
//Вызов формы при нажатии кнопки "Показать задачу"
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	MainTask^mt = gcnew MainTask();
	mt->ShowDialog();
}
//-----------------------------------------------ТЕСТОВАЯ_№_1---------------------------------------------------------------------
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {

	//Входные данные
	int n;					//Размерность сетки
	double start;			//Начальная координата на стержне
	double length;			//Длина стержня
	double h;				//Шаг сетки
	double M1, M2;			//Граничные условия

							//Выходные данные [Справка]
	double E = 0.0000005;	//Требуемая точность
	double E1;				//Полученная точность
	double Xmax;			//Узел, на котором достигается максимальная погрешность E1

							//Инициализация переменных из текстовых полей
	M1 = Convert::ToDouble(textBox5->Text);
	M2 = Convert::ToDouble(textBox6->Text);
	start = Convert::ToDouble(textBox14->Text);
	length = Convert::ToDouble(textBox3->Text);
	n = Convert::ToDouble(textBox1->Text);//*****
	h = length / n;

	//Построение численной траектории
	std::vector<OneStepOfProgonka> NumTrajectory(n + 1);//***
	NumSolution_test(start, h, length, n, M1, M2, NumTrajectory, &integral_of_k, &integral_of_q, &integral_of_f);//****

	//Рисование графика температуры
	for (int i = 0; i <= n; i++)
		chart6->Series["Численное решение"]->Points->AddXY(NumTrajectory[i].Xn, NumTrajectory[i].Vn);//****
	//Рисование графика вычислительной погрешности
	for (int i = 0; i <= n; i++)
		chart5->Series["Series1"]->Points->AddXY(NumTrajectory[i].Xn, abs(U1_x(NumTrajectory[i].Xn) - NumTrajectory[i].Vn));//*****

	//Заполнение таблицы
	if (FlagClear == 1)//Чистка таблицы, если она не пустая
	{
		tb->dataGridView1->Rows->Clear();
		FlagClear = 0;
	}
	for (int i = 0; i < NumTrajectory.size(); i++)
	{
		tb->dataGridView1->Rows->Add();//****
		tb->dataGridView1->Rows->Insert(i, i, NumTrajectory[i].Xn, NumTrajectory[i].Hn, NumTrajectory[i].Vn, U1_x(NumTrajectory[i].Xn) - NumTrajectory[i].Vn);
	}//****
	FlagClear = 1;

	//Выписка выходных данных[Справка]
	E1 = 0;
	for (int i = 0; i <= n; i++)
	{
		double tmp = abs(U1_x(NumTrajectory[i].Xn) - NumTrajectory[i].Vn);//****
		if (tmp >= E1)
		{
			E1 = tmp;
			Xmax = NumTrajectory[i].Xn;
		}
	}
	textBox22->Text = System::Convert::ToString(n);
	//textBox13->Text = System::Convert::ToString(E);
	textBox17->Text = System::Convert::ToString(E1);
	textBox18->Text = System::Convert::ToString(Xmax);
}
//Точное решение
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	for (double i = 0; i < 1; i += 0.1)
		chart6->Series["Точное решение"]->Points->AddXY(i, U1_x(i));
	
};
//Отчистить полотно Тестовая
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	chart6->Series["Численное решение"]->Points->Clear();
	chart6->Series["Точное решение"]->Points->Clear();
	chart5->Series["Series1"]->Points->Clear();}
// Показать таблицу
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	tb->ShowDialog();//Вызов этого экземпляра
}
};
}