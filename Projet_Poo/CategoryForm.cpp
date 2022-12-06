#include "CategoryForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void CreateCategoryMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::CategoryForm form;
    Application::Run(% form);
}