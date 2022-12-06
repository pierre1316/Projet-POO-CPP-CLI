#include "ModifyPeopleForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void ModifyPeopleMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::ModifyPeopleForm form(0);
    Application::Run(% form);
}