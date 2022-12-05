#pragma once
#include "Customer.h"
#include "Staff.h"
#include "People.h"
#include "Address.h"
#include "CreateAddressForm.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de AddressForm
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
		/// Nettoyage des ressources utilis�es.
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


	private: int idPeople;
	private: NS_Comp_Svc::Customer^ oCust;
	private: NS_Comp_Svc::Staff^ oStaff;
	private: NS_Comp_Svc::People^ oPeo;
	private: NS_Comp_Svc::Address^ oAddress;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ Cities;
	private: System::Data::DataSet^ addr;
	private: int indexSelected = -1;
		   System::Data::DataSet^ have;
		   System::String^ idSelected = "null";
	private: int id_City;
	private: DataGridViewComboBoxColumn^ dgvCmb;



	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button_create_address;
	private: System::Windows::Forms::RadioButton^ radioButton_deli;
	private: System::Windows::Forms::RadioButton^ radioButton_bill;
	private: System::Windows::Forms::Button^ button_delete;

	private: System::Windows::Forms::ListBox^ listBox_addresses;
	private: System::Windows::Forms::ComboBox^ comboBox_city;
	private: System::Windows::Forms::TextBox^ textBox_last_name;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_first_name;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_postalcode;
	private: System::Windows::Forms::TextBox^ textBox_address;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button_enter;
	private: System::Windows::Forms::Button^ button_reset;




	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listbox_people = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_create_address = (gcnew System::Windows::Forms::Button());
			this->radioButton_deli = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_bill = (gcnew System::Windows::Forms::RadioButton());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->listBox_addresses = (gcnew System::Windows::Forms::ListBox());
			this->comboBox_city = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_last_name = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_first_name = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_postalcode = (gcnew System::Windows::Forms::TextBox());
			this->textBox_address = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button_enter = (gcnew System::Windows::Forms::Button());
			this->button_reset = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Choisir une personne :\r\n";
			// 
			// listbox_people
			// 
			this->listbox_people->FormattingEnabled = true;
			this->listbox_people->Location = System::Drawing::Point(14, 48);
			this->listbox_people->Margin = System::Windows::Forms::Padding(2);
			this->listbox_people->Name = L"listbox_people";
			this->listbox_people->Size = System::Drawing::Size(153, 186);
			this->listbox_people->TabIndex = 3;
			this->listbox_people->SelectedIndexChanged += gcnew System::EventHandler(this, &AddressForm::listbox_people_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(176, 30);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Adresse de :";
			// 
			// button_create_address
			// 
			this->button_create_address->Enabled = false;
			this->button_create_address->Location = System::Drawing::Point(173, 240);
			this->button_create_address->Margin = System::Windows::Forms::Padding(2);
			this->button_create_address->Name = L"button_create_address";
			this->button_create_address->Size = System::Drawing::Size(422, 58);
			this->button_create_address->TabIndex = 13;
			this->button_create_address->Text = L"Ajouter une nouvelle \r\naddresse";
			this->button_create_address->UseVisualStyleBackColor = true;
			this->button_create_address->Click += gcnew System::EventHandler(this, &AddressForm::button_create_address_Click);
			// 
			// radioButton_deli
			// 
			this->radioButton_deli->AutoSize = true;
			this->radioButton_deli->Checked = true;
			this->radioButton_deli->Location = System::Drawing::Point(243, 27);
			this->radioButton_deli->Margin = System::Windows::Forms::Padding(2);
			this->radioButton_deli->Name = L"radioButton_deli";
			this->radioButton_deli->Size = System::Drawing::Size(67, 17);
			this->radioButton_deli->TabIndex = 1;
			this->radioButton_deli->TabStop = true;
			this->radioButton_deli->Text = L"Livraison";
			this->radioButton_deli->UseVisualStyleBackColor = true;
			this->radioButton_deli->CheckedChanged += gcnew System::EventHandler(this, &AddressForm::radioButton_deli_CheckedChanged);
			// 
			// radioButton_bill
			// 
			this->radioButton_bill->AutoSize = true;
			this->radioButton_bill->Location = System::Drawing::Point(310, 27);
			this->radioButton_bill->Margin = System::Windows::Forms::Padding(2);
			this->radioButton_bill->Name = L"radioButton_bill";
			this->radioButton_bill->Size = System::Drawing::Size(78, 17);
			this->radioButton_bill->TabIndex = 2;
			this->radioButton_bill->Text = L"Facturation";
			this->radioButton_bill->UseVisualStyleBackColor = true;
			// 
			// button_delete
			// 
			this->button_delete->Enabled = false;
			this->button_delete->Location = System::Drawing::Point(14, 240);
			this->button_delete->Margin = System::Windows::Forms::Padding(2);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(152, 58);
			this->button_delete->TabIndex = 12;
			this->button_delete->Text = L"Supprimer l\'adresse s�lectionn�e";
			this->button_delete->UseVisualStyleBackColor = true;
			this->button_delete->Click += gcnew System::EventHandler(this, &AddressForm::button1_Click);
			// 
			// listBox_addresses
			// 
			this->listBox_addresses->FormattingEnabled = true;
			this->listBox_addresses->Location = System::Drawing::Point(173, 48);
			this->listBox_addresses->Margin = System::Windows::Forms::Padding(2);
			this->listBox_addresses->Name = L"listBox_addresses";
			this->listBox_addresses->Size = System::Drawing::Size(422, 186);
			this->listBox_addresses->TabIndex = 4;
			this->listBox_addresses->SelectedIndexChanged += gcnew System::EventHandler(this, &AddressForm::listBox_addresses_SelectedIndexChanged);
			// 
			// comboBox_city
			// 
			this->comboBox_city->FormattingEnabled = true;
			this->comboBox_city->Location = System::Drawing::Point(703, 178);
			this->comboBox_city->Margin = System::Windows::Forms::Padding(2);
			this->comboBox_city->Name = L"comboBox_city";
			this->comboBox_city->Size = System::Drawing::Size(194, 21);
			this->comboBox_city->TabIndex = 9;
			this->comboBox_city->Text = L"S�lectionnez la ville";
			this->comboBox_city->SelectedIndexChanged += gcnew System::EventHandler(this, &AddressForm::comboBox_city_SelectedIndexChanged);
			this->comboBox_city->Enter += gcnew System::EventHandler(this, &AddressForm::comboBox_city_Enter);
			// 
			// textBox_last_name
			// 
			this->textBox_last_name->Location = System::Drawing::Point(703, 88);
			this->textBox_last_name->Margin = System::Windows::Forms::Padding(2);
			this->textBox_last_name->Name = L"textBox_last_name";
			this->textBox_last_name->Size = System::Drawing::Size(194, 20);
			this->textBox_last_name->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(646, 90);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Nom :";
			// 
			// textBox_first_name
			// 
			this->textBox_first_name->Location = System::Drawing::Point(703, 110);
			this->textBox_first_name->Margin = System::Windows::Forms::Padding(2);
			this->textBox_first_name->Name = L"textBox_first_name";
			this->textBox_first_name->Size = System::Drawing::Size(194, 20);
			this->textBox_first_name->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(633, 113);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Pr�nom :";
			// 
			// textBox_postalcode
			// 
			this->textBox_postalcode->Location = System::Drawing::Point(703, 156);
			this->textBox_postalcode->Margin = System::Windows::Forms::Padding(2);
			this->textBox_postalcode->Name = L"textBox_postalcode";
			this->textBox_postalcode->Size = System::Drawing::Size(194, 20);
			this->textBox_postalcode->TabIndex = 8;
			// 
			// textBox_address
			// 
			this->textBox_address->Location = System::Drawing::Point(703, 133);
			this->textBox_address->Margin = System::Windows::Forms::Padding(2);
			this->textBox_address->Name = L"textBox_address";
			this->textBox_address->Size = System::Drawing::Size(194, 20);
			this->textBox_address->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(649, 182);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Ville : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(613, 158);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Code Postal :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(630, 136);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Adresse :";
			// 
			// button_enter
			// 
			this->button_enter->Location = System::Drawing::Point(619, 240);
			this->button_enter->Margin = System::Windows::Forms::Padding(2);
			this->button_enter->Name = L"button_enter";
			this->button_enter->Size = System::Drawing::Size(280, 58);
			this->button_enter->TabIndex = 10;
			this->button_enter->Text = L"Enregistrer";
			this->button_enter->UseVisualStyleBackColor = true;
			this->button_enter->Click += gcnew System::EventHandler(this, &AddressForm::button_enter_Click);
			// 
			// button_reset
			// 
			this->button_reset->Location = System::Drawing::Point(839, 48);
			this->button_reset->Margin = System::Windows::Forms::Padding(2);
			this->button_reset->Name = L"button_reset";
			this->button_reset->Size = System::Drawing::Size(56, 19);
			this->button_reset->TabIndex = 64;
			this->button_reset->Text = L"Clear";
			this->button_reset->UseVisualStyleBackColor = true;
			this->button_reset->Click += gcnew System::EventHandler(this, &AddressForm::button_reset_Click);
			// 
			// AddressForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(926, 309);
			this->Controls->Add(this->button_reset);
			this->Controls->Add(this->button_enter);
			this->Controls->Add(this->comboBox_city);
			this->Controls->Add(this->textBox_last_name);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_first_name);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_postalcode);
			this->Controls->Add(this->textBox_address);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->listBox_addresses);
			this->Controls->Add(this->button_delete);
			this->Controls->Add(this->radioButton_bill);
			this->Controls->Add(this->radioButton_deli);
			this->Controls->Add(this->button_create_address);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listbox_people);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"AddressForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"AddressForm";
			this->Load += gcnew System::EventHandler(this, &AddressForm::AddressForm_Load);
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

