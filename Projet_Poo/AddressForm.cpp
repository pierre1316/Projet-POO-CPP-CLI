#include "AddressForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void AddressMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::AddressForm form;
    Application::Run(% form);
}