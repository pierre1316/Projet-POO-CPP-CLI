#pragma once
#include "Catalog.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CreateCategoryForm
	/// </summary>
	public ref class CreateCategoryForm : public System::Windows::Forms::Form
	{
	public:
		CreateCategoryForm(void)
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
		~CreateCategoryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: NS_Comp_Svc::Catalog^ oCatalog;
	private: Data::DataSet^ oDs;
	private: int idCategory;

	private: System::Windows::Forms::RadioButton^ radio_create_category;
	protected:
	private: System::Windows::Forms::RadioButton^ radio_modify_category;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox_categories;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::TextBox^ textBox_tva;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button_enter;
	private: System::Windows::Forms::Button^ button_delete;


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
			this->radio_create_category = (gcnew System::Windows::Forms::RadioButton());
			this->radio_modify_category = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox_categories = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_tva = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button_enter = (gcnew System::Windows::Forms::Button());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// radio_create_category
			// 
			this->radio_create_category->AutoSize = true;
			this->radio_create_category->Checked = true;
			this->radio_create_category->Location = System::Drawing::Point(12, 35);
			this->radio_create_category->Name = L"radio_create_category";
			this->radio_create_category->Size = System::Drawing::Size(61, 20);
			this->radio_create_category->TabIndex = 0;
			this->radio_create_category->TabStop = true;
			this->radio_create_category->Text = L"Créer";
			this->radio_create_category->UseVisualStyleBackColor = true;
			this->radio_create_category->CheckedChanged += gcnew System::EventHandler(this, &CreateCategoryForm::radio_create_category_CheckedChanged);
			// 
			// radio_modify_category
			// 
			this->radio_modify_category->AutoSize = true;
			this->radio_modify_category->Location = System::Drawing::Point(88, 35);
			this->radio_modify_category->Name = L"radio_modify_category";
			this->radio_modify_category->Size = System::Drawing::Size(76, 20);
			this->radio_modify_category->TabIndex = 1;
			this->radio_modify_category->Text = L"Modifier";
			this->radio_modify_category->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Gestion des catégories :\r\n";
			// 
			// listBox_categories
			// 
			this->listBox_categories->Enabled = false;
			this->listBox_categories->FormattingEnabled = true;
			this->listBox_categories->ItemHeight = 16;
			this->listBox_categories->Location = System::Drawing::Point(12, 61);
			this->listBox_categories->Name = L"listBox_categories";
			this->listBox_categories->Size = System::Drawing::Size(247, 180);
			this->listBox_categories->TabIndex = 3;
			this->listBox_categories->SelectedIndexChanged += gcnew System::EventHandler(this, &CreateCategoryForm::listBox_categories_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(345, 97);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nom :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(297, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Taux de TVA :";
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(393, 94);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(200, 22);
			this->textBox_name->TabIndex = 6;
			// 
			// textBox_tva
			// 
			this->textBox_tva->Location = System::Drawing::Point(393, 134);
			this->textBox_tva->Name = L"textBox_tva";
			this->textBox_tva->Size = System::Drawing::Size(85, 22);
			this->textBox_tva->TabIndex = 7;
			this->textBox_tva->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(478, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"%";
			// 
			// button_enter
			// 
			this->button_enter->Location = System::Drawing::Point(441, 181);
			this->button_enter->Name = L"button_enter";
			this->button_enter->Size = System::Drawing::Size(163, 47);
			this->button_enter->TabIndex = 9;
			this->button_enter->Text = L"Enregistrer";
			this->button_enter->UseVisualStyleBackColor = true;
			this->button_enter->Click += gcnew System::EventHandler(this, &CreateCategoryForm::button_enter_Click);
			// 
			// button_delete
			// 
			this->button_delete->Enabled = false;
			this->button_delete->Location = System::Drawing::Point(265, 181);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(163, 47);
			this->button_delete->TabIndex = 10;
			this->button_delete->Text = L"Supprimer";
			this->button_delete->UseVisualStyleBackColor = true;
			this->button_delete->Click += gcnew System::EventHandler(this, &CreateCategoryForm::button_delete_Click);
			// 
			// CreateCategoryForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(618, 252);
			this->Controls->Add(this->button_delete);
			this->Controls->Add(this->button_enter);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_tva);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox_categories);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radio_modify_category);
			this->Controls->Add(this->radio_create_category);
			this->Name = L"CreateCategoryForm";
			this->Text = L"CreateCategoryForm";
			this->Load += gcnew System::EventHandler(this, &CreateCategoryForm::CreateCategoryForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void reload_components(System::Void) {
	this->oDs = this->oCatalog->selectCategory("categories");
	this->textBox_name->ResetText();
	this->textBox_tva->ResetText();
	if (this->radio_create_category->Checked) {
		this->listBox_categories->Enabled = false;
		this->button_delete->Enabled = false;
		this->listBox_categories->Items->Clear();
	}
	else {
		this->listBox_categories->Enabled = true;
		this->button_delete->Enabled = true;
		this->listBox_categories->Items->Clear();
	}
	for (int i = 0; i < this->oDs->Tables["categories"]->Rows->Count; i++) {
		this->listBox_categories->Items->Add(
			this->oDs->Tables["categories"]->Rows[i]->ItemArray[0]->ToString() + " | Nom : " +
			this->oDs->Tables["categories"]->Rows[i]->ItemArray[1]->ToString() + " | TVA : " +
			this->oDs->Tables["categories"]->Rows[i]->ItemArray[2]->ToString() + "%");
	}
}

private: System::Void CreateCategoryForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oCatalog = gcnew NS_Comp_Svc::Catalog();
	reload_components();
}
private: System::Void radio_create_category_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	reload_components();
}
private: System::Void button_enter_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->radio_create_category->Checked) {
		this->oCatalog->createCategory(this->textBox_name->Text->ToString(), this->textBox_tva->Text->ToString());
	}
	else {
		this->oCatalog->updateCategory(this->idCategory, this->textBox_name->Text->ToString(), this->textBox_tva->Text->ToString());
	}
	reload_components();
}
private: System::Void listBox_categories_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->listBox_categories->SelectedIndex != -1) {
		this->idCategory = Convert::ToInt32(this->oDs->Tables["categories"]->Rows[this->listBox_categories->SelectedIndex]->ItemArray[0]);
		this->textBox_name->Text = Convert::ToString(this->oDs->Tables["categories"]->Rows[this->listBox_categories->SelectedIndex]->ItemArray[1]);
		this->textBox_tva->Text = Convert::ToString(this->oDs->Tables["categories"]->Rows[this->listBox_categories->SelectedIndex]->ItemArray[2]);
	}
}
private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oCatalog->deleteCategory(this->idCategory);
	reload_components();
}
};
}
