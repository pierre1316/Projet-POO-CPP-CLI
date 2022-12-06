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
	/// Description résumée de InvoiceForm
	/// </summary>
	public ref class InvoiceForm : public System::Windows::Forms::Form
	{
	public:
		InvoiceForm(void)
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
		~InvoiceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ reference_order;
	private: Data::DataSet^ oDs;
	private: NS_Comp_Svc::Catalog^ oCatalog;
	private: System::Windows::Forms::ListBox^ listBox_invoices;
	private: System::Windows::Forms::ListBox^ listBox_display_invoice;
	private: System::Windows::Forms::Label^ label1;


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
			this->listBox_invoices = (gcnew System::Windows::Forms::ListBox());
			this->listBox_display_invoice = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox_invoices
			// 
			this->listBox_invoices->FormattingEnabled = true;
			this->listBox_invoices->Location = System::Drawing::Point(12, 398);
			this->listBox_invoices->Name = L"listBox_invoices";
			this->listBox_invoices->Size = System::Drawing::Size(129, 173);
			this->listBox_invoices->TabIndex = 0;
			this->listBox_invoices->SelectedIndexChanged += gcnew System::EventHandler(this, &InvoiceForm::listBox_invoices_SelectedIndexChanged);
			// 
			// listBox_display_invoice
			// 
			this->listBox_display_invoice->FormattingEnabled = true;
			this->listBox_display_invoice->HorizontalScrollbar = true;
			this->listBox_display_invoice->Location = System::Drawing::Point(12, 12);
			this->listBox_display_invoice->Name = L"listBox_display_invoice";
			this->listBox_display_invoice->ScrollAlwaysVisible = true;
			this->listBox_display_invoice->Size = System::Drawing::Size(193, 355);
			this->listBox_display_invoice->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(195, 422);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// InvoiceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(891, 627);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox_display_invoice);
			this->Controls->Add(this->listBox_invoices);
			this->Name = L"InvoiceForm";
			this->Text = L"InvoiceForm";
			this->Load += gcnew System::EventHandler(this, &InvoiceForm::InvoiceForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void InvoiceForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oCatalog = gcnew NS_Comp_Svc::Catalog();
	listbox_invoices_load();
}

//
// Gestion de la liste des factures
//

private: System::Void listbox_invoices_load(System::Void) {
	this->oDs = this->oCatalog->selectInvoices("invoices");
	this->listBox_invoices->Items->Clear();
	for (int i = 0; i < this->oDs->Tables["invoices"]->Rows->Count; i++) {
		this->listBox_invoices->Items->Add(this->oDs->Tables["invoices"]->Rows[i]->ItemArray[0]->ToString());
	}
}
private: System::Void listBox_invoices_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->listBox_invoices->SelectedIndex == -1) {
		return;
	}
	this->reference_order = listBox_invoices->Items[this->listBox_invoices->SelectedIndex]->ToString();
}


//
// Gestion de la fiche de la facture
//

};
}
