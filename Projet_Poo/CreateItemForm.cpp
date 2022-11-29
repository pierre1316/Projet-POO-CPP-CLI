#include "CreateItemForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void CreateItemMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::CreateItemForm form;
    Application::Run(% form);
}