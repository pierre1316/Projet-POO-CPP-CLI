#pragma once
#include "PeopleForm.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_people_management;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_people_management = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_people_management
			// 
			this->button_people_management->Location = System::Drawing::Point(12, 12);
			this->button_people_management->Name = L"button_people_management";
			this->button_people_management->Size = System::Drawing::Size(138, 67);
			this->button_people_management->TabIndex = 0;
			this->button_people_management->Text = L"Gestion des\r\nPersonnes";
			this->button_people_management->UseVisualStyleBackColor = true;
			this->button_people_management->Click += gcnew System::EventHandler(this, &MainForm::button_people_management_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1061, 570);
			this->Controls->Add(this->button_people_management);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_people_management_Click(System::Object^ sender, System::EventArgs^ e) {
		PeopleForm^ peopleform = gcnew PeopleForm();
		peopleform->ShowDialog();
	}
	};
}
