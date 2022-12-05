#pragma once
#include "PeopleForm.h"
#include "CatalogForm.h"
#include "ConnexionForm.h"
#include "Staff.h"

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
	private: NS_Comp_Svc::Staff^ oStaff;
	private: DataSet^ oDs;
	private: int id_staff;
	private: System::Windows::Forms::Button^ button_people_management;
	private: System::Windows::Forms::Button^ button_catalog;
	private: System::Windows::Forms::Label^ label1;
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
			this->button_catalog = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_people_management
			// 
			this->button_people_management->Location = System::Drawing::Point(16, 15);
			this->button_people_management->Margin = System::Windows::Forms::Padding(4);
			this->button_people_management->Name = L"button_people_management";
			this->button_people_management->Size = System::Drawing::Size(184, 82);
			this->button_people_management->TabIndex = 0;
			this->button_people_management->Text = L"Gestion des\r\nPersonnes";
			this->button_people_management->UseVisualStyleBackColor = true;
			this->button_people_management->Click += gcnew System::EventHandler(this, &MainForm::button_people_management_Click);
			// 
			// button_catalog
			// 
			this->button_catalog->Location = System::Drawing::Point(13, 105);
			this->button_catalog->Margin = System::Windows::Forms::Padding(4);
			this->button_catalog->Name = L"button_catalog";
			this->button_catalog->Size = System::Drawing::Size(184, 82);
			this->button_catalog->TabIndex = 1;
			this->button_catalog->Text = L"Catalogue";
			this->button_catalog->UseVisualStyleBackColor = true;
			this->button_catalog->Click += gcnew System::EventHandler(this, &MainForm::button_catalog_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(457, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1415, 702);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_catalog);
			this->Controls->Add(this->button_people_management);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oStaff = gcnew NS_Comp_Svc::Staff();
		ConnexionForm^ connForm = gcnew ConnexionForm();
		connForm->ShowDialog();
		if (!(connForm->DialogResult == System::Windows::Forms::DialogResult::OK)) {
			this->Close();
		}
		else {
			this->id_staff = connForm->get_id_staff();
		}
		this->oDs = this->oStaff->selectAllStaff("staff");
		for (int i = 0; i < this->oDs->Tables["staff"]->Rows->Count; i++) {
			if (Convert::ToInt32(this->oDs->Tables["staff"]->Rows[i]->ItemArray[0]) == this->id_staff) {
				this->label1->Text = (
					" Bienvenue " +
					this->oDs->Tables["staff"]->Rows[i]->ItemArray[2]->ToString()
					);
			}
		}
	}
	private: System::Void button_people_management_Click(System::Object^ sender, System::EventArgs^ e) {
		PeopleForm^ peopleform = gcnew PeopleForm();
		peopleform->ShowDialog();
	}
	private: System::Void button_catalog_Click(System::Object^ sender, System::EventArgs^ e) {
		CatalogForm catalogform;
		catalogform.ShowDialog();
	}
	};
}
