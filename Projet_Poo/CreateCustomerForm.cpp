#include "CreateCustomerForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void NewCustomerMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::CreateCustomerForm form;
    Application::Run(% form);
}