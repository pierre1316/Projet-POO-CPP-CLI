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
	private: String^ text;
	private: String^ fileName;
	private: String^ reference_order;
	private: Data::DataSet^ oDs;
	private: NS_Comp_Svc::Catalog^ oCatalog;
	private: System::Windows::Forms::ListBox^ listBox_invoices;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox_display_invoice;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button_export;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(InvoiceForm::typeid));
			this->listBox_invoices = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox_display_invoice = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button_export = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox_invoices
			// 
			this->listBox_invoices->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox_invoices->FormattingEnabled = true;
			this->listBox_invoices->ItemHeight = 29;
			this->listBox_invoices->Location = System::Drawing::Point(176, 195);
			this->listBox_invoices->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->listBox_invoices->Name = L"listBox_invoices";
			this->listBox_invoices->Size = System::Drawing::Size(284, 468);
			this->listBox_invoices->TabIndex = 0;
			this->listBox_invoices->SelectedIndexChanged += gcnew System::EventHandler(this, &InvoiceForm::listBox_invoices_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SandyBrown;
			this->label1->Location = System::Drawing::Point(188, 128);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(360, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Choisir une facture à afficher :";
			// 
			// richTextBox_display_invoice
			// 
			this->richTextBox_display_invoice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->richTextBox_display_invoice->Location = System::Drawing::Point(698, 14);
			this->richTextBox_display_invoice->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->richTextBox_display_invoice->Name = L"richTextBox_display_invoice";
			this->richTextBox_display_invoice->ReadOnly = true;
			this->richTextBox_display_invoice->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedBoth;
			this->richTextBox_display_invoice->Size = System::Drawing::Size(566, 674);
			this->richTextBox_display_invoice->TabIndex = 3;
			this->richTextBox_display_invoice->Text = L"";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(30, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(151, 139);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 24;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(187, 53);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(454, 77);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 25;
			this->pictureBox2->TabStop = false;
			// 
			// button_export
			// 
			this->button_export->BackColor = System::Drawing::Color::SandyBrown;
			this->button_export->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_export->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_export->Location = System::Drawing::Point(698, 696);
			this->button_export->Name = L"button_export";
			this->button_export->Size = System::Drawing::Size(566, 38);
			this->button_export->TabIndex = 26;
			this->button_export->Text = L"Exporter en .txt";
			this->button_export->UseVisualStyleBackColor = false;
			this->button_export->Click += gcnew System::EventHandler(this, &InvoiceForm::button_export_Click);
			// 
			// InvoiceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1344, 756);
			this->Controls->Add(this->button_export);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->richTextBox_display_invoice);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox_invoices);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"InvoiceForm";
			this->Text = L"InvoiceForm";
			this->Load += gcnew System::EventHandler(this, &InvoiceForm::InvoiceForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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
	list_box_display_load();
}


//
// Gestion de la fiche de la facture
//
private: System::Void list_box_display_load(System::Void) {
	Data::DataTable^ invoiceTable;
	Data::DataTable^ invoiceContainTable;
	this->text = "";
	invoiceTable = this->oCatalog->selectOneInvoice("invoices", this->reference_order)->Tables["invoices"];
	text += "RADTEK\n";
	text += "		FACTURE	\n";
	text += "	Client : " + invoiceTable->Rows[0]->ItemArray[8]->ToString() + "\n";
	DateTime date = Convert::ToDateTime(invoiceTable->Rows[0]->ItemArray[5]);
	text += "  Facture faite le " + date.Day + "/" + date.Month + "/" + date.Year + "\n";
	text += "  Moyen de paiement : " + invoiceTable->Rows[0]->ItemArray[2]->ToString() + "\n\n\n";
	invoiceContainTable = this->oCatalog->selectInvoiceContain("contains", this->reference_order)->Tables["contains"];
	String^ category = "nothing";
	for (int i = 0; i < invoiceContainTable->Rows->Count; i++) {
		if (invoiceContainTable->Rows[i]->ItemArray[4]->ToString() != category) {
			category = invoiceContainTable->Rows[i]->ItemArray[4]->ToString();
			text += category + " :\n";
		}
		String^ itemcolor = "nothing";
		text += "   " + invoiceContainTable->Rows[i]->ItemArray[2]->ToString() + " " + 
			invoiceContainTable->Rows[i]->ItemArray[1]->ToString() + "\n";
		text += "	Quantité : " + invoiceContainTable->Rows[i]->ItemArray[7]->ToString() + "\n";
		int price_ht;
		int price_ttc;
		if (Convert::ToInt32(invoiceContainTable->Rows[i]->ItemArray[7]) < Convert::ToInt32(invoiceContainTable->Rows[i]->ItemArray[9])) {
			price_ht = Convert::ToInt32(invoiceContainTable->Rows[i]->ItemArray[6]) * Convert::ToInt32(invoiceContainTable->Rows[i]->ItemArray[12]);
			price_ttc = Convert::ToInt32(invoiceContainTable->Rows[i]->ItemArray[8]) * Convert::ToInt32(invoiceContainTable->Rows[i]->ItemArray[12]);
		}
		else {
			price_ht = Convert::ToInt32(invoiceContainTable->Rows[i]->ItemArray[10]) * Convert::ToInt32(invoiceContainTable->Rows[i]->ItemArray[12]);
			price_ttc = Convert::ToInt32(invoiceContainTable->Rows[i]->ItemArray[11]) * Convert::ToInt32(invoiceContainTable->Rows[i]->ItemArray[12]);
		}
		text += "	    Prix Hors Taxes  : " + price_ht + " €\n";
		text += "	    Prix Toutes Taxes Comprises  : " + price_ttc + " €\n";
		text += "		Total : HT : " + price_ht * Convert::ToInt32(invoiceContainTable->Rows[i]->ItemArray[7]) + " €\n";
		text += "		TTC : " + price_ttc * Convert::ToInt32(invoiceContainTable->Rows[i]->ItemArray[7]) + " €\n";
	}
	invoiceTable = this->oCatalog->selectOneInvoice("invoices", this->reference_order)->Tables["invoices"];
	text += "------------------------------------------------------\n";
	text += "   Total Hors Taxes : " + invoiceTable->Rows[0]->ItemArray[3]->ToString() + " €\n";
	text += "   Total Toutes Taxes Comprises : " + invoiceTable->Rows[0]->ItemArray[4]->ToString() + " €\n";
	text += "Adresse de Livraison : \n " + invoiceTable->Rows[0]->ItemArray[6]->ToString() + "\n";
	text += "Adresse de Facturation : \n " + invoiceTable->Rows[0]->ItemArray[7]->ToString();
	this->richTextBox_display_invoice->Clear();
	this->richTextBox_display_invoice->Text = text;
	this->fileName = "FACTURE-" + this->reference_order + ".txt";
}

private: System::Void button_export_Click(System::Object^ sender, System::EventArgs^ e) 
{
	SaveFileDialog^ sfd = gcnew SaveFileDialog();
	sfd->FileName = fileName;
	sfd->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	Windows::Forms::DialogResult result = sfd->ShowDialog();
	if (result == Windows::Forms::DialogResult::OK)
	{
		//path = sfd->Dire;
		//this->label1->Text = path;
		IO::File::WriteAllText(sfd->FileName, this->text);
	}
}
};
}
