#include "CatalogForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void CatalogMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::CatalogForm form;
    Application::Run(% form);
}