#include "MyForm.h"
#include "Table.h"
#include "about.h"
#include "TestTask.h"
#include "MainTask.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	lab1::MyForm form; //WinFormsTest - имя вашего проекта
	Application::Run(%form);
}