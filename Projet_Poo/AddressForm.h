#pragma once
#include "CLservCustomer.h"
#include "CLservStaff.h"
#include "CLservPeople.h"
#include "CLservAddress.h"
#include "CreateAddressForm.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AddressForm
	/// </summary>
	public ref class AddressForm : public System::Windows::Forms::Form
	{
	public:
		AddressForm(void)
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
		~AddressForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listbox_people;
	private: System::Windows::Forms::DataGridView^ data_address_deli;

	private: int idPeople;
	private: NS_Comp_Svc::CLservCustomer^ oCust;
	private: NS_Comp_Svc::CLservStaff^ oStaff;
	private: NS_Comp_Svc::CLservPeople^ oPeo;
	private: NS_Comp_Svc::CLservAddress^ oAddress;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::DataGridView^ data_address_bill;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button_create_address;

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
			this->listbox_people = (gcnew System::Windows::Forms::ListBox());
			this->data_address_deli = (gcnew System::Windows::Forms::DataGridView());
			this->data_address_bill = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button_create_address = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_address_deli))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_address_bill))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Choisir une personne :\r\n";
			// 
			// listbox_people
			// 
			this->listbox_people->FormattingEnabled = true;
			this->listbox_people->ItemHeight = 16;
			this->listbox_people->Location = System::Drawing::Point(19, 59);
			this->listbox_people->Name = L"listbox_people";
			this->listbox_people->Size = System::Drawing::Size(203, 308);
			this->listbox_people->TabIndex = 4;
			this->listbox_people->SelectedIndexChanged += gcnew System::EventHandler(this, &AddressForm::listbox_people_SelectedIndexChanged);
			// 
			// data_address_deli
			// 
			this->data_address_deli->AllowUserToAddRows = false;
			this->data_address_deli->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->data_address_deli->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_address_deli->Location = System::Drawing::Point(256, 59);
			this->data_address_deli->MultiSelect = false;
			this->data_address_deli->Name = L"data_address_deli";
			this->data_address_deli->RowHeadersWidth = 51;
			this->data_address_deli->RowTemplate->Height = 24;
			this->data_address_deli->Size = System::Drawing::Size(992, 172);
			this->data_address_deli->TabIndex = 8;
			this->data_address_deli->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AddressForm::data_address_deli_CellValueChanged);
			this->data_address_deli->UserDeletingRow += gcnew System::Windows::Forms::DataGridViewRowCancelEventHandler(this, &AddressForm::data_address_deli_UserDeletingRow);
			// 
			// data_address_bill
			// 
			this->data_address_bill->AllowUserToAddRows = false;
			this->data_address_bill->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->data_address_bill->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_address_bill->Location = System::Drawing::Point(256, 265);
			this->data_address_bill->MultiSelect = false;
			this->data_address_bill->Name = L"data_address_bill";
			this->data_address_bill->RowHeadersWidth = 51;
			this->data_address_bill->RowTemplate->Height = 24;
			this->data_address_bill->Size = System::Drawing::Size(992, 181);
			this->data_address_bill->TabIndex = 9;
			this->data_address_bill->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AddressForm::data_address_bill_CellValueChanged);
			this->data_address_bill->UserDeletingRow += gcnew System::Windows::Forms::DataGridViewRowCancelEventHandler(this, &AddressForm::data_address_bill_UserDeletingRow);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(263, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Addresses de livraison :";
			this->label2->Click += gcnew System::EventHandler(this, &AddressForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(263, 246);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(162, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Addresses de facturation :";
			// 
			// button_create_address
			// 
			this->button_create_address->Enabled = false;
			this->button_create_address->Location = System::Drawing::Point(19, 373);
			this->button_create_address->Name = L"button_create_address";
			this->button_create_address->Size = System::Drawing::Size(203, 72);
			this->button_create_address->TabIndex = 12;
			this->button_create_address->Text = L"Ajouter une nouvelle \r\naddresse";
			this->button_create_address->UseVisualStyleBackColor = true;
			this->button_create_address->Click += gcnew System::EventHandler(this, &AddressForm::button_create_address_Click);
			// 
			// AddressForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1260, 458);
			this->Controls->Add(this->button_create_address);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->data_address_bill);
			this->Controls->Add(this->data_address_deli);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listbox_people);
			this->Name = L"AddressForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"AddressForm";
			this->Load += gcnew System::EventHandler(this, &AddressForm::AddressForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_address_deli))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_address_bill))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void listbox_people_load(System::Void) {
	this->oDs = this->oCust->selectAllCustomer("rsl");
	this->listbox_people->Items->Clear();
	for (int i = 0; i < this->oDs->Tables["rsl"]->Rows->Count; i++) {
		this->listbox_people->Items->Add(
			this->oDs->Tables["rsl"]->Rows[i]->ItemArray[0]->ToString() + " " +
			this->oDs->Tables["rsl"]->Rows[i]->ItemArray[1]->ToString() + " " +
			this->oDs->Tables["rsl"]->Rows[i]->ItemArray[2]->ToString());
	}
}

