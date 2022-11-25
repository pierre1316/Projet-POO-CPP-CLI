#include "CreateAddressForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void CreateAddressMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::CreateAddressForm form(0);
    Application::Run(% form);
}