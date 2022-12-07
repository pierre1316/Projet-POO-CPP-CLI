#pragma once
#include "People.h"
#include "Address.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CreateAddressForm
	/// </summary>
	public ref class CreateAddressForm : public System::Windows::Forms::Form
	{
	public:
		CreateAddressForm(int idPeople)
		{
			this->idPeople = idPeople;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~CreateAddressForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		
	private: int idPeople;
	private: NS_Comp_Svc::Address^ oAddress;
	private: NS_Comp_Svc::People^ oPeople;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ Cities;
	private: int id_City;
	private: int indexPeople;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::TextBox^ textBox_postalcode;
	private: System::Windows::Forms::TextBox^ textBox_address;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_first_name;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_last_name;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::CheckBox^ checkBox_deli;
	private: System::Windows::Forms::CheckBox^ checkBox_bill;
	private: System::Windows::Forms::Button^ button_enter;
	private: System::Windows::Forms::ComboBox^ comboBox_city;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreateAddressForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_postalcode = (gcnew System::Windows::Forms::TextBox());
			this->textBox_address = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_first_name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_last_name = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox_deli = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox_bill = (gcnew System::Windows::Forms::CheckBox());
			this->button_enter = (gcnew System::Windows::Forms::Button());
			this->comboBox_city = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SandyBrown;
			this->label1->Location = System::Drawing::Point(212, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// textBox_postalcode
			// 
			this->textBox_postalcode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_postalcode->Location = System::Drawing::Point(294, 285);
			this->textBox_postalcode->Name = L"textBox_postalcode";
			this->textBox_postalcode->Size = System::Drawing::Size(331, 35);
			this->textBox_postalcode->TabIndex = 4;
			this->textBox_postalcode->Leave += gcnew System::EventHandler(this, &CreateAddressForm::textBox_postalcode_Leave);
			// 
			// textBox_address
			// 
			this->textBox_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_address->Location = System::Drawing::Point(294, 244);
			this->textBox_address->Name = L"textBox_address";
			this->textBox_address->Size = System::Drawing::Size(331, 35);
			this->textBox_address->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::SandyBrown;
			this->label8->Location = System::Drawing::Point(184, 329);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 29);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Ville :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SandyBrown;
			this->label7->Location = System::Drawing::Point(93, 288);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(170, 29);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Code Postal :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::SandyBrown;
			this->label9->Location = System::Drawing::Point(140, 247);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(123, 29);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Adresse :";
			// 
			// textBox_first_name
			// 
			this->textBox_first_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_first_name->Location = System::Drawing::Point(294, 203);
			this->textBox_first_name->Name = L"textBox_first_name";
			this->textBox_first_name->Size = System::Drawing::Size(331, 35);
			this->textBox_first_name->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SandyBrown;
			this->label2->Location = System::Drawing::Point(145, 206);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 29);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Prénom :";
			// 
			// textBox_last_name
			// 
			this->textBox_last_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_last_name->Location = System::Drawing::Point(294, 162);
			this->textBox_last_name->Name = L"textBox_last_name";
			this->textBox_last_name->Size = System::Drawing::Size(331, 35);
			this->textBox_last_name->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SandyBrown;
			this->label3->Location = System::Drawing::Point(181, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 29);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Nom :";
			// 
			// checkBox_deli
			// 
			this->checkBox_deli->AutoSize = true;
			this->checkBox_deli->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_deli->ForeColor = System::Drawing::Color::SandyBrown;
			this->checkBox_deli->Location = System::Drawing::Point(189, 369);
			this->checkBox_deli->Name = L"checkBox_deli";
			this->checkBox_deli->Size = System::Drawing::Size(137, 33);
			this->checkBox_deli->TabIndex = 6;
			this->checkBox_deli->Text = L"Livraison";
			this->checkBox_deli->UseVisualStyleBackColor = true;
			// 
			// checkBox_bill
			// 
			this->checkBox_bill->AutoSize = true;
			this->checkBox_bill->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox_bill->ForeColor = System::Drawing::Color::SandyBrown;
			this->checkBox_bill->Location = System::Drawing::Point(399, 369);
			this->checkBox_bill->Name = L"checkBox_bill";
			this->checkBox_bill->Size = System::Drawing::Size(162, 33);
			this->checkBox_bill->TabIndex = 7;
			this->checkBox_bill->Text = L"Facturation";
			this->checkBox_bill->UseVisualStyleBackColor = true;
			// 
			// button_enter
			// 
			this->button_enter->BackColor = System::Drawing::Color::SandyBrown;
			this->button_enter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_enter->Location = System::Drawing::Point(271, 420);
			this->button_enter->Name = L"button_enter";
			this->button_enter->Size = System::Drawing::Size(182, 77);
			this->button_enter->TabIndex = 8;
			this->button_enter->Text = L"Valider !";
			this->button_enter->UseVisualStyleBackColor = false;
			this->button_enter->Click += gcnew System::EventHandler(this, &CreateAddressForm::button_enter_Click);
			// 
			// comboBox_city
			// 
			this->comboBox_city->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_city->FormattingEnabled = true;
			this->comboBox_city->Location = System::Drawing::Point(294, 326);
			this->comboBox_city->Name = L"comboBox_city";
			this->comboBox_city->Size = System::Drawing::Size(331, 37);
			this->comboBox_city->TabIndex = 5;
			this->comboBox_city->SelectedIndexChanged += gcnew System::EventHandler(this, &CreateAddressForm::comboBox_city_SelectedIndexChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(212, 37);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(454, 77);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 26;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(55, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(151, 139);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// CreateAddressForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(747, 509);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->comboBox_city);
			this->Controls->Add(this->button_enter);
			this->Controls->Add(this->checkBox_bill);
			this->Controls->Add(this->checkBox_deli);
			this->Controls->Add(this->textBox_last_name);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_first_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_postalcode);
			this->Controls->Add(this->textBox_address);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"CreateAddressForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Création d\'Adresse";
			this->Load += gcnew System::EventHandler(this, &CreateAddressForm::CreateAddressForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreateAddressForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oAddress = gcnew NS_Comp_Svc::Address();
		this->oPeople = gcnew NS_Comp_Svc::People();
		this->oDs = gcnew System::Data::DataSet();
		this->oDs = this->oPeople->selectAllPeople("people");
		for (int i = 0; i < this->oDs->Tables["people"]->Rows->Count; i++) {
			if (System::Convert::ToInt32(this->oDs->Tables["people"]->Rows[i]->ItemArray[0]) == this->idPeople) {
				this->indexPeople = i;
			}
		}
		System::String^ name;
		name = this->oDs->Tables["people"]->Rows[indexPeople]->ItemArray[0]->ToString() + " ";
		name += this->oDs->Tables["people"]->Rows[indexPeople]->ItemArray[1]->ToString() + " ";
		name += this->oDs->Tables["people"]->Rows[indexPeople]->ItemArray[2]->ToString();
		this->label1->Text = name;

	}
	private: System::Void button_enter_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->checkBox_bill->Checked && !this->checkBox_deli->Checked) {
			return;
		}
		int idAddress = this->oAddress->createAddress(this->textBox_last_name->Text,
			this->textBox_first_name->Text,
			this->textBox_address->Text,
			this->id_City);
		int billing = 0;
		int delivery = 0;
		if (this->checkBox_bill->Checked) {
			billing = 1;
		}
		if (this->checkBox_deli->Checked) {
			delivery = 1;
		}
		this->oAddress->linkAddressCustomer(this->idPeople, idAddress, billing, delivery);
		this->Close();
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
		this->textBox_postalcode->Text = this->Cities->Tables["cities"]->Rows[this->comboBox_city->SelectedIndex]->ItemArray[1]->ToString();
	}
}

};
}
