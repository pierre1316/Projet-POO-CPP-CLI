#pragma once
#include "Staff.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace NS_Comp_Data;

	/// <summary>
	/// Description r�sum�e de connexion
	/// </summary>
	public ref class ConnexionForm : public System::Windows::Forms::Form
	{
	public:
		ConnexionForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~ConnexionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: NS_Comp_Svc::Staff^ oStaff;
		   System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: int id_staff;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 119);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(134, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom d\'utilisateur :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(84, 209);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Mot de passe :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(269, 116);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 26);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(269, 206);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(148, 26);
			this->textBox2->TabIndex = 2;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ConnexionForm::textBox2_KeyDown);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(212, 306);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 36);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Connection";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ConnexionForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(207, 44);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(38, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Ahh";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(462, 306);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 36);
			this->button2->TabIndex = 6;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ConnexionForm::button2_Click);
			// 
			// ConnexionForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(573, 441);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"ConnexionForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Page de Connexion";
			this->Load += gcnew System::EventHandler(this, &ConnexionForm::connexion_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: System::Void connexion_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oStaff = gcnew NS_Comp_Svc::Staff();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oDs = this->oStaff->getConnexion("rsl", this->textBox1->Text, this->textBox2->Text);
	if (this->oDs->Tables["rsl"]->Rows->Count == 0) {
		this->label3->Text = "Mauvais Nom d'utilisateur ou mot de passe\nRéessayez";
		this->textBox2->Clear();
	}
	else {
		this->id_staff = Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[0]->ItemArray[0]);
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
}
public: int get_id_staff(System::Void) {
	return this->id_staff;
}



private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Enter) {
		button1_Click(sender, e);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->id_staff = 4;
	this->DialogResult = System::Windows::Forms::DialogResult::OK;
	this->Close();
}
};
}
