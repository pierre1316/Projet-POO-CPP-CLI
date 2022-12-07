#include "ChangePasswordForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void PasswordMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::ChangePasswordForm form(0);
    Application::Run(% form);
}