#pragma once
#include "PeopleForm.h"
#include "CatalogForm.h"

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
	private: System::Windows::Forms::Button^ button_catalog;
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
			this->SuspendLayout();
			// 
			// button_people_management
			// 
			this->button_people_management->Location = System::Drawing::Point(16, 15);
			this->button_people_management->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1415, 702);
			this->Controls->Add(this->button_catalog);
			this->Controls->Add(this->button_people_management);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
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
	private: System::Void button_catalog_Click(System::Object^ sender, System::EventArgs^ e) {
		CatalogForm catalogform;
		catalogform.ShowDialog();
	}
	};
}