private: System::Void reset_components(System::Void) {
	this->textBox_last_name->ResetText();
	this->textBox_first_name->ResetText();
	this->textBox_address->ResetText();
	this->textBox_postalcode->ResetText();
	this->comboBox_city->Text = "S�lectionnez la ville";
}

private: System::Void reloadAddress(System::Void) {
	reset_components();
	if (this->radioButton_deli->Checked) {
		this->addr = this->oAddress->selectAddressDelivery("addr", this->idPeople);
	}
	else {
		this->addr = this->oAddress->selectAddressBilling("addr", this->idPeople);
	}
	this->listBox_addresses->Refresh();
	this->listBox_addresses->Items->Clear();
	for (int i = 0; i < addr->Tables["addr"]->Rows->Count; i++) {
		this->listBox_addresses->Items->Add(
			addr->Tables["addr"]->Rows[i]->ItemArray[1]->ToString() + " " +
			addr->Tables["addr"]->Rows[i]->ItemArray[2]->ToString() + " -> " +
			addr->Tables["addr"]->Rows[i]->ItemArray[3]->ToString() + " " +
			addr->Tables["addr"]->Rows[i]->ItemArray[4]->ToString() + " " +
			addr->Tables["addr"]->Rows[i]->ItemArray[5]->ToString()
		);
	}
}

