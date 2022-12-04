#include "OrderForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void OrderMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::OrderForm form;
    Application::Run(% form);
}