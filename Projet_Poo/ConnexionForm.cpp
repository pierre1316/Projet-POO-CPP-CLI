#include "ConnexionForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace ProjetPoo;


[STAThreadAttribute]
void ConnexionForm(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProjetPoo::ConnexionForm form;
    Application::Run(% form);
}