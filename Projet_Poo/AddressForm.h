#pragma once
#include "CLservCustomer.h"
#include "CLservStaff.h"
#include "CLservPeople.h"
#include "CLservAddress.h"

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
	private: System::Windows::Forms::RadioButton^ radio_staff;
	protected:
	private: System::Windows::Forms::RadioButton^ radio_customer;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listbox_people;
	private: System::Windows::Forms::DataGridView^ data_address;

	private: NS_Comp_Svc::CLservCustomer^ oCust;
	private: NS_Comp_Svc::CLservStaff^ oStaff;
	private: NS_Comp_Svc::CLservPeople^ oPeo;
	private: NS_Comp_Svc::CLservAddress^ oAddress;
	private: System::Data::DataSet^ oDs;

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
			this->radio_staff = (gcnew System::Windows::Forms::RadioButton());
			this->radio_customer = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listbox_people = (gcnew System::Windows::Forms::ListBox());
			this->data_address = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_address))->BeginInit();
			this->SuspendLayout();
			// 
			// radio_staff
			// 
			this->radio_staff->AutoSize = true;
			this->radio_staff->Location = System::Drawing::Point(119, 33);
			this->radio_staff->Name = L"radio_staff";
			this->radio_staff->Size = System::Drawing::Size(89, 20);
			this->radio_staff->TabIndex = 7;
			this->radio_staff->Text = L"Personnel";
			this->radio_staff->UseVisualStyleBackColor = true;
			this->radio_staff->CheckedChanged += gcnew System::EventHandler(this, &AddressForm::radio_staff_CheckedChanged);
			// 
			// radio_customer
			// 
			this->radio_customer->AutoSize = true;
			this->radio_customer->Checked = true;
			this->radio_customer->Location = System::Drawing::Point(35, 33);
			this->radio_customer->Name = L"radio_customer";
			this->radio_customer->Size = System::Drawing::Size(61, 20);
			this->radio_customer->TabIndex = 6;
			this->radio_customer->TabStop = true;
			this->radio_customer->Text = L"Client";
			this->radio_customer->UseVisualStyleBackColor = true;
			this->radio_customer->CheckedChanged += gcnew System::EventHandler(this, &AddressForm::radio_customer_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 9);
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
			this->listbox_people->Size = System::Drawing::Size(203, 388);
			this->listbox_people->TabIndex = 4;
			this->listbox_people->SelectedIndexChanged += gcnew System::EventHandler(this, &AddressForm::listbox_people_SelectedIndexChanged);
			// 
			// data_address
			// 
			this->data_address->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->data_address->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->data_address->Location = System::Drawing::Point(256, 59);
			this->data_address->Name = L"data_address";
			this->data_address->RowHeadersWidth = 51;
			this->data_address->RowTemplate->Height = 24;
			this->data_address->Size = System::Drawing::Size(992, 388);
			this->data_address->TabIndex = 8;
			this->data_address->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AddressForm::data_address_CellValueChanged);
			this->data_address->UserDeletingRow += gcnew System::Windows::Forms::DataGridViewRowCancelEventHandler(this, &AddressForm::data_address_UserDeletingRow);
			// 
			// AddressForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1260, 458);
			this->Controls->Add(this->data_address);
			this->Controls->Add(this->radio_staff);
			this->Controls->Add(this->radio_customer);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listbox_people);
			this->Name = L"AddressForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"AddressForm";
			this->Load += gcnew System::EventHandler(this, &AddressForm::AddressForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->data_address))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void listbox_people_load(System::Void) {
			if (this->radio_customer->Checked) {
				this->oDs = this->oCust->selectAllCustomer("rsl");
			}
			else {
				this->oDs = this->oStaff->selectAllStaff("rsl");
			}
			this->listbox_people->Items->Clear();
			for (int i = 0; i < this->oDs->Tables["rsl"]->Rows->Count; i++) {
				this->listbox_people->Items->Add(
					this->oDs->Tables["rsl"]->Rows[i]->ItemArray[0]->ToString() + " " +
					this->oDs->Tables["rsl"]->Rows[i]->ItemArray[1]->ToString() + " " +
					this->oDs->Tables["rsl"]->Rows[i]->ItemArray[2]->ToString());
			}
		}

