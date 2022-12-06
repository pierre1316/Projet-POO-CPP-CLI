#pragma once
#include "CreatePeopleForm.h"
#include "ModifyPeopleForm.h"
#include "ChangePasswordForm.h"

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
		PeopleForm(int id_role_user, int id_staff_user)
		{
			this->id_role_user = id_role_user;
			this->id_staff_user = id_staff_user;
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
	private: int id_role_user;
	private: int id_staff_user;
	private: System::Windows::Forms::Button^ button_create_people;
	private: System::Windows::Forms::Button^ button_modify_people;
	private: System::Windows::Forms::Button^ button1;

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
			this->button_modify_people = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_create_people
			// 
			this->button_create_people->Location = System::Drawing::Point(12, 12);
			this->button_create_people->Name = L"button_create_people";
			this->button_create_people->Size = System::Drawing::Size(138, 67);
			this->button_create_people->TabIndex = 0;
			this->button_create_people->Text = L"Créer une Personne";
			this->button_create_people->UseVisualStyleBackColor = true;
			this->button_create_people->Click += gcnew System::EventHandler(this, &PeopleForm::button_create_customer_Click);
			// 
			// button_modify_people
			// 
			this->button_modify_people->Location = System::Drawing::Point(12, 85);
			this->button_modify_people->Name = L"button_modify_people";
			this->button_modify_people->Size = System::Drawing::Size(138, 67);
			this->button_modify_people->TabIndex = 1;
			this->button_modify_people->Text = L"Modifier une Personne";
			this->button_modify_people->UseVisualStyleBackColor = true;
			this->button_modify_people->Click += gcnew System::EventHandler(this, &PeopleForm::button_modify_people_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 158);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(138, 67);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Modifier le mot de passe";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PeopleForm::button1_Click);
			// 
			// PeopleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1061, 570);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button_modify_people);
			this->Controls->Add(this->button_create_people);
			this->Name = L"PeopleForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"PeopleForm";
			this->Load += gcnew System::EventHandler(this, &PeopleForm::PeopleForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button_create_customer_Click(System::Object^ sender, System::EventArgs^ e) {
	CreatePeopleForm^ newpeoForm = gcnew CreatePeopleForm(this->id_role_user);
	newpeoForm->ShowDialog();
}

private: System::Void button_modify_people_Click(System::Object^ sender, System::EventArgs^ e) {
	ModifyPeopleForm^ modpeoForm = gcnew ModifyPeopleForm(this->id_role_user);
	modpeoForm->ShowDialog();
}
private: System::Void PeopleForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	ChangePasswordForm^ passForm = gcnew ChangePasswordForm(this->id_staff_user);
	passForm->ShowDialog();
}
};
}
