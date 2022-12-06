#include "PaymentForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void PaymentMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::PaymentForm form;
    Application::Run(% form);
}