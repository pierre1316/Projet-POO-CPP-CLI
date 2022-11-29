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
	/// Description résumée de CreateItemForm
	/// </summary>
	public ref class CreateItemForm : public System::Windows::Forms::Form
	{
	public:
		CreateItemForm(void)
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
		~CreateItemForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: NS_Comp_Svc::Catalog^ oCatalog;
	private: Data::DataSet^ CategoryList;
	private: Data::DataSet^ ItemList;

	private: System::Windows::Forms::Button^ button_delete;
	protected:
	private: System::Windows::Forms::Button^ button_enter;
	private: System::Windows::Forms::TextBox^ textBox_quantity;

	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox_items;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radio_modify_item;

	private: System::Windows::Forms::RadioButton^ radio_create_item;

	private: System::Windows::Forms::TextBox^ textBox_price_ht;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox_quantity_reduction;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_price_ht_after_reduc;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox_minimum;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ combo_category;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::DataGridView^ dgv_colors;


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
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->button_enter = (gcnew System::Windows::Forms::Button());
			this->textBox_quantity = (gcnew System::Windows::Forms::TextBox());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox_items = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radio_modify_item = (gcnew System::Windows::Forms::RadioButton());
			this->radio_create_item = (gcnew System::Windows::Forms::RadioButton());
			this->textBox_price_ht = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_quantity_reduction = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_price_ht_after_reduc = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_minimum = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->combo_category = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dgv_colors = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_colors))->BeginInit();
			this->SuspendLayout();
			// 
			// button_delete
			// 
			this->button_delete->Enabled = false;
			this->button_delete->Location = System::Drawing::Point(235, 291);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(163, 47);
			this->button_delete->TabIndex = 20;
			this->button_delete->Text = L"Supprimer";
			this->button_delete->UseVisualStyleBackColor = true;
			// 
			// button_enter
			// 
			this->button_enter->Location = System::Drawing::Point(423, 291);
			this->button_enter->Name = L"button_enter";
			this->button_enter->Size = System::Drawing::Size(163, 47);
			this->button_enter->TabIndex = 19;
			this->button_enter->Text = L"Enregistrer";
			this->button_enter->UseVisualStyleBackColor = true;
			this->button_enter->Click += gcnew System::EventHandler(this, &CreateItemForm::button_enter_Click);
			// 
			// textBox_quantity
			// 
			this->textBox_quantity->Location = System::Drawing::Point(386, 104);
			this->textBox_quantity->Name = L"textBox_quantity";
			this->textBox_quantity->Size = System::Drawing::Size(200, 22);
			this->textBox_quantity->TabIndex = 18;
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(386, 76);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(200, 22);
			this->textBox_name->TabIndex = 17;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(232, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 16);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Quantité (dans l\'article) :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(338, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nom :";
			// 
			// listBox_items
			// 
			this->listBox_items->Enabled = false;
			this->listBox_items->FormattingEnabled = true;
			this->listBox_items->ItemHeight = 16;
			this->listBox_items->Location = System::Drawing::Point(12, 62);
			this->listBox_items->Name = L"listBox_items";
			this->listBox_items->Size = System::Drawing::Size(202, 276);
			this->listBox_items->TabIndex = 14;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 16);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Gestion des catégories :\r\n";
			// 
			// radio_modify_item
			// 
			this->radio_modify_item->AutoSize = true;
			this->radio_modify_item->Location = System::Drawing::Point(88, 36);
			this->radio_modify_item->Name = L"radio_modify_item";
			this->radio_modify_item->Size = System::Drawing::Size(76, 20);
			this->radio_modify_item->TabIndex = 12;
			this->radio_modify_item->Text = L"Modifier";
			this->radio_modify_item->UseVisualStyleBackColor = true;
			// 
			// radio_create_item
			// 
			this->radio_create_item->AutoSize = true;
			this->radio_create_item->Checked = true;
			this->radio_create_item->Location = System::Drawing::Point(12, 36);
			this->radio_create_item->Name = L"radio_create_item";
			this->radio_create_item->Size = System::Drawing::Size(61, 20);
			this->radio_create_item->TabIndex = 11;
			this->radio_create_item->TabStop = true;
			this->radio_create_item->Text = L"Créer";
			this->radio_create_item->UseVisualStyleBackColor = true;
			this->radio_create_item->CheckedChanged += gcnew System::EventHandler(this, &CreateItemForm::radio_create_item_CheckedChanged);
			// 
			// textBox_price_ht
			// 
			this->textBox_price_ht->Location = System::Drawing::Point(386, 132);
			this->textBox_price_ht->Name = L"textBox_price_ht";
			this->textBox_price_ht->Size = System::Drawing::Size(85, 22);
			this->textBox_price_ht->TabIndex = 23;
			this->textBox_price_ht->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(288, 135);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 16);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Prix hors taxe :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(474, 135);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 16);
			this->label6->TabIndex = 25;
			this->label6->Text = L"€";
			// 
			// textBox_quantity_reduction
			// 
			this->textBox_quantity_reduction->Location = System::Drawing::Point(386, 188);
			this->textBox_quantity_reduction->Name = L"textBox_quantity_reduction";
			this->textBox_quantity_reduction->Size = System::Drawing::Size(200, 22);
			this->textBox_quantity_reduction->TabIndex = 27;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(220, 191);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(156, 16);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Quantité avant réduction :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(523, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 16);
			this->label4->TabIndex = 30;
			this->label4->Text = L"€";
			// 
			// textBox_price_ht_after_reduc
			// 
			this->textBox_price_ht_after_reduc->Location = System::Drawing::Point(435, 216);
			this->textBox_price_ht_after_reduc->Name = L"textBox_price_ht_after_reduc";
			this->textBox_price_ht_after_reduc->Size = System::Drawing::Size(85, 22);
			this->textBox_price_ht_after_reduc->TabIndex = 29;
			this->textBox_price_ht_after_reduc->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(235, 219);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(188, 16);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Prix hors taxe après réduction :";
			// 
			// textBox_minimum
			// 
			this->textBox_minimum->Location = System::Drawing::Point(386, 160);
			this->textBox_minimum->Name = L"textBox_minimum";
			this->textBox_minimum->Size = System::Drawing::Size(200, 22);
			this->textBox_minimum->TabIndex = 32;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(262, 163);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(118, 16);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Quantité minimum :";
			// 
			// combo_category
			// 
			this->combo_category->FormattingEnabled = true;
			this->combo_category->Location = System::Drawing::Point(386, 244);
			this->combo_category->Name = L"combo_category";
			this->combo_category->Size = System::Drawing::Size(200, 24);
			this->combo_category->TabIndex = 34;
			this->combo_category->Text = L"Sélectionnez une Catégorie";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(312, 247);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 16);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Catégorie :";
			// 
			// dgv_colors
			// 
			this->dgv_colors->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_colors->Location = System::Drawing::Point(605, 62);
			this->dgv_colors->Name = L"dgv_colors";
			this->dgv_colors->RowHeadersWidth = 51;
			this->dgv_colors->RowTemplate->Height = 24;
			this->dgv_colors->Size = System::Drawing::Size(268, 276);
			this->dgv_colors->TabIndex = 35;
			// 
			// CreateItemForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(885, 353);
			this->Controls->Add(this->dgv_colors);
			this->Controls->Add(this->combo_category);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox_minimum);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_price_ht_after_reduc);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox_quantity_reduction);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox_price_ht);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button_delete);
			this->Controls->Add(this->button_enter);
			this->Controls->Add(this->textBox_quantity);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox_items);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radio_modify_item);
			this->Controls->Add(this->radio_create_item);
			this->Name = L"CreateItemForm";
			this->Text = L"CreateItemForm";
			this->Load += gcnew System::EventHandler(this, &CreateItemForm::CreateItemForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_colors))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void CreateItemForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oCatalog = gcnew NS_Comp_Svc::Catalog();
	reload_components();
}


private: System::Void reload_components(System::Void) {
	this->listBox_items->ResetText();
	this->textBox_name->ResetText();
	this->textBox_quantity->ResetText();
	this->textBox_price_ht->ResetText();
	this->textBox_quantity_reduction->ResetText();
	this->textBox_price_ht_after_reduc->ResetText();
	this->combo_category->Text = L"Sélectionnez une Catégorie";
	this->dgv_colors->Refresh();
	if (this->radio_create_item->Checked) {
		this->listBox_items->Enabled = false;
		this->button_delete->Enabled = false;
	}
	else {
		this->listBox_items->Enabled = true;
		this->button_delete->Enabled = true;
	}
	this->CategoryList = this->oCatalog->selectCategory("categories");
	for (int i = 0; i < this->CategoryList->Tables["categories"]->Rows->Count; i++) {
		this->combo_category->Items->Add(
			this->CategoryList->Tables["categories"]->Rows[i]->ItemArray[1]->ToString() + " | TVA : " +
			this->CategoryList->Tables["categories"]->Rows[i]->ItemArray[2]->ToString() + "%");
	}
}


private: System::Void radio_create_item_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	reload_components();
}
private: System::Void button_enter_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->radio_create_item->Checked) {

	}
	reload_components();
}

};
}
