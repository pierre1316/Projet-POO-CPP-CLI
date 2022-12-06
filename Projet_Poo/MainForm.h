#pragma once
#include "PeopleForm.h"
#include "CatalogForm.h"
<<<<<<< HEAD
#include "TestUniForm.h"
=======
#include "ConnexionForm.h"
#include "Staff.h"
>>>>>>> main

namespace ProjetPoo {

	using namespace std;
	using namespace System;
	using namespace System::IO;

	using namespace System::Text;
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
	private: int id_staff_user;
	private: int id_role_user;
	private: System::Windows::Forms::Button^ button_people_management;
	private: System::Windows::Forms::Button^ button_catalog;
<<<<<<< HEAD
	private: System::Windows::Forms::Button^ button_test_uni;
=======
	private: System::Windows::Forms::Label^ label1;




>>>>>>> main

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->button_people_management = (gcnew System::Windows::Forms::Button());
			this->button_catalog = (gcnew System::Windows::Forms::Button());
<<<<<<< HEAD
			this->button_test_uni = (gcnew System::Windows::Forms::Button());
=======
			this->label1 = (gcnew System::Windows::Forms::Label());
<<<<<<< HEAD
			this->button_folder_select = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
>>>>>>> main
=======
>>>>>>> main
			this->SuspendLayout();
			// 
			// button_people_management
			// 
<<<<<<< HEAD
<<<<<<< HEAD
			this->button_people_management->Location = System::Drawing::Point(16, 15);
			this->button_people_management->Margin = System::Windows::Forms::Padding(4);
=======
			this->button_people_management->Location = System::Drawing::Point(12, 12);
>>>>>>> main
=======
			this->button_people_management->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_people_management->ForeColor = System::Drawing::Color::White;
			this->button_people_management->Location = System::Drawing::Point(15, 304);
			this->button_people_management->Margin = System::Windows::Forms::Padding(6);
>>>>>>> main
			this->button_people_management->Name = L"button_people_management";
			this->button_people_management->Size = System::Drawing::Size(184, 91);
			this->button_people_management->TabIndex = 1;
			this->button_people_management->Text = L"Gestion des\r\nPersonnes";
			this->button_people_management->UseVisualStyleBackColor = false;
			this->button_people_management->Click += gcnew System::EventHandler(this, &MainForm::button_people_management_Click);
			// 
			// button_catalog
			// 
<<<<<<< HEAD
<<<<<<< HEAD
			this->button_catalog->Location = System::Drawing::Point(16, 105);
			this->button_catalog->Margin = System::Windows::Forms::Padding(4);
=======
			this->button_catalog->Location = System::Drawing::Point(10, 85);
>>>>>>> main
=======
			this->button_catalog->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_catalog->ForeColor = System::Drawing::Color::White;
			this->button_catalog->Location = System::Drawing::Point(15, 190);
			this->button_catalog->Margin = System::Windows::Forms::Padding(6);
>>>>>>> main
			this->button_catalog->Name = L"button_catalog";
			this->button_catalog->Size = System::Drawing::Size(184, 91);
			this->button_catalog->TabIndex = 2;
			this->button_catalog->Text = L"Catalogue";
			this->button_catalog->UseVisualStyleBackColor = false;
			this->button_catalog->Click += gcnew System::EventHandler(this, &MainForm::button_catalog_Click);
			// 
<<<<<<< HEAD
			// button_test_uni
			// 
			this->button_test_uni->Location = System::Drawing::Point(16, 195);
			this->button_test_uni->Margin = System::Windows::Forms::Padding(4);
			this->button_test_uni->Name = L"button_test_uni";
			this->button_test_uni->Size = System::Drawing::Size(184, 82);
			this->button_test_uni->TabIndex = 2;
			this->button_test_uni->Text = L"Test Unitaire";
			this->button_test_uni->UseVisualStyleBackColor = true;
			this->button_test_uni->Click += gcnew System::EventHandler(this, &MainForm::button_test_uni_Click);
=======
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(331, 94);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
<<<<<<< HEAD
			// button_folder_select
			// 
			this->button_folder_select->Location = System::Drawing::Point(451, 182);
			this->button_folder_select->Name = L"button_folder_select";
			this->button_folder_select->Size = System::Drawing::Size(158, 23);
			this->button_folder_select->TabIndex = 3;
			this->button_folder_select->Text = L"Créer pdf";
			this->button_folder_select->UseVisualStyleBackColor = true;
			this->button_folder_select->Click += gcnew System::EventHandler(this, &MainForm::button_folder_select_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(715, 94);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(294, 368);
			this->listBox1->TabIndex = 4;
>>>>>>> main
			// 
=======
>>>>>>> main
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
<<<<<<< HEAD
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
<<<<<<< HEAD
			this->ClientSize = System::Drawing::Size(1415, 702);
			this->Controls->Add(this->button_test_uni);
			this->Controls->Add(this->button_catalog);
			this->Controls->Add(this->button_people_management);
			this->Margin = System::Windows::Forms::Padding(4);
=======
			this->ClientSize = System::Drawing::Size(1061, 570);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button_folder_select);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_catalog);
			this->Controls->Add(this->button_people_management);
>>>>>>> main
=======
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1344, 756);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_catalog);
			this->Controls->Add(this->button_people_management);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
>>>>>>> main
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
		this->id_staff_user = connForm->get_id_staff();
		this->oDs = this->oStaff->selectAllStaff("staff");
		for (int i = 0; i < this->oDs->Tables["staff"]->Rows->Count; i++) {
			if (Convert::ToInt32(this->oDs->Tables["staff"]->Rows[i]->ItemArray[0]) == this->id_staff_user) {
				this->label1->Text = (
					" Bienvenue " +
					this->oDs->Tables["staff"]->Rows[i]->ItemArray[2]->ToString()
					);
			}
		}
		this->id_role_user = this->oStaff->getRole(this->id_staff_user);
	}
	private: System::Void button_people_management_Click(System::Object^ sender, System::EventArgs^ e) {
		PeopleForm peopleform(this->id_role_user, this->id_staff_user);
		this->Hide();
		peopleform.ShowDialog();
		this->Show();
	}
	private: System::Void button_catalog_Click(System::Object^ sender, System::EventArgs^ e) {
		CatalogForm catalogform;
		this->Hide();
		catalogform.ShowDialog();
		this->Show();
	}
<<<<<<< HEAD
	private: System::Void button_test_uni_Click(System::Object^ sender, System::EventArgs^ e) {
		TestUniForm^ testuniform = gcnew TestUniForm();
		testuniform->ShowDialog();
=======
	private: System::Void button_folder_select_Click(System::Object^ sender, System::EventArgs^ e) {
		
>>>>>>> main
	}
};
}

