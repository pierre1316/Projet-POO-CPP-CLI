#pragma once
#include "People.h"
#include "Staff.h"
#include "Customer.h"
#include "Address.h"
#include "AddressForm.h"


namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de ModifyPeopleForm
	/// </summary>
	public ref class ModifyPeopleForm : public System::Windows::Forms::Form
	{
	public:
		ModifyPeopleForm(int id_role_user)
		{
			this->id_role_user = id_role_user;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~ModifyPeopleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listbox_people;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radio_customer;
	private: System::Windows::Forms::RadioButton^ radio_staff;
	private: NS_Comp_Svc::Customer^ oCust;
	private: NS_Comp_Svc::Staff^ oStaff;
	private: NS_Comp_Svc::People^ oPeo;
	private: NS_Comp_Svc::Address^ oAddress;
	private: System::Data::DataSet^ oDs;
	private: System::Data::DataSet^ Cities;
	private: int id_City;
	private: int id_role;
	private: int id_role_user;


	private: System::Windows::Forms::Button^ button_address;
	private: System::Windows::Forms::Button^ button_register;
	private: System::Windows::Forms::DateTimePicker^ date_hiring;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ combo_superior;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DateTimePicker^ date_birthday;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_first_name;
	private: System::Windows::Forms::TextBox^ textBox_last_name;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button_suppr;

	private: System::Windows::Forms::TextBox^ textBox_postalcode;
	private: System::Windows::Forms::TextBox^ textBox_address;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboBox_city;
	private: System::Windows::Forms::ComboBox^ comboBox_role;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModifyPeopleForm::typeid));
			this->listbox_people = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radio_customer = (gcnew System::Windows::Forms::RadioButton());
			this->radio_staff = (gcnew System::Windows::Forms::RadioButton());
			this->button_address = (gcnew System::Windows::Forms::Button());
			this->button_register = (gcnew System::Windows::Forms::Button());
			this->date_hiring = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->combo_superior = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->date_birthday = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_first_name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_last_name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button_suppr = (gcnew System::Windows::Forms::Button());
			this->textBox_postalcode = (gcnew System::Windows::Forms::TextBox());
			this->textBox_address = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox_city = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_role = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// listbox_people
			// 
			this->listbox_people->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listbox_people->FormattingEnabled = true;
			this->listbox_people->ItemHeight = 37;
			this->listbox_people->Location = System::Drawing::Point(30, 250);
			this->listbox_people->Name = L"listbox_people";
			this->listbox_people->Size = System::Drawing::Size(356, 485);
			this->listbox_people->TabIndex = 4;
			this->listbox_people->SelectedIndexChanged += gcnew System::EventHandler(this, &ModifyPeopleForm::listbox_people_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SandyBrown;
			this->label1->Location = System::Drawing::Point(180, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(502, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Choisir une personne à modifier";
			// 
			// radio_customer
			// 
			this->radio_customer->AutoSize = true;
			this->radio_customer->Checked = true;
			this->radio_customer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radio_customer->ForeColor = System::Drawing::Color::SandyBrown;
			this->radio_customer->Location = System::Drawing::Point(30, 203);
			this->radio_customer->Name = L"radio_customer";
			this->radio_customer->Size = System::Drawing::Size(122, 41);
			this->radio_customer->TabIndex = 1;
			this->radio_customer->TabStop = true;
			this->radio_customer->Text = L"Client";
			this->radio_customer->UseVisualStyleBackColor = true;
			this->radio_customer->CheckedChanged += gcnew System::EventHandler(this, &ModifyPeopleForm::radio_customer_CheckedChanged);
			// 
			// radio_staff
			// 
			this->radio_staff->AutoSize = true;
			this->radio_staff->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radio_staff->ForeColor = System::Drawing::Color::SandyBrown;
			this->radio_staff->Location = System::Drawing::Point(187, 203);
			this->radio_staff->Name = L"radio_staff";
			this->radio_staff->Size = System::Drawing::Size(187, 41);
			this->radio_staff->TabIndex = 2;
			this->radio_staff->Text = L"Personnel";
			this->radio_staff->UseVisualStyleBackColor = true;
			// 
			// button_address
			// 
			this->button_address->BackColor = System::Drawing::Color::SandyBrown;
			this->button_address->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_address->Location = System::Drawing::Point(1112, 42);
			this->button_address->Name = L"button_address";
			this->button_address->Size = System::Drawing::Size(197, 93);
			this->button_address->TabIndex = 16;
			this->button_address->Text = L"Gérer les adresses";
			this->button_address->UseVisualStyleBackColor = false;
			this->button_address->Click += gcnew System::EventHandler(this, &ModifyPeopleForm::button_address_Click);
			// 
			// button_register
			// 
			this->button_register->BackColor = System::Drawing::Color::SandyBrown;
			this->button_register->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_register->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_register->Location = System::Drawing::Point(898, 42);
			this->button_register->Name = L"button_register";
			this->button_register->Size = System::Drawing::Size(197, 93);
			this->button_register->TabIndex = 15;
			this->button_register->Text = L"Enregistrer";
			this->button_register->UseVisualStyleBackColor = false;
			this->button_register->Click += gcnew System::EventHandler(this, &ModifyPeopleForm::button_register_Click);
			// 
			// date_hiring
			// 
			this->date_hiring->CustomFormat = L"";
			this->date_hiring->Enabled = false;
			this->date_hiring->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date_hiring->Location = System::Drawing::Point(786, 445);
			this->date_hiring->Name = L"date_hiring";
			this->date_hiring->Size = System::Drawing::Size(490, 44);
			this->date_hiring->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SandyBrown;
			this->label5->Location = System::Drawing::Point(478, 451);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(302, 37);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Date d\'embauche :";
			// 
			// combo_superior
			// 
			this->combo_superior->Enabled = false;
			this->combo_superior->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo_superior->FormattingEnabled = true;
			this->combo_superior->Location = System::Drawing::Point(786, 392);
			this->combo_superior->Name = L"combo_superior";
			this->combo_superior->Size = System::Drawing::Size(490, 45);
			this->combo_superior->TabIndex = 9;
			this->combo_superior->Text = L"Sélectionnez un Supérieur";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SandyBrown;
			this->label4->Location = System::Drawing::Point(393, 395);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(387, 37);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Supérieur Hiérarchique :\r\n";
			// 
			// date_birthday
			// 
			this->date_birthday->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date_birthday->Location = System::Drawing::Point(786, 339);
			this->date_birthday->Name = L"date_birthday";
			this->date_birthday->Size = System::Drawing::Size(490, 44);
			this->date_birthday->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SandyBrown;
			this->label3->Location = System::Drawing::Point(456, 345);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(324, 37);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Date de Naissance :";
			// 
			// textBox_first_name
			// 
			this->textBox_first_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_first_name->Location = System::Drawing::Point(786, 290);
			this->textBox_first_name->Name = L"textBox_first_name";
			this->textBox_first_name->Size = System::Drawing::Size(490, 44);
			this->textBox_first_name->TabIndex = 7;
			// 
			// textBox_last_name
			// 
			this->textBox_last_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_last_name->Location = System::Drawing::Point(786, 233);
			this->textBox_last_name->Name = L"textBox_last_name";
			this->textBox_last_name->Size = System::Drawing::Size(490, 44);
			this->textBox_last_name->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SandyBrown;
			this->label2->Location = System::Drawing::Point(625, 293);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 37);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Prénom :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::SandyBrown;
			this->label6->Location = System::Drawing::Point(671, 236);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(109, 37);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Nom :";
			// 
			// button_suppr
			// 
			this->button_suppr->BackColor = System::Drawing::Color::SandyBrown;
			this->button_suppr->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_suppr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_suppr->Location = System::Drawing::Point(687, 42);
			this->button_suppr->Name = L"button_suppr";
			this->button_suppr->Size = System::Drawing::Size(197, 93);
			this->button_suppr->TabIndex = 5;
			this->button_suppr->Text = L"Supprimer";
			this->button_suppr->UseVisualStyleBackColor = false;
			this->button_suppr->Click += gcnew System::EventHandler(this, &ModifyPeopleForm::button_suppr_Click);
			// 
			// textBox_postalcode
			// 
			this->textBox_postalcode->Enabled = false;
			this->textBox_postalcode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_postalcode->Location = System::Drawing::Point(786, 548);
			this->textBox_postalcode->Name = L"textBox_postalcode";
			this->textBox_postalcode->Size = System::Drawing::Size(490, 44);
			this->textBox_postalcode->TabIndex = 12;
			// 
			// textBox_address
			// 
			this->textBox_address->Enabled = false;
			this->textBox_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_address->Location = System::Drawing::Point(786, 497);
			this->textBox_address->Name = L"textBox_address";
			this->textBox_address->Size = System::Drawing::Size(490, 44);
			this->textBox_address->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::SandyBrown;
			this->label8->Location = System::Drawing::Point(678, 608);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(102, 37);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Ville :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SandyBrown;
			this->label7->Location = System::Drawing::Point(558, 551);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(222, 37);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Code Postal :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::SandyBrown;
			this->label9->Location = System::Drawing::Point(619, 500);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(161, 37);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Adresse :";
			// 
			// comboBox_city
			// 
			this->comboBox_city->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_city->FormattingEnabled = true;
			this->comboBox_city->Location = System::Drawing::Point(786, 600);
			this->comboBox_city->Name = L"comboBox_city";
			this->comboBox_city->Size = System::Drawing::Size(490, 45);
			this->comboBox_city->TabIndex = 13;
			this->comboBox_city->SelectedIndexChanged += gcnew System::EventHandler(this, &ModifyPeopleForm::comboBox_city_SelectedIndexChanged);
			this->comboBox_city->Enter += gcnew System::EventHandler(this, &ModifyPeopleForm::comboBox_city_Enter);
			// 
			// comboBox_role
			// 
			this->comboBox_role->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_role->FormattingEnabled = true;
			this->comboBox_role->Location = System::Drawing::Point(786, 654);
			this->comboBox_role->Name = L"comboBox_role";
			this->comboBox_role->Size = System::Drawing::Size(490, 45);
			this->comboBox_role->TabIndex = 22;
			this->comboBox_role->SelectedIndexChanged += gcnew System::EventHandler(this, &ModifyPeopleForm::comboBox_role_SelectedIndexChanged);
			this->comboBox_role->Click += gcnew System::EventHandler(this, &ModifyPeopleForm::comboBox_role_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::SandyBrown;
			this->label11->Location = System::Drawing::Point(657, 657);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(123, 37);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Poste :";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(187, 53);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(454, 77);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(30, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(151, 139);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 23;
			this->pictureBox1->TabStop = false;
			// 
			// ModifyPeopleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1344, 756);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->comboBox_role);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->comboBox_city);
			this->Controls->Add(this->textBox_postalcode);
			this->Controls->Add(this->textBox_address);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button_suppr);
			this->Controls->Add(this->button_address);
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
			this->Controls->Add(this->label6);
			this->Controls->Add(this->radio_staff);
			this->Controls->Add(this->radio_customer);
			this->Controls->Add(this->listbox_people);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"ModifyPeopleForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"ModifyPeopleForm";
			this->Load += gcnew System::EventHandler(this, &ModifyPeopleForm::ModifyPeopleForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void window_components_load(System::Void) {
	listbox_people_load();
	this->combo_superior->ResetText();
	this->combo_superior->Text = L"Sélectionnez un Supérieur";
		
	this->date_birthday->ResetText();
	this->date_hiring->ResetText();
	this->textBox_last_name->ResetText();
	this->textBox_first_name->ResetText();
	this->textBox_address->ResetText();
	this->textBox_postalcode->ResetText();
	this->comboBox_city->ResetText();
	this->comboBox_role->ResetText();
	if (this->radio_customer->Checked) {
		this->date_birthday->Enabled = true;
		this->date_hiring->Enabled = false;
		this->combo_superior->Enabled = false;
		this->textBox_address->Enabled = false;
		this->textBox_postalcode->Enabled = false;
		this->comboBox_city->Enabled = false;
		this->button_address->Enabled = true;
		this->comboBox_role->Enabled = false;
	}
	else {
		this->date_birthday->Enabled = false;
		this->date_hiring->Enabled = true;
		this->combo_superior->Enabled = true;
		this->textBox_address->Enabled = true;
		this->textBox_postalcode->Enabled = true;
		this->comboBox_city->Enabled = true;
		this->button_address->Enabled = false;
		this->comboBox_role->Enabled = true;
		this->combo_superior->Items->Clear();
		for (int i = 0; i < this->oDs->Tables["rsl"]->Rows->Count; i++) {
			this->combo_superior->Items->Add(
				this->oDs->Tables["rsl"]->Rows[i]->ItemArray[0]->ToString() + " " +
				this->oDs->Tables["rsl"]->Rows[i]->ItemArray[1]->ToString() + " " +
				this->oDs->Tables["rsl"]->Rows[i]->ItemArray[2]->ToString());
		}
	}
}

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



private: System::Void ModifyPeopleForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oCust = gcnew NS_Comp_Svc::Customer();
	this->oStaff = gcnew NS_Comp_Svc::Staff();
	this->oPeo = gcnew NS_Comp_Svc::People();
	this->oAddress = gcnew NS_Comp_Svc::Address();
	if (this->id_role_user == 1) {
		this->radio_staff->Enabled = false;
	}
	window_components_load();
}


private: System::Void radio_customer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	window_components_load();
}

private: System::Void listbox_people_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
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
	this->textBox_last_name->Text = this->oDs->Tables["rsl"]->Rows[index]->ItemArray[1]->ToString();
	this->textBox_first_name->Text = this->oDs->Tables["rsl"]->Rows[index]->ItemArray[2]->ToString();
	int idPeople = System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[0]);
		
	if (this->radio_customer->Checked) {
		this->date_birthday->Value = System::Convert::ToDateTime(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[3]);
	}
	else {
		int idAddress = System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[5]);
		this->id_role = Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[8]);
		this->date_hiring->Value = System::Convert::ToDateTime(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[4]);
		System::String^ indexstaff = System::Convert::ToString(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[3]);
		System::Data::DataSet^ staff = this->oStaff->selectAllStaffForStaff("staff", System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[0]));
		this->combo_superior->Items->Clear();
		for (int i = 0; i < staff->Tables["staff"]->Rows->Count; i++) {
			this->combo_superior->Items->Add(
				staff->Tables["staff"]->Rows[i]->ItemArray[0]->ToString() + " " +
				staff->Tables["staff"]->Rows[i]->ItemArray[1]->ToString() + " " +
				staff->Tables["staff"]->Rows[i]->ItemArray[2]->ToString()
			);
		}
		if (indexstaff != "") {

			int nbstaff;
			for (int i = 0; i < staff->Tables["staff"]->Rows->Count; i++) {
				if (System::Convert::ToString(staff->Tables["staff"]->Rows[i]->ItemArray[0]) == indexstaff) {
					nbstaff = i;
				}
			}
			this->combo_superior->SelectedIndex = nbstaff;
		}
		else {
			this->combo_superior->ResetText();
			this->combo_superior->Text = L"Sélectionnez un Supérieur";
		}
		System::Data::DataSet^ addr;
		addr = this->oAddress->selectAddress("address", idAddress);
		this->textBox_address->Text = addr->Tables["address"]->Rows[0]->ItemArray[3]->ToString();
		this->textBox_postalcode->Text = addr->Tables["address"]->Rows[0]->ItemArray[4]->ToString();
		this->comboBox_city->Text = addr->Tables["address"]->Rows[0]->ItemArray[5]->ToString();
		this->id_City = Convert::ToInt32(addr->Tables["address"]->Rows[0]->ItemArray[6]);
		this->oDs = this->oStaff->selectRoles("roles");
		for (int i = 0; i < this->oDs->Tables["roles"]->Rows->Count; i++) {
			if (Convert::ToInt32(this->oDs->Tables["roles"]->Rows[i]->ItemArray[0]) == this->id_role) {
				this->comboBox_role->Text = this->oDs->Tables["roles"]->Rows[i]->ItemArray[1]->ToString();
			}
		}
	}
}

