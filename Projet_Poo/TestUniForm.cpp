#include "TestUniForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void TestMain(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is jour project name
    ProjetPoo::TestUniForm form;
    Application::Run(% form);
}
