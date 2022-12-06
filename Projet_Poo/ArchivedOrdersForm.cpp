#include "ArchivedOrdersForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void ArchivedMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::ArchivedOrdersForm form;
    Application::Run(% form);
}