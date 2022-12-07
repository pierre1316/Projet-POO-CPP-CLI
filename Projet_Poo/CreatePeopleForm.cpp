#include "CreatePeopleForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void NewItemMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::CreatePeopleForm form(0);
    Application::Run(% form);
}