private: System::Void reloadAddress(System::Void) {
	this->data_address->Refresh();
	this->data_address->AllowUserToAddRows = true;
	if (this->radio_customer->Checked) {
		this->oDs = this->oCust->selectAllCustomer("rsl");
	}
	else {
		this->oDs = this->oStaff->selectAllStaff("rsl");
	}
	int index = this->listbox_people->SelectedIndex;
	if (index == -1) {
		return;
	}
	int idPeople = System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[0]);
	if (this->radio_customer->Checked) {
		// Rien
	}
	else {
		System::Data::DataSet^ lol = this->oAddress->getStaffAddressNULL("null", idPeople);
		int idAddress;
		if (lol->Tables["null"]->Rows->Count == 0) {
			idAddress = System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[5]);
			this->data_address->AllowUserToAddRows = false;
		}
		
		else {
			idAddress = -1;
			this->data_address->AllowUserToAddRows = true;
		}
		this->oDs = this->oAddress->selectAddress("rsl", idAddress);
		this->data_address->DataMember = "rsl";
		this->data_address->DataSource = this->oDs;
	}
	this->data_address->Columns[0]->ReadOnly = true;
}



private: System::Void window_components_load(System::Void) {
	listbox_people_load();
	reloadAddress();
	
}
private: System::Void radio_customer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	window_components_load();
}

private: System::Void radio_staff_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listbox_people_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		reloadAddress();
		//actualiser addresse
	}
private: System::Void AddressForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oCust = gcnew NS_Comp_Svc::CLservCustomer();
	this->oStaff = gcnew NS_Comp_Svc::CLservStaff();
	this->oPeo = gcnew NS_Comp_Svc::CLservPeople();
	this->oAddress = gcnew NS_Comp_Svc::CLservAddress();
	window_components_load();
}
private: System::Void data_address_CellValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	System::String^ id = data_address->Rows[e->RowIndex]->Cells["idAddress"]->Value->ToString();
	if (id == "") {
		if (this->radio_customer->Checked) {
			this->oDs = this->oCust->selectAllCustomer("rsl");
		}
		else {
			this->oDs = this->oStaff->selectAllStaff("rsl");
		}
		int index = this->listbox_people->SelectedIndex;
		int idPeople = System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[0]);
		int idAddress = this->oAddress->createAddress(data_address->Rows[e->RowIndex]->Cells["last_name"]->Value->ToString(), data_address->Rows[e->RowIndex]->Cells["first_name"]->Value->ToString(), data_address->Rows[e->RowIndex]->Cells["text"]->Value->ToString(), data_address->Rows[e->RowIndex]->Cells["postal_code"]->Value->ToString(), data_address->Rows[e->RowIndex]->Cells["city_name"]->Value->ToString());
		this->oStaff->updateStaffAddress(idPeople, idAddress);
	}
	else {
		this->oAddress->modifyAddress(System::Convert::ToInt32(data_address->Rows[e->RowIndex]->Cells["idAddress"]->Value), data_address->Rows[e->RowIndex]->Cells["last_name"]->Value->ToString(), data_address->Rows[e->RowIndex]->Cells["first_name"]->Value->ToString(), data_address->Rows[e->RowIndex]->Cells["text"]->Value->ToString(), data_address->Rows[e->RowIndex]->Cells["postal_code"]->Value->ToString(), data_address->Rows[e->RowIndex]->Cells["city_name"]->Value->ToString());
	}
	reloadAddress();
}
private: System::Void data_address_UserDeletingRow(System::Object^ sender, System::Windows::Forms::DataGridViewRowCancelEventArgs^ e) {
	if (this->radio_customer->Checked) {
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

}
};
}
