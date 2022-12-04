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
	/// Description résumée de PaymentForm
	/// </summary>
	public ref class PaymentForm : public System::Windows::Forms::Form
	{
	public:
		PaymentForm(void)
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
		~PaymentForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: NS_Comp_Svc::Catalog^ oCatalog;
	private: Data::DataSet^ oDs;
	private: int idMethod;
	private: System::Windows::Forms::RadioButton^ radio_create_method;
	private: System::Windows::Forms::RadioButton^ radio_modify_method;


	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox_payments_methods;


	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::TextBox^ textBox_name;




	private: System::Windows::Forms::Button^ button_enter;
	private: System::Windows::Forms::Button^ button_delete;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->radio_create_method = (gcnew System::Windows::Forms::RadioButton());
			this->radio_modify_method = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox_payments_methods = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->button_enter = (gcnew System::Windows::Forms::Button());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// radio_create_method
			// 
			this->radio_create_method->AutoSize = true;
			this->radio_create_method->Checked = true;
			this->radio_create_method->Location = System::Drawing::Point(12, 35);
			this->radio_create_method->Name = L"radio_create_method";
			this->radio_create_method->Size = System::Drawing::Size(61, 20);
			this->radio_create_method->TabIndex = 0;
			this->radio_create_method->TabStop = true;
			this->radio_create_method->Text = L"Créer";
			this->radio_create_method->UseVisualStyleBackColor = true;
			this->radio_create_method->CheckedChanged += gcnew System::EventHandler(this, &PaymentForm::radio_create_category_CheckedChanged);
			// 
			// radio_modify_method
			// 
			this->radio_modify_method->AutoSize = true;
			this->radio_modify_method->Location = System::Drawing::Point(88, 35);
			this->radio_modify_method->Name = L"radio_modify_method";
			this->radio_modify_method->Size = System::Drawing::Size(76, 20);
			this->radio_modify_method->TabIndex = 1;
			this->radio_modify_method->Text = L"Modifier";
			this->radio_modify_method->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Gestion des moyens de paiment :\r\n";
			// 
			// listBox_payments_methods
			// 
			this->listBox_payments_methods->Enabled = false;
			this->listBox_payments_methods->FormattingEnabled = true;
			this->listBox_payments_methods->ItemHeight = 16;
			this->listBox_payments_methods->Location = System::Drawing::Point(12, 61);
			this->listBox_payments_methods->Name = L"listBox_payments_methods";
			this->listBox_payments_methods->Size = System::Drawing::Size(247, 180);
			this->listBox_payments_methods->TabIndex = 3;
			this->listBox_payments_methods->SelectedIndexChanged += gcnew System::EventHandler(this, &PaymentForm::listBox_categories_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(322, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Nom :";
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(370, 110);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(200, 22);
			this->textBox_name->TabIndex = 6;
			// 
			// button_enter
			// 
			this->button_enter->Location = System::Drawing::Point(441, 181);
			this->button_enter->Name = L"button_enter";
			this->button_enter->Size = System::Drawing::Size(163, 47);
			this->button_enter->TabIndex = 9;
			this->button_enter->Text = L"Enregistrer";
			this->button_enter->UseVisualStyleBackColor = true;
			this->button_enter->Click += gcnew System::EventHandler(this, &PaymentForm::button_enter_Click);
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
			this->button_delete->Click += gcnew System::EventHandler(this, &PaymentForm::button_delete_Click);
			// 
			// PaymentForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(618, 252);
			this->Controls->Add(this->button_delete);
			this->Controls->Add(this->button_enter);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox_payments_methods);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radio_modify_method);
			this->Controls->Add(this->radio_create_method);
			this->Name = L"PaymentForm";
			this->Text = L"CreateCategoryForm";
			this->Load += gcnew System::EventHandler(this, &PaymentForm::CreateCategoryForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void reload_components(System::Void) {
		this->oDs = this->oCatalog->selectPaymentMethod("methods");
		this->textBox_name->ResetText();
		if (this->radio_create_method->Checked) {
			this->listBox_payments_methods->Enabled = false;
			this->button_delete->Enabled = false;
			this->listBox_payments_methods->Items->Clear();
		}
		else {
			this->listBox_payments_methods->Enabled = true;
			this->button_delete->Enabled = true;
			this->listBox_payments_methods->Items->Clear();
		}
		for (int i = 0; i < this->oDs->Tables["methods"]->Rows->Count; i++) {
			this->listBox_payments_methods->Items->Add(
				this->oDs->Tables["methods"]->Rows[i]->ItemArray[0]->ToString() + " | Nom : " +
				this->oDs->Tables["methods"]->Rows[i]->ItemArray[1]->ToString());
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
		if (this->radio_create_method->Checked) {
			this->oCatalog->createPaymentMethod(this->textBox_name->Text->ToString());
		}
		else {
			this->oCatalog->updatePaymentMethod(this->idMethod, this->textBox_name->Text->ToString());
		}
		reload_components();
	}
	private: System::Void listBox_categories_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->listBox_payments_methods->SelectedIndex != -1) {
			this->idMethod = Convert::ToInt32(this->oDs->Tables["methods"]->Rows[this->listBox_payments_methods->SelectedIndex]->ItemArray[0]);
			this->textBox_name->Text = Convert::ToString(this->oDs->Tables["methods"]->Rows[this->listBox_payments_methods->SelectedIndex]->ItemArray[1]);
		}
	}
	private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oCatalog->deletePaymentMethod(this->idMethod);
		reload_components();
	}
	};
}