private: System::Void listbox_people_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int index = this->listbox_people->SelectedIndex;
	if (index == -1) {
		return;
	}
	this->button_create_address->Enabled = true;
	this->idPeople = System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[0]);
	reloadAddress();
}
private: System::Void AddressForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oCust = gcnew NS_Comp_Svc::Customer();
	this->oStaff = gcnew NS_Comp_Svc::Staff();
	this->oPeo = gcnew NS_Comp_Svc::People();
	this->oAddress = gcnew NS_Comp_Svc::Address();
	this->have = gcnew System::Data::DataSet();
	this->Cities = gcnew System::Data::DataSet();
	this->dgvCmb = gcnew DataGridViewComboBoxColumn();
	listbox_people_load();
	this->button_create_address->Enabled = false;
}


private: System::Void button_create_address_Click(System::Object^ sender, System::EventArgs^ e) {
	CreateAddressForm creaddrform(this->idPeople);
	creaddrform.ShowDialog();
	reloadAddress();
}

private: System::Void radioButton_deli_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->comboBox_city->SelectedIndex = -1;
	reloadAddress();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (idSelected == "null") {
		return;
	}
	int idAddress = System::Convert::ToInt32(idSelected);
	this->have = this->oAddress->getHaveForAddress("rsl", idAddress);
	if (this->radioButton_deli->Checked) {
		if (System::Convert::ToInt32(this->have->Tables["rsl"]->Rows[0]->ItemArray[2]) == 1) {
			this->oAddress->modifyHave(idAddress, this->idPeople, 1, 0);
		}
		else {
			this->oAddress->deleteHave(idAddress, this->idPeople);
			this->oAddress->deleteAddress(idAddress);
		}
	}
	else {
		if (System::Convert::ToInt32(this->have->Tables["rsl"]->Rows[0]->ItemArray[3]) == 1) {
			this->oAddress->modifyHave(idAddress, this->idPeople, 0, 1);
		}
		else {
			this->oAddress->deleteHave(idAddress, this->idPeople);
			this->oAddress->deleteAddress(idAddress);
		}
	}
	reloadAddress();
}

