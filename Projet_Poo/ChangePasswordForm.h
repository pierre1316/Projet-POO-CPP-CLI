#pragma once
#include "Staff.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ChangePasswordForm
	/// </summary>
	public ref class ChangePasswordForm : public System::Windows::Forms::Form
	{
	public:
		ChangePasswordForm(int idStaff)
		{
			this->idStaff = idStaff;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	private: System::Windows::Forms::Label^ label1;
	public:
	private: System::Windows::Forms::TextBox^ textBox_old_password;
	private: System::Windows::Forms::TextBox^ textBox_repeat_password;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_new_password;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button_validate;
	private: System::Windows::Forms::Button^ button_stop;
	private: int idStaff;
	private: NS_Comp_Svc::Staff^ oStaff;
	private: String^ password;
	private: DataSet^ oDs;
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~ChangePasswordForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_old_password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_repeat_password = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_new_password = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button_validate = (gcnew System::Windows::Forms::Button());
			this->button_stop = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ancien mot de passe :";
			// 
			// textBox_old_password
			// 
			this->textBox_old_password->Location = System::Drawing::Point(201, 60);
			this->textBox_old_password->Name = L"textBox_old_password";
			this->textBox_old_password->PasswordChar = '*';
			this->textBox_old_password->Size = System::Drawing::Size(164, 20);
			this->textBox_old_password->TabIndex = 1;
			// 
			// textBox_repeat_password
			// 
			this->textBox_repeat_password->Location = System::Drawing::Point(201, 140);
			this->textBox_repeat_password->Name = L"textBox_repeat_password";
			this->textBox_repeat_password->PasswordChar = '*';
			this->textBox_repeat_password->Size = System::Drawing::Size(164, 20);
			this->textBox_repeat_password->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Répéter le nouveau mot de passe :";
			// 
			// textBox_new_password
			// 
			this->textBox_new_password->Location = System::Drawing::Point(201, 99);
			this->textBox_new_password->Name = L"textBox_new_password";
			this->textBox_new_password->PasswordChar = '*';
			this->textBox_new_password->Size = System::Drawing::Size(164, 20);
			this->textBox_new_password->TabIndex = 2;
			this->textBox_new_password->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ChangePasswordForm::textBox_new_password_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(37, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Nouveau mot de passe :";
			// 
			// button_validate
			// 
			this->button_validate->Location = System::Drawing::Point(201, 183);
			this->button_validate->Name = L"button_validate";
			this->button_validate->Size = System::Drawing::Size(75, 23);
			this->button_validate->TabIndex = 4;
			this->button_validate->Text = L"Valider";
			this->button_validate->UseVisualStyleBackColor = true;
			this->button_validate->Click += gcnew System::EventHandler(this, &ChangePasswordForm::button_validate_Click);
			// 
			// button_stop
			// 
			this->button_stop->Location = System::Drawing::Point(99, 183);
			this->button_stop->Name = L"button_stop";
			this->button_stop->Size = System::Drawing::Size(75, 23);
			this->button_stop->TabIndex = 5;
			this->button_stop->Text = L"Annuler";
			this->button_stop->UseVisualStyleBackColor = true;
			this->button_stop->Click += gcnew System::EventHandler(this, &ChangePasswordForm::button_stop_Click);
			// 
			// ChangePasswordForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(399, 244);
			this->Controls->Add(this->button_stop);
			this->Controls->Add(this->button_validate);
			this->Controls->Add(this->textBox_new_password);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_repeat_password);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_old_password);
			this->Controls->Add(this->label1);
			this->Name = L"ChangePasswordForm";
			this->Text = L"ChangePasswordForm";
			this->Load += gcnew System::EventHandler(this, &ChangePasswordForm::ChangePasswordForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ChangePasswordForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oStaff = gcnew NS_Comp_Svc::Staff();
	this->oDs = this->oStaff->getTheStaff("staff", this->idStaff);
	this->password = this->oDs->Tables["staff"]->Rows[0]->ItemArray[5]->ToString();
}
private: System::Void button_validate_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox_new_password->Text == this->textBox_repeat_password->Text && this->textBox_old_password->Text == this->password) {
		this->oStaff->setStaffPassword(this->idStaff, this->textBox_new_password->Text);
		this->Close();
	}
	else {
		this->textBox_old_password->ResetText();
		this->textBox_repeat_password->ResetText();
		this->textBox_new_password->ResetText();
		return;
	}
}
private: System::Void button_stop_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void textBox_new_password_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) {
		button_validate_Click(sender, e);
	}
}
};
}