private: System::Void button_register_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->radio_customer->Checked) {
		this->oDs = this->oCust->selectAllCustomer("rsl");
	}
	else {
		this->oDs = this->oStaff->selectAllStaff("rsl");
	}
	int index = this->listbox_people->SelectedIndex;
	int idPeople = System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[0]);
	this->oPeo->modifyPeople(idPeople, this->textBox_last_name->Text, this->textBox_first_name->Text);
	if (this->radio_customer->Checked) {
		System::DateTime^ date = this->date_birthday->Value;
		System::String^ dateString = System::Convert::ToString(date->Month) + "/";
		dateString += System::Convert::ToString(date->Day) + "/";
		dateString += System::Convert::ToString(date->Year);
		this->oCust->modifyCustomer(idPeople, dateString);
	}
	else {
		//modifie staff
		int idAddress = System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[5]);
		int idSuperior;
		int indexStaff = this->combo_superior->SelectedIndex;
		System::Data::DataSet^ staff = this->oStaff->selectAllStaffForStaff("staff", System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[0]));

		if (this->combo_superior->Text == "" || indexStaff == -1) {
			this->oStaff->setSuperiorNULL(idPeople);
			idSuperior = -1;
		}
		else {
			if (indexStaff != -1) {
				idSuperior = System::Convert::ToInt32(staff->Tables["staff"]->Rows[indexStaff]->ItemArray[0]);
			}
		}
		System::DateTime^ date = this->date_hiring->Value;
		System::String^ dateString = System::Convert::ToString(date->Month) + "/";
		dateString += System::Convert::ToString(date->Day) + "/";
		dateString += System::Convert::ToString(date->Year);
		this->oStaff->modifyStaff(idPeople, dateString, idSuperior, this->id_role);
		this->oAddress->modifyAddress(idAddress, "", "", this->textBox_address->Text, this->id_City);
		window_components_load();
	}
}