private: Void insert_cities(void) {
	this->Cities = this->oAddress->selectCityFromPostalcode("cities", this->textBox_postalcode->Text);
	this->comboBox_city->Items->Clear();
	for (int i = 0; i < this->Cities->Tables["cities"]->Rows->Count; i++) {
		this->comboBox_city->Items->Add(this->Cities->Tables["cities"]->Rows[i]->ItemArray[2]->ToString());
	}
}

private: System::Void comboBox_city_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox_city->SelectedIndex != -1) {
		this->id_City = Convert::ToInt32(this->Cities->Tables["cities"]->Rows[this->comboBox_city->SelectedIndex]->ItemArray[0]);
		this->textBox_postalcode->Text = this->Cities->Tables["cities"]->Rows[this->comboBox_city->SelectedIndex]->ItemArray[1]->ToString();
	}
}
private: System::Void listBox_addresses_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int index = this->listBox_addresses->SelectedIndex;
	if (index == -1) {
		return;
	}
	this->button_delete->Enabled = true;
	this->idSelected = this->addr->Tables["addr"]->Rows[index]->ItemArray[0]->ToString();
	this->textBox_last_name->Text = this->addr->Tables["addr"]->Rows[index]->ItemArray[1]->ToString();
	this->textBox_first_name->Text = this->addr->Tables["addr"]->Rows[index]->ItemArray[2]->ToString();
	this->textBox_address->Text = this->addr->Tables["addr"]->Rows[index]->ItemArray[3]->ToString();
	this->textBox_postalcode->Text = this->addr->Tables["addr"]->Rows[index]->ItemArray[4]->ToString();
	this->comboBox_city->Text = this->addr->Tables["addr"]->Rows[index]->ItemArray[5]->ToString();
	this->id_City = Convert::ToInt32(this->addr->Tables["addr"]->Rows[index]->ItemArray[6]);
}
private: System::Void button_enter_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oAddress->modifyAddress(
		Convert::ToInt32(this->idSelected),
		this->textBox_last_name->Text,
		this->textBox_first_name->Text,
		this->textBox_address->Text,
		this->id_City
	);
	reloadAddress();
}
private: System::Void comboBox_city_Enter(System::Object^ sender, System::EventArgs^ e) {
	this->Cursor = Cursors::WaitCursor;
	insert_cities();
	this->Cursor = Cursors::Default;
}
private: System::Void button_reset_Click(System::Object^ sender, System::EventArgs^ e) {
	reset_components();
}
};
}