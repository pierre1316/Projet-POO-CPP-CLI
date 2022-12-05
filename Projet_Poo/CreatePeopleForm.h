#pragma once
#include "people.h"
#include "Staff.h"
#include "Customer.h"
#include "Address.h"
#include "CLcad.h" 

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CreateCustomerForm
	/// </summary>
	public ref class CreatePeopleForm : public System::Windows::Forms::Form
	{
	public:
		CreatePeopleForm(void)
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
		~CreatePeopleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ radiobutt_new_people;
	protected:
	private: System::Windows::Forms::RadioButton^ radiobutt_existing_people;

	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Svc::People^ oPeople;
	private: NS_Comp_Svc::Staff^ oStaff;
	private: NS_Comp_Svc::Customer^ oCust;
	private: NS_Comp_Svc::Address^ oAddress;
	private: System::Data::DataSet^ Cities;
	private: int id_City;

	private: System::Windows::Forms::ComboBox^ combo_people;

	private: System::Windows::Forms::RadioButton^ radio_staff_select;
	private: System::Windows::Forms::RadioButton^ radio_customer_select;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_last_name;
	private: System::Windows::Forms::TextBox^ textBox_first_name;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ date_birthday;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ combo_superior;
	private: System::Windows::Forms::DateTimePicker^ date_hiring;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button_register;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox_address;
	private: System::Windows::Forms::TextBox^ textBox_postalcode;
	private: System::Windows::Forms::ComboBox^ comboBox_city;
	private: System::Windows::Forms::TextBox^ textBox_username;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_password;

	private: System::Windows::Forms::Label^ label10;












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
			this->radiobutt_new_people = (gcnew System::Windows::Forms::RadioButton());
			this->radiobutt_existing_people = (gcnew System::Windows::Forms::RadioButton());
			this->combo_people = (gcnew System::Windows::Forms::ComboBox());
			this->radio_staff_select = (gcnew System::Windows::Forms::RadioButton());
			this->radio_customer_select = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_last_name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_first_name = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->date_birthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->combo_superior = (gcnew System::Windows::Forms::ComboBox());
			this->date_hiring = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button_register = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_address = (gcnew System::Windows::Forms::TextBox());
			this->textBox_postalcode = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_city = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_username = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// radiobutt_new_people
			// 
			this->radiobutt_new_people->AutoSize = true;
			this->radiobutt_new_people->Checked = true;
			this->radiobutt_new_people->Location = System::Drawing::Point(7, 19);
			this->radiobutt_new_people->Margin = System::Windows::Forms::Padding(4);
			this->radiobutt_new_people->Name = L"radiobutt_new_people";
			this->radiobutt_new_people->Size = System::Drawing::Size(142, 20);
			this->radiobutt_new_people->TabIndex = 0;
			this->radiobutt_new_people->TabStop = true;
			this->radiobutt_new_people->Text = L"Nouvelle personne";
			this->radiobutt_new_people->UseVisualStyleBackColor = true;
			this->radiobutt_new_people->CheckedChanged += gcnew System::EventHandler(this, &CreatePeopleForm::radiobutt_new_people_CheckedChanged);
			// 
			// radiobutt_existing_people
			// 
			this->radiobutt_existing_people->AutoSize = true;
			this->radiobutt_existing_people->Location = System::Drawing::Point(180, 19);
			this->radiobutt_existing_people->Margin = System::Windows::Forms::Padding(4);
			this->radiobutt_existing_people->Name = L"radiobutt_existing_people";
			this->radiobutt_existing_people->Size = System::Drawing::Size(142, 20);
			this->radiobutt_existing_people->TabIndex = 1;
			this->radiobutt_existing_people->TabStop = true;
			this->radiobutt_existing_people->Text = L"Personne existante";
			this->radiobutt_existing_people->UseVisualStyleBackColor = true;
			// 
			// combo_people
			// 
			this->combo_people->Enabled = false;
			this->combo_people->FormattingEnabled = true;
			this->combo_people->Location = System::Drawing::Point(409, 87);
			this->combo_people->Name = L"combo_people";
			this->combo_people->Size = System::Drawing::Size(202, 24);
			this->combo_people->TabIndex = 3;
			this->combo_people->Text = L"Sélectionnez une personne";
			this->combo_people->SelectedIndexChanged += gcnew System::EventHandler(this, &CreatePeopleForm::comboBox1_SelectedIndexChanged);
			// 
			// radio_staff_select
			// 
			this->radio_staff_select->AutoSize = true;
			this->radio_staff_select->Location = System::Drawing::Point(180, 19);
			this->radio_staff_select->Margin = System::Windows::Forms::Padding(4);
			this->radio_staff_select->Name = L"radio_staff_select";
			this->radio_staff_select->Size = System::Drawing::Size(125, 20);
			this->radio_staff_select->TabIndex = 5;
			this->radio_staff_select->TabStop = true;
			this->radio_staff_select->Text = L"Créer Personnel";
			this->radio_staff_select->UseVisualStyleBackColor = true;
			// 
			// radio_customer_select
			// 
			this->radio_customer_select->AutoSize = true;
			this->radio_customer_select->Checked = true;
			this->radio_customer_select->Location = System::Drawing::Point(7, 19);
			this->radio_customer_select->Margin = System::Windows::Forms::Padding(4);
			this->radio_customer_select->Name = L"radio_customer_select";
			this->radio_customer_select->Size = System::Drawing::Size(97, 20);
			this->radio_customer_select->TabIndex = 4;
			this->radio_customer_select->TabStop = true;
			this->radio_customer_select->Text = L"Créer Client";
			this->radio_customer_select->UseVisualStyleBackColor = true;
			this->radio_customer_select->CheckedChanged += gcnew System::EventHandler(this, &CreatePeopleForm::radio_customer_select_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radio_customer_select);
			this->groupBox1->Controls->Add(this->radio_staff_select);
			this->groupBox1->Location = System::Drawing::Point(41, 7);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(322, 55);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Choisir ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radiobutt_existing_people);
			this->groupBox2->Controls->Add(this->radiobutt_new_people);
			this->groupBox2->Location = System::Drawing::Point(41, 68);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(589, 55);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Choisir ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(123, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Nom :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(105, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Prénom :";
			// 
			// textBox_last_name
			// 
			this->textBox_last_name->Location = System::Drawing::Point(196, 132);
			this->textBox_last_name->Name = L"textBox_last_name";
			this->textBox_last_name->Size = System::Drawing::Size(257, 22);
			this->textBox_last_name->TabIndex = 10;
			// 
			// textBox_first_name
			// 
			this->textBox_first_name->Location = System::Drawing::Point(196, 159);
			this->textBox_first_name->Name = L"textBox_first_name";
			this->textBox_first_name->Size = System::Drawing::Size(257, 22);
			this->textBox_first_name->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(36, 190);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 16);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Date de Naissance :";
			// 
			// date_birthday
			// 
			this->date_birthday->Location = System::Drawing::Point(196, 185);
			this->date_birthday->Name = L"date_birthday";
			this->date_birthday->Size = System::Drawing::Size(257, 22);
			this->date_birthday->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 216);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 16);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Supérieur Hiérarchique :\r\n";
			// 
			// combo_superior
			// 
			this->combo_superior->Enabled = false;
			this->combo_superior->FormattingEnabled = true;
			this->combo_superior->Location = System::Drawing::Point(196, 213);
			this->combo_superior->Name = L"combo_superior";
			this->combo_superior->Size = System::Drawing::Size(257, 24);
			this->combo_superior->TabIndex = 15;
			this->combo_superior->Text = L"Sélectionnez un Supérieur";
			// 
			// date_hiring
			// 
			this->date_hiring->CustomFormat = L"";
			this->date_hiring->Enabled = false;
			this->date_hiring->Location = System::Drawing::Point(196, 240);
			this->date_hiring->Name = L"date_hiring";
			this->date_hiring->Size = System::Drawing::Size(257, 22);
			this->date_hiring->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(45, 245);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 16);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Date d\'embauche :";
			// 
			// button_register
			// 
			this->button_register->Location = System::Drawing::Point(481, 132);
			this->button_register->Name = L"button_register";
			this->button_register->Size = System::Drawing::Size(149, 274);
			this->button_register->TabIndex = 18;
			this->button_register->Text = L"Enregistrer";
			this->button_register->UseVisualStyleBackColor = true;
			this->button_register->Click += gcnew System::EventHandler(this, &CreatePeopleForm::button_register_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(101, 272);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 16);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Adresse :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(78, 300);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 16);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Code Postal :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(119, 329);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 16);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Ville : ";
			// 
			// textBox_address
			// 
			this->textBox_address->Enabled = false;
			this->textBox_address->Location = System::Drawing::Point(196, 269);
			this->textBox_address->Name = L"textBox_address";
			this->textBox_address->Size = System::Drawing::Size(257, 22);
			this->textBox_address->TabIndex = 22;
			// 
			// textBox_postalcode
			// 
			this->textBox_postalcode->Enabled = false;
			this->textBox_postalcode->Location = System::Drawing::Point(196, 297);
			this->textBox_postalcode->Name = L"textBox_postalcode";
			this->textBox_postalcode->Size = System::Drawing::Size(257, 22);
			this->textBox_postalcode->TabIndex = 23;
			this->textBox_postalcode->Leave += gcnew System::EventHandler(this, &CreatePeopleForm::textBox_postalcode_Leave);
			// 
			// comboBox_city
			// 
			this->comboBox_city->FormattingEnabled = true;
			this->comboBox_city->Location = System::Drawing::Point(196, 326);
			this->comboBox_city->Name = L"comboBox_city";
			this->comboBox_city->Size = System::Drawing::Size(257, 24);
			this->comboBox_city->TabIndex = 53;
			this->comboBox_city->SelectedIndexChanged += gcnew System::EventHandler(this, &CreatePeopleForm::comboBox_city_SelectedIndexChanged);
			// 
			// textBox_username
			// 
			this->textBox_username->Enabled = false;
			this->textBox_username->Location = System::Drawing::Point(196, 356);
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->Size = System::Drawing::Size(257, 22);
			this->textBox_username->TabIndex = 55;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(49, 359);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(112, 16);
			this->label9->TabIndex = 54;
			this->label9->Text = L"Nom d\'utilisateur :";
			// 
			// textBox_password
			// 
			this->textBox_password->Enabled = false;
			this->textBox_password->Location = System::Drawing::Point(196, 384);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->PasswordChar = '*';
			this->textBox_password->Size = System::Drawing::Size(257, 22);
			this->textBox_password->TabIndex = 57;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(74, 387);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(88, 16);
			this->label10->TabIndex = 56;
			this->label10->Text = L"Mot de pase :";
			// 
			// CreatePeopleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(681, 415);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox_username);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comboBox_city);
			this->Controls->Add(this->textBox_postalcode);
			this->Controls->Add(this->textBox_address);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button_register);
			this->Controls->Add(this->date_hiring);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->combo_superior);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->date_birthday);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_first_name);
			this->Controls->Add(this->textBox_last_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->combo_people);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"CreatePeopleForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"CreateCustomerForm";
			this->Load += gcnew System::EventHandler(this, &CreatePeopleForm::CreateCustomerForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void CreateCustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oPeople = gcnew NS_Comp_Svc::People();
		this->oStaff = gcnew NS_Comp_Svc::Staff();
		this->oCust = gcnew NS_Comp_Svc::Customer();
		this->oAddress = gcnew NS_Comp_Svc::Address();
		combo_superior_Load();
		combo_people_Load("Staff");
		radio_customer_select_CheckedChanged(sender, e);
		radiobutt_new_people_CheckedChanged(sender, e);
	}

private: System::Void combo_people_Load(System::String^ type) {
	this->combo_people->Text = L"Sélectionnez une personne";
	this->oDs->Clear();
	if (type == "Cust") {
		this->oDs = this->oCust->selectCustomerNoStaff("rsl");
	}
	else {
		this->oDs = this->oStaff->selectStaffNoCust("rsl");
	}
	this->combo_people->Items->Clear();
	for (int i = 0; i < this->oDs->Tables["rsl"]->Rows->Count; i++) {
		this->combo_people->Items->Add(
			this->oDs->Tables["rsl"]->Rows[i]->ItemArray[0]->ToString() + " " +
			this->oDs->Tables["rsl"]->Rows[i]->ItemArray[1]->ToString() + " " +
			this->oDs->Tables["rsl"]->Rows[i]->ItemArray[2]->ToString());
	}
}

private: System::Void combo_superior_Load(System::Void) {
	this->combo_superior->Text = L"Sélectionnez un supérieur";
	this->oDs = this->oStaff->selectAllStaff("staff");
	this->combo_superior->Items->Clear();
	for (int i = 0; i < this->oDs->Tables["staff"]->Rows->Count; i++) {
		this->combo_superior->Items->Add(
			this->oDs->Tables["staff"]->Rows[i]->ItemArray[0]->ToString() + " " +
			this->oDs->Tables["staff"]->Rows[i]->ItemArray[1]->ToString() + " " +
			this->oDs->Tables["staff"]->Rows[i]->ItemArray[2]->ToString());
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int index = this->combo_people->SelectedIndex;
	this->textBox_last_name->Text = this->oDs->Tables["rsl"]->Rows[index]->ItemArray[1]->ToString();
	this->textBox_first_name->Text = this->oDs->Tables["rsl"]->Rows[index]->ItemArray[2]->ToString();
}
private: System::Void radiobutt_new_people_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->textBox_last_name->Text = "";
	this->textBox_first_name->Text = "";
	this->combo_people->Text = L"Sélectionnez une personne";
	if (this->radiobutt_existing_people->Checked) {
		this->combo_people->Enabled = true;
		this->textBox_last_name->Enabled = false;
		this->textBox_first_name->Enabled = false;
	}
	else {
		this->combo_people->Enabled = false;
		this->textBox_last_name->Enabled = true;
		this->textBox_first_name->Enabled = true;
	}
	if (radio_staff_select->Checked) {
		combo_people_Load("Cust");
	}
	else {
		combo_people_Load("Staff");
	}
}

private: System::Void radio_customer_select_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	combo_superior_Load();
	this->combo_people->Text = L"Sélectionnez une personne";
	this->date_hiring->ResetText();
	this->date_birthday->ResetText();
	this->textBox_address->ResetText();
	this->textBox_postalcode->ResetText();
	this->comboBox_city->ResetText();
	this->textBox_username->ResetText();
	this->textBox_password->ResetText();
	if (this->radio_customer_select->Checked) {
		combo_people_Load("Staff");
		this->combo_superior->Enabled = false;
		this->date_hiring->Enabled = false;
		this->date_birthday->Enabled = true;
		this->textBox_address->Enabled = false;
		this->textBox_postalcode->Enabled = false;
		this->comboBox_city->Enabled = false;
		this->textBox_username->Enabled = false;
		this->textBox_password->Enabled = false;
	}
	else {
		combo_people_Load("Cust");
		this->combo_superior->Enabled = true;
		this->date_hiring->Enabled = true;
		this->date_birthday->Enabled = false;
		this->textBox_address->Enabled = true;
		this->textBox_postalcode->Enabled = true;
		this->comboBox_city->Enabled = true;
		this->textBox_username->Enabled = true;
		this->textBox_password->Enabled = true;
	}
}

private: System::Void button_register_Click(System::Object^ sender, System::EventArgs^ e) {
	//Enregistre les données dans la database
	System::Data::DataRow^ row;
	int idPeople;
	if (this->radiobutt_existing_people->Checked) {
		// Personne existante
		int indexPeople = this->combo_people->SelectedIndex;
		this->oDs = this->oPeople->selectAllPeople("rsl");
		idPeople = System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[indexPeople]->ItemArray[0]);
	}
	else {
		// Nouvelle personne
		row = this->oPeople->createPeople(this->textBox_first_name->Text, this->textBox_last_name->Text);
		idPeople = System::Convert::ToInt32(row->ItemArray[0]);

	}
	if (this->radio_staff_select->Checked) {
		// Créer un staff
		int indexStaff;
		int idSuperior = -1;
		if (this->combo_superior->SelectedIndex != -1) {
			this->oDs = this->oStaff->selectAllStaff("staff");
			indexStaff = this->combo_superior->SelectedIndex;
			idSuperior = System::Convert::ToInt32(this->oDs->Tables["staff"]->Rows[indexStaff]->ItemArray[0]);
		}
		System::DateTime^ date = this->date_hiring->Value;
		System::String^ dateString = System::Convert::ToString(date->Month) + "/";
		dateString += System::Convert::ToString(date->Day) + "/";
		dateString += System::Convert::ToString(date->Year);
		this->oStaff->createStaff(idPeople, dateString, idSuperior, this->textBox_username->Text, this->textBox_password->Text);
		int idAddress = this->oAddress->createAddress("", "", this->textBox_address->Text, this->id_City);
		this->oStaff->updateStaffAddress(idPeople, idAddress);
	}
	else {
		// Créer un client
		System::DateTime^ date = this->date_birthday->Value;
		System::String^ dateString = System::Convert::ToString(date->Month) + "/";
		dateString += System::Convert::ToString(date->Day) + "/";
		dateString += System::Convert::ToString(date->Year);
		this->oCust->createCustomer(idPeople, dateString);
	}
		
	this->radio_customer_select->Checked = true;
	this->radiobutt_new_people->Checked = true;
	radio_customer_select_CheckedChanged(sender, e);
	radiobutt_new_people_CheckedChanged(sender, e);
}

private: System::Void textBox_postalcode_Leave(System::Object^ sender, System::EventArgs^ e) {
	this->Cities = this->oAddress->selectCityFromPostalcode("cities", this->textBox_postalcode->Text);
	this->comboBox_city->Items->Clear();
	for (int i = 0; i < this->Cities->Tables["cities"]->Rows->Count; i++) {
		this->comboBox_city->Items->Add(this->Cities->Tables["cities"]->Rows[i]->ItemArray[2]->ToString());
	}
}
private: System::Void comboBox_city_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox_city->SelectedIndex != -1) {
		this->id_City = Convert::ToInt32(this->Cities->Tables["cities"]->Rows[this->comboBox_city->SelectedIndex]->ItemArray[0]);
	}
}
};
}