private: System::Void reloadAddress(System::Void) {
	
	int index = this->listbox_people->SelectedIndex;
	if (index == -1) {
		return;
	}

	this->data_address_deli->Refresh();
	System::Data::DataSet^ addrDeli;
	addrDeli = this->oAddress->selectAddressDelivery("deli", this->idPeople);
	this->data_address_deli->DataMember = "deli";
	this->data_address_deli->DataSource = addrDeli;


	this->data_address_bill->Refresh();
	System::Data::DataSet^ addrBill;
	addrBill = this->oAddress->selectAddressBilling("bill", this->idPeople);
	this->data_address_bill->DataMember = "bill";
	this->data_address_bill->DataSource = addrBill;


	
}



private: System::Void window_components_load(System::Void) {
	listbox_people_load();
	
}

	private: System::Void listbox_people_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->button_create_address->Enabled = true;
		this->oDs = this->oCust->selectAllCustomer("rsl");
		this->idPeople = System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[this->listbox_people->SelectedIndex]->ItemArray[0]);
		reloadAddress();
		//actualiser addresse
	}
private: System::Void AddressForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oCust = gcnew NS_Comp_Svc::CLservCustomer();
	this->oStaff = gcnew NS_Comp_Svc::CLservStaff();
	this->oPeo = gcnew NS_Comp_Svc::CLservPeople();
	this->oAddress = gcnew NS_Comp_Svc::CLservAddress();
	listbox_people_load();
	this->button_create_address->Enabled = false;
}

private: System::Void data_grid_view_data_changed(System::Windows::Forms::DataGridView^ dgv, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	this->oAddress->modifyAddress(
		System::Convert::ToInt32(dgv->Rows[e->RowIndex]->Cells["idAddress"]->Value), 
		dgv->Rows[e->RowIndex]->Cells["last_name"]->Value->ToString(),
		dgv->Rows[e->RowIndex]->Cells["first_name"]->Value->ToString(),
		dgv->Rows[e->RowIndex]->Cells["text"]->Value->ToString(),
		dgv->Rows[e->RowIndex]->Cells["postal_code"]->Value->ToString(),
		dgv->Rows[e->RowIndex]->Cells["city_name"]->Value->ToString());
	reloadAddress();
}



private: System::Void data_address_deli_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	data_grid_view_data_changed(this->data_address_deli, e);
}
private: System::Void data_address_bill_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	data_grid_view_data_changed(this->data_address_bill, e);
}
private: System::Void data_address_deli_UserDeletingRow(System::Object^ sender, System::Windows::Forms::DataGridViewRowCancelEventArgs^ e) {
	/*if (this->radio_customer->Checked) {
		this->oDs = this->oCust->selectAllCustomer("rsl");
	}
	else {
		this->oDs = this->oStaff->selectAllStaff("rsl");

	}
	int index = this->listbox_people->SelectedIndex;
	int idPeople = System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[0]);
	int idAddress = System::Convert::ToInt32(e->Row->Cells[0]->Value);
	if (this->radio_customer->Checked) {
	}
	else {
		this->oStaff->setStaffAddressToNULL(idPeople);
		this->data_address->AllowUserToAddRows = true;
	}
	this->oAddress->deleteAddress(idAddress);
*/
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_create_address_Click(System::Object^ sender, System::EventArgs^ e) {
	CreateAddressForm creaddrform(this->idPeople);
	creaddrform.ShowDialog();
	reloadAddress();
}

private: System::Void data_address_bill_UserDeletingRow(System::Object^ sender, System::Windows::Forms::DataGridViewRowCancelEventArgs^ e) {
}
};
}
