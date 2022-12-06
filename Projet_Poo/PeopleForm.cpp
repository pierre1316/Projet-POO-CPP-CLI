#include "PeopleForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void PeopleMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::PeopleForm form(0, 0);
    Application::Run(% form);
}