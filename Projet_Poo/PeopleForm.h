#pragma once
#include "CreatePeopleForm.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de PeopleForm
	/// </summary>
	public ref class PeopleForm : public System::Windows::Forms::Form
	{
	public:
		PeopleForm(void)
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
		~PeopleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_create_people;
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
			this->button_create_people = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_create_people
			// 
			this->button_create_people->Location = System::Drawing::Point(16, 15);
			this->button_create_people->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button_create_people->Name = L"button_create_people";
			this->button_create_people->Size = System::Drawing::Size(184, 82);
			this->button_create_people->TabIndex = 0;
			this->button_create_people->Text = L"Créer une Personne";
			this->button_create_people->UseVisualStyleBackColor = true;
			this->button_create_people->Click += gcnew System::EventHandler(this, &PeopleForm::button_create_customer_Click);
			// 
			// PeopleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1415, 702);
			this->Controls->Add(this->button_create_people);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"PeopleForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"PeopleForm";
			this->Load += gcnew System::EventHandler(this, &PeopleForm::PeopleForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PeopleForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_create_customer_Click(System::Object^ sender, System::EventArgs^ e) {
		CreatePeopleForm^ newpeoForm = gcnew CreatePeopleForm();
		newpeoForm->ShowDialog();
	}

	};
}
