#include "ItemForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void CreateItemMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::ItemForm form;
    Application::Run(% form);
}