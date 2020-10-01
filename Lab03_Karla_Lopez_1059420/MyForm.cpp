#include "MyForm.h"
#include <iostream>
#include <stdio.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab03KarlaLopez1059420::MyForm form;
	Application::Run(% form);
	return 0;

}