private: System::Void button_suppr_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = this->listbox_people->SelectedIndex;
	int idPeople = System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[0]);
	if (this->radio_customer->Checked) {
		// On supprime un client
		this->oDs = this->oStaff->getTheStaff("rsl", idPeople);
		if (this->oDs->Tables["rsl"]->Rows->Count != 0) {
			// Le client est aussi staff 
			this->oCust->deleteCustomer(idPeople);
		}
		else {
			//Le client n'est pas staff
			this->oCust->deleteCustomer(idPeople);
			this->oPeo->deletePeople(idPeople);
		}
	}
	else {
		// on supprime un staff
		this->oDs = this->oCust->getTheCustomer("rsl", idPeople);
		if (this->oDs->Tables["rsl"]->Rows->Count != 0) {
			// Le staff est aussi client
			this->oStaff->deleteStaff(idPeople);
		}
		else {
			// le staff n'est pas client
			this->oStaff->deleteStaff(idPeople);
			this->oPeo->deletePeople(idPeople);
		}
	}
	window_components_load();
}

private: System::Void button_address_Click(System::Object^ sender, System::EventArgs^ e) {
	AddressForm^ addressform = gcnew AddressForm();
	addressform->ShowDialog();
}

private: System::Void insert_cities(System::Void) {
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

private: System::Void comboBox_city_Enter(System::Object^ sender, System::EventArgs^ e) {
	this->Cursor = Cursors::WaitCursor;
	insert_cities();
	this->Cursor = Cursors::Default;
}

private: System::Void comboBox_role_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oDs = this->oStaff->selectRoles("roles");
	this->comboBox_role->Items->Clear();
	for (int i = 0; i < this->oDs->Tables["roles"]->Rows->Count; i++) {
		this->comboBox_role->Items->Add(
			this->oDs->Tables["roles"]->Rows[i]->ItemArray[1]->ToString()
		);
	}
}
private: System::Void comboBox_role_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox_role->SelectedIndex == -1) {
		return;
	}
	this->oDs = this->oStaff->selectRoles("roles");
	this->id_role = Convert::ToInt32(this->oDs->Tables["roles"]->Rows[comboBox_role->SelectedIndex]->ItemArray[0]);
}


private: System::Boolean test_enter(System::Void) {
	if (this->textBox_first_name->Text == "" || this->textBox_last_name->Text == "") {
		show_error("Prénom ou Nom vides");
		return false;
	}
	if (this->radio_staff->Checked) {
		if (this->textBox_address->Text == "") { show_error("Adresse vide"); return false; }
		if (this->textBox_postalcode->Text == "") { show_error("Code postal vide"); return false; }
		if (this->comboBox_city->SelectedIndex == -1) { show_error("Ville non sélectionnée"); return false; }
		if (this->comboBox_role->SelectedIndex == -1) { show_error("Role non sélectionné"); return false; }
	}
	return true;
}

private: System::Void show_error(System::String^ text) {
	MessageBoxButtons buttons = MessageBoxButtons::OK;
	MessageBoxIcon icon = MessageBoxIcon::Error;
	MessageBox::Show(text, "Erreur", buttons, icon);
}

};
}