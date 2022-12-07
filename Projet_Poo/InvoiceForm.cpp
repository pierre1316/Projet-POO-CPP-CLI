#include "InvoiceForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void InvoiceMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::InvoiceForm form;
    Application::Run(% form);
}