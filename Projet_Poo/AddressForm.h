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
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddressForm::typeid));
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
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SandyBrown;
			this->label1->Location = System::Drawing::Point(12, 171);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Choisir une personne :\r\n";
			// 
			// listbox_people
			// 
			this->listbox_people->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listbox_people->FormattingEnabled = true;
			this->listbox_people->ItemHeight = 20;
			this->listbox_people->Location = System::Drawing::Point(12, 194);
			this->listbox_people->Name = L"listbox_people";
			this->listbox_people->Size = System::Drawing::Size(228, 444);
			this->listbox_people->TabIndex = 3;
			this->listbox_people->SelectedIndexChanged += gcnew System::EventHandler(this, &AddressForm::listbox_people_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SandyBrown;
			this->label2->Location = System::Drawing::Point(251, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 20);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Adresse de :";
			// 
			// button_create_address
			// 
			this->button_create_address->BackColor = System::Drawing::Color::SandyBrown;
			this->button_create_address->Enabled = false;
			this->button_create_address->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_create_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_create_address->Location = System::Drawing::Point(246, 655);
			this->button_create_address->Name = L"button_create_address";
			this->button_create_address->Size = System::Drawing::Size(633, 89);
			this->button_create_address->TabIndex = 13;
			this->button_create_address->Text = L"Ajouter une nouvelle \r\naddresse";
			this->button_create_address->UseVisualStyleBackColor = false;
			this->button_create_address->Click += gcnew System::EventHandler(this, &AddressForm::button_create_address_Click);
			// 
			// radioButton_deli
			// 
			this->radioButton_deli->AutoSize = true;
			this->radioButton_deli->Checked = true;
			this->radioButton_deli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton_deli->ForeColor = System::Drawing::Color::SandyBrown;
			this->radioButton_deli->Location = System::Drawing::Point(355, 169);
			this->radioButton_deli->Name = L"radioButton_deli";
			this->radioButton_deli->Size = System::Drawing::Size(98, 24);
			this->radioButton_deli->TabIndex = 1;
			this->radioButton_deli->TabStop = true;
			this->radioButton_deli->Text = L"Livraison";
			this->radioButton_deli->UseVisualStyleBackColor = true;
			this->radioButton_deli->CheckedChanged += gcnew System::EventHandler(this, &AddressForm::radioButton_deli_CheckedChanged);
			// 
			// radioButton_bill
			// 
			this->radioButton_bill->AutoSize = true;
			this->radioButton_bill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton_bill->ForeColor = System::Drawing::Color::SandyBrown;
			this->radioButton_bill->Location = System::Drawing::Point(460, 169);
			this->radioButton_bill->Name = L"radioButton_bill";
			this->radioButton_bill->Size = System::Drawing::Size(119, 24);
			this->radioButton_bill->TabIndex = 2;
			this->radioButton_bill->Text = L"Facturation";
			this->radioButton_bill->UseVisualStyleBackColor = true;
			// 
			// button_delete
			// 
			this->button_delete->BackColor = System::Drawing::Color::SandyBrown;
			this->button_delete->Enabled = false;
			this->button_delete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_delete->Location = System::Drawing::Point(12, 655);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(228, 89);
			this->button_delete->TabIndex = 12;
			this->button_delete->Text = L"Supprimer l\'adresse sélectionnée";
			this->button_delete->UseVisualStyleBackColor = false;
			this->button_delete->Click += gcnew System::EventHandler(this, &AddressForm::button1_Click);
			// 
			// listBox_addresses
			// 
			this->listBox_addresses->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox_addresses->FormattingEnabled = true;
			this->listBox_addresses->ItemHeight = 20;
			this->listBox_addresses->Location = System::Drawing::Point(246, 194);
			this->listBox_addresses->Name = L"listBox_addresses";
			this->listBox_addresses->Size = System::Drawing::Size(633, 444);
			this->listBox_addresses->TabIndex = 4;
			this->listBox_addresses->SelectedIndexChanged += gcnew System::EventHandler(this, &AddressForm::listBox_addresses_SelectedIndexChanged);
			// 
			// comboBox_city
			// 
			this->comboBox_city->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_city->ForeColor = System::Drawing::Color::Black;
			this->comboBox_city->FormattingEnabled = true;
			this->comboBox_city->Location = System::Drawing::Point(1028, 511);
			this->comboBox_city->Name = L"comboBox_city";
			this->comboBox_city->Size = System::Drawing::Size(289, 28);
			this->comboBox_city->TabIndex = 9;
			this->comboBox_city->Text = L"Sélectionnez la ville";
			this->comboBox_city->SelectedIndexChanged += gcnew System::EventHandler(this, &AddressForm::comboBox_city_SelectedIndexChanged);
			this->comboBox_city->Enter += gcnew System::EventHandler(this, &AddressForm::comboBox_city_Enter);
			// 
			// textBox_last_name
			// 
			this->textBox_last_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_last_name->ForeColor = System::Drawing::Color::SandyBrown;
			this->textBox_last_name->Location = System::Drawing::Point(1028, 298);
			this->textBox_last_name->Name = L"textBox_last_name";
			this->textBox_last_name->Size = System::Drawing::Size(289, 26);
			this->textBox_last_name->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SandyBrown;
			this->label3->Location = System::Drawing::Point(943, 301);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 20);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Nom :";
			// 
			// textBox_first_name
			// 
			this->textBox_first_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_first_name->ForeColor = System::Drawing::Color::SandyBrown;
			this->textBox_first_name->Location = System::Drawing::Point(1028, 352);
			this->textBox_first_name->Name = L"textBox_first_name";
			this->textBox_first_name->Size = System::Drawing::Size(289, 26);
			this->textBox_first_name->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SandyBrown;
			this->label4->Location = System::Drawing::Point(924, 357);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 20);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Prénom :";
			// 
			// textBox_postalcode
			// 
			this->textBox_postalcode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_postalcode->ForeColor = System::Drawing::Color::SandyBrown;
			this->textBox_postalcode->Location = System::Drawing::Point(1028, 458);
			this->textBox_postalcode->Name = L"textBox_postalcode";
			this->textBox_postalcode->Size = System::Drawing::Size(289, 26);
			this->textBox_postalcode->TabIndex = 8;
			// 
			// textBox_address
			// 
			this->textBox_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_address->ForeColor = System::Drawing::Color::SandyBrown;
			this->textBox_address->Location = System::Drawing::Point(1028, 406);
			this->textBox_address->Name = L"textBox_address";
			this->textBox_address->Size = System::Drawing::Size(289, 26);
			this->textBox_address->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::SandyBrown;
			this->label8->Location = System::Drawing::Point(948, 517);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 20);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Ville : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SandyBrown;
			this->label7->Location = System::Drawing::Point(894, 461);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(116, 20);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Code Postal :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::SandyBrown;
			this->label9->Location = System::Drawing::Point(919, 410);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(85, 20);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Adresse :";
			// 
			// button_enter
			// 
			this->button_enter->BackColor = System::Drawing::Color::SandyBrown;
			this->button_enter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_enter->Location = System::Drawing::Point(885, 655);
			this->button_enter->Name = L"button_enter";
			this->button_enter->Size = System::Drawing::Size(447, 89);
			this->button_enter->TabIndex = 10;
			this->button_enter->Text = L"Enregistrer";
			this->button_enter->UseVisualStyleBackColor = false;
			this->button_enter->Click += gcnew System::EventHandler(this, &AddressForm::button_enter_Click);
			// 
			// button_reset
			// 
			this->button_reset->BackColor = System::Drawing::Color::SandyBrown;
			this->button_reset->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_reset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_reset->ForeColor = System::Drawing::Color::Black;
			this->button_reset->Location = System::Drawing::Point(1233, 250);
			this->button_reset->Name = L"button_reset";
			this->button_reset->Size = System::Drawing::Size(84, 29);
			this->button_reset->TabIndex = 64;
			this->button_reset->Text = L"Clear";
			this->button_reset->UseVisualStyleBackColor = false;
			this->button_reset->Click += gcnew System::EventHandler(this, &AddressForm::button_reset_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(187, 53);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(454, 77);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 66;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(30, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(151, 139);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 65;
			this->pictureBox1->TabStop = false;
			// 
			// AddressForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1344, 756);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
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
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"AddressForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"AddressForm";
			this->Load += gcnew System::EventHandler(this, &AddressForm::AddressForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
	this->comboBox_city->Text = "Sélectionnez la ville";
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