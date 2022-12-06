#pragma once
#include "People.h"
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
		CreatePeopleForm(int id_role_user)
		{
			this->id_role_user = id_role_user;
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
	private: int idPeople;
	private: int id_City;
	private: int id_role;
	private: int id_role_user;
	private: int id_superior = -1;

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
	private: System::Windows::Forms::ComboBox^ comboBox_role;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CreatePeopleForm::typeid));
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
			this->comboBox_role = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// radiobutt_new_people
			// 
			this->radiobutt_new_people->AutoSize = true;
			this->radiobutt_new_people->Checked = true;
			this->radiobutt_new_people->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radiobutt_new_people->ForeColor = System::Drawing::Color::DarkOrange;
			this->radiobutt_new_people->Location = System::Drawing::Point(8, 25);
			this->radiobutt_new_people->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->radiobutt_new_people->Name = L"radiobutt_new_people";
			this->radiobutt_new_people->Size = System::Drawing::Size(206, 28);
			this->radiobutt_new_people->TabIndex = 3;
			this->radiobutt_new_people->TabStop = true;
			this->radiobutt_new_people->Text = L"Nouvelle personne";
			this->radiobutt_new_people->UseVisualStyleBackColor = true;
			this->radiobutt_new_people->CheckedChanged += gcnew System::EventHandler(this, &CreatePeopleForm::radiobutt_new_people_CheckedChanged);
			// 
			// radiobutt_existing_people
			// 
			this->radiobutt_existing_people->AutoSize = true;
			this->radiobutt_existing_people->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radiobutt_existing_people->ForeColor = System::Drawing::Color::DarkOrange;
			this->radiobutt_existing_people->Location = System::Drawing::Point(222, 25);
			this->radiobutt_existing_people->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->radiobutt_existing_people->Name = L"radiobutt_existing_people";
			this->radiobutt_existing_people->Size = System::Drawing::Size(207, 28);
			this->radiobutt_existing_people->TabIndex = 4;
			this->radiobutt_existing_people->TabStop = true;
			this->radiobutt_existing_people->Text = L"Personne existante";
			this->radiobutt_existing_people->UseVisualStyleBackColor = true;
			// 
			// combo_people
			// 
			this->combo_people->Enabled = false;
			this->combo_people->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo_people->FormattingEnabled = true;
			this->combo_people->Location = System::Drawing::Point(443, 24);
			this->combo_people->Name = L"combo_people";
			this->combo_people->Size = System::Drawing::Size(261, 28);
			this->combo_people->TabIndex = 5;
			this->combo_people->Text = L"Sélectionnez une personne";
			this->combo_people->SelectedIndexChanged += gcnew System::EventHandler(this, &CreatePeopleForm::comboBox1_SelectedIndexChanged);
			this->combo_people->Click += gcnew System::EventHandler(this, &CreatePeopleForm::combo_people_Click);
			// 
			// radio_staff_select
			// 
			this->radio_staff_select->AutoSize = true;
			this->radio_staff_select->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radio_staff_select->ForeColor = System::Drawing::Color::DarkOrange;
			this->radio_staff_select->Location = System::Drawing::Point(169, 25);
			this->radio_staff_select->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->radio_staff_select->Name = L"radio_staff_select";
			this->radio_staff_select->Size = System::Drawing::Size(181, 28);
			this->radio_staff_select->TabIndex = 2;
			this->radio_staff_select->TabStop = true;
			this->radio_staff_select->Text = L"Créer Personnel";
			this->radio_staff_select->UseVisualStyleBackColor = true;
			// 
			// radio_customer_select
			// 
			this->radio_customer_select->AutoSize = true;
			this->radio_customer_select->Checked = true;
			this->radio_customer_select->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->radio_customer_select->ForeColor = System::Drawing::Color::DarkOrange;
			this->radio_customer_select->Location = System::Drawing::Point(12, 24);
			this->radio_customer_select->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->radio_customer_select->Name = L"radio_customer_select";
			this->radio_customer_select->Size = System::Drawing::Size(139, 28);
			this->radio_customer_select->TabIndex = 1;
			this->radio_customer_select->TabStop = true;
			this->radio_customer_select->Text = L"Créer Client";
			this->radio_customer_select->UseVisualStyleBackColor = true;
			this->radio_customer_select->CheckedChanged += gcnew System::EventHandler(this, &CreatePeopleForm::radio_customer_select_CheckedChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radio_customer_select);
			this->groupBox1->Controls->Add(this->radio_staff_select);
			this->groupBox1->ForeColor = System::Drawing::Color::DarkOrange;
			this->groupBox1->Location = System::Drawing::Point(30, 163);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(363, 69);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radiobutt_existing_people);
			this->groupBox2->Controls->Add(this->radiobutt_new_people);
			this->groupBox2->Controls->Add(this->combo_people);
			this->groupBox2->ForeColor = System::Drawing::Color::DarkOrange;
			this->groupBox2->Location = System::Drawing::Point(405, 163);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(722, 69);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrange;
			this->label1->Location = System::Drawing::Point(179, 275);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkOrange;
			this->label2->Location = System::Drawing::Point(156, 332);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Prénom :";
			// 
			// textBox_last_name
			// 
			this->textBox_last_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_last_name->Location = System::Drawing::Point(271, 272);
			this->textBox_last_name->Name = L"textBox_last_name";
			this->textBox_last_name->Size = System::Drawing::Size(347, 29);
			this->textBox_last_name->TabIndex = 6;
			// 
			// textBox_first_name
			// 
			this->textBox_first_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_first_name->Location = System::Drawing::Point(271, 329);
			this->textBox_first_name->Name = L"textBox_first_name";
			this->textBox_first_name->Size = System::Drawing::Size(347, 29);
			this->textBox_first_name->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DarkOrange;
			this->label3->Location = System::Drawing::Point(48, 393);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(197, 24);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Date de Naissance :";
			// 
			// date_birthday
			// 
			this->date_birthday->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date_birthday->Location = System::Drawing::Point(271, 389);
			this->date_birthday->Name = L"date_birthday";
			this->date_birthday->Size = System::Drawing::Size(347, 29);
			this->date_birthday->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DarkOrange;
			this->label4->Location = System::Drawing::Point(644, 278);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(241, 24);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Supérieur Hiérarchique :\r\n";
			// 
			// combo_superior
			// 
			this->combo_superior->Enabled = false;
			this->combo_superior->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->combo_superior->FormattingEnabled = true;
			this->combo_superior->Location = System::Drawing::Point(905, 275);
			this->combo_superior->Name = L"combo_superior";
			this->combo_superior->Size = System::Drawing::Size(347, 32);
			this->combo_superior->TabIndex = 9;
			this->combo_superior->Text = L"Sélectionnez un Supérieur";
			this->combo_superior->SelectedIndexChanged += gcnew System::EventHandler(this, &CreatePeopleForm::combo_superior_SelectedIndexChanged);
			// 
			// date_hiring
			// 
			this->date_hiring->CustomFormat = L"";
			this->date_hiring->Enabled = false;
			this->date_hiring->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->date_hiring->Location = System::Drawing::Point(271, 449);
			this->date_hiring->Name = L"date_hiring";
			this->date_hiring->Size = System::Drawing::Size(347, 29);
			this->date_hiring->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DarkOrange;
			this->label5->Location = System::Drawing::Point(59, 453);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(186, 24);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Date d\'embauche :";
			// 
			// button_register
			// 
			this->button_register->BackColor = System::Drawing::Color::DarkOrange;
			this->button_register->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_register->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_register->Location = System::Drawing::Point(711, 526);
			this->button_register->Name = L"button_register";
			this->button_register->Size = System::Drawing::Size(525, 178);
			this->button_register->TabIndex = 18;
			this->button_register->Text = L"Enregistrer";
			this->button_register->UseVisualStyleBackColor = false;
			this->button_register->Click += gcnew System::EventHandler(this, &CreatePeopleForm::button_register_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DarkOrange;
			this->label6->Location = System::Drawing::Point(146, 514);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 24);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Adresse :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkOrange;
			this->label7->Location = System::Drawing::Point(111, 574);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(134, 24);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Code Postal :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DarkOrange;
			this->label8->Location = System::Drawing::Point(182, 629);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 24);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Ville :";
			// 
			// textBox_address
			// 
			this->textBox_address->Enabled = false;
			this->textBox_address->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_address->Location = System::Drawing::Point(271, 511);
			this->textBox_address->Name = L"textBox_address";
			this->textBox_address->Size = System::Drawing::Size(347, 29);
			this->textBox_address->TabIndex = 11;
			// 
			// textBox_postalcode
			// 
			this->textBox_postalcode->Enabled = false;
			this->textBox_postalcode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_postalcode->Location = System::Drawing::Point(272, 571);
			this->textBox_postalcode->Name = L"textBox_postalcode";
			this->textBox_postalcode->Size = System::Drawing::Size(347, 29);
			this->textBox_postalcode->TabIndex = 12;
			// 
			// comboBox_city
			// 
			this->comboBox_city->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_city->FormattingEnabled = true;
			this->comboBox_city->Location = System::Drawing::Point(271, 626);
			this->comboBox_city->Name = L"comboBox_city";
			this->comboBox_city->Size = System::Drawing::Size(348, 32);
			this->comboBox_city->TabIndex = 13;
			this->comboBox_city->SelectedIndexChanged += gcnew System::EventHandler(this, &CreatePeopleForm::comboBox_city_SelectedIndexChanged);
			this->comboBox_city->Click += gcnew System::EventHandler(this, &CreatePeopleForm::comboBox_city_Click);
			// 
			// textBox_username
			// 
			this->textBox_username->Enabled = false;
			this->textBox_username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_username->Location = System::Drawing::Point(905, 389);
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->Size = System::Drawing::Size(347, 29);
			this->textBox_username->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DarkOrange;
			this->label9->Location = System::Drawing::Point(707, 392);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(178, 24);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Nom d\'utilisateur :";
			// 
			// textBox_password
			// 
			this->textBox_password->Enabled = false;
			this->textBox_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_password->Location = System::Drawing::Point(905, 448);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->PasswordChar = '*';
			this->textBox_password->Size = System::Drawing::Size(347, 29);
			this->textBox_password->TabIndex = 16;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DarkOrange;
			this->label10->Location = System::Drawing::Point(738, 451);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(147, 24);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Mot de passe :";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox_role
			// 
			this->comboBox_role->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox_role->FormattingEnabled = true;
			this->comboBox_role->Location = System::Drawing::Point(905, 332);
			this->comboBox_role->Name = L"comboBox_role";
			this->comboBox_role->Size = System::Drawing::Size(347, 32);
			this->comboBox_role->TabIndex = 20;
			this->comboBox_role->SelectedIndexChanged += gcnew System::EventHandler(this, &CreatePeopleForm::comboBox_role_SelectedIndexChanged);
			this->comboBox_role->Click += gcnew System::EventHandler(this, &CreatePeopleForm::comboBox_role_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::DarkOrange;
			this->label11->Location = System::Drawing::Point(811, 336);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 24);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Poste :";
			this->label11->Click += gcnew System::EventHandler(this, &CreatePeopleForm::label11_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(187, 53);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(454, 77);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(30, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(151, 139);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			// 
			// CreatePeopleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1344, 756);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->comboBox_role);
			this->Controls->Add(this->label11);
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
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"CreatePeopleForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"CreateCustomerForm";
			this->Load += gcnew System::EventHandler(this, &CreatePeopleForm::CreateCustomerForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreateCustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oPeople = gcnew NS_Comp_Svc::People();
		this->oStaff = gcnew NS_Comp_Svc::Staff();
		this->oCust = gcnew NS_Comp_Svc::Customer();
		this->oAddress = gcnew NS_Comp_Svc::Address();
		if (this->id_role_user == 1) {
			this->radio_staff_select->Enabled = false;
		}
		combo_superior_Load();
		radio_customer_select_CheckedChanged(sender, e);
		radiobutt_new_people_CheckedChanged(sender, e);
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
private: System::Void combo_people_Click(System::Object^ sender, System::EventArgs^ e) {
	this->combo_people->Text = L"Sélectionnez une personne";
	this->oDs->Clear();
	if (this->radio_staff_select->Checked) {
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

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int index = this->combo_people->SelectedIndex;
	if (this->radio_staff_select->Checked) {
		this->oDs = this->oCust->selectCustomerNoStaff("rsl");
	}
	else {
		this->oDs = this->oStaff->selectStaffNoCust("rsl");
	}
	this->idPeople = Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[0]);
	this->textBox_last_name->Text = this->oDs->Tables["rsl"]->Rows[index]->ItemArray[1]->ToString();
	this->textBox_first_name->Text = this->oDs->Tables["rsl"]->Rows[index]->ItemArray[2]->ToString();
}
	private: System::Void radiobutt_new_people_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		reload_components();
	}
private: Void reload_components(Void) {
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
	combo_superior_Load();
	this->combo_people->Text = L"Sélectionnez une personne";
	this->date_hiring->ResetText();
	this->date_birthday->ResetText();
	this->textBox_address->ResetText();
	this->textBox_postalcode->ResetText();
	this->comboBox_city->ResetText();
	this->textBox_username->ResetText();
	this->textBox_password->ResetText();
	this->comboBox_role->ResetText();
	if (this->radio_customer_select->Checked) {
		this->combo_superior->Enabled = false;
		this->date_hiring->Enabled = false;
		this->date_birthday->Enabled = true;
		this->textBox_address->Enabled = false;
		this->textBox_postalcode->Enabled = false;
		this->comboBox_city->Enabled = false;
		this->textBox_username->Enabled = false;
		this->textBox_password->Enabled = false;
		this->comboBox_role->Enabled = false;
	}
	else {
		this->combo_superior->Enabled = true;
		this->date_hiring->Enabled = true;
		this->date_birthday->Enabled = false;
		this->textBox_address->Enabled = true;
		this->textBox_postalcode->Enabled = true;
		this->comboBox_city->Enabled = true;
		this->textBox_username->Enabled = true;
		this->textBox_password->Enabled = true;
		this->comboBox_role->Enabled = true;
	}
}


private: System::Void radio_customer_select_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	reload_components();
}

private: System::Void button_register_Click(System::Object^ sender, System::EventArgs^ e) {
	//Enregistre les données dans la database
	if (!test_enter()) {
		return;
	}


	if (this->radio_staff_select->Checked) {
		// Créer un staff
		System::DateTime^ date = this->date_hiring->Value;
		System::String^ dateString = System::Convert::ToString(date->Month) + "/";
		dateString += System::Convert::ToString(date->Day) + "/";
		dateString += System::Convert::ToString(date->Year);
		this->oStaff->createStaff(idPeople, dateString, this->id_superior, this->textBox_username->Text, this->textBox_password->Text, this->id_role);
		int idAddress = this->oAddress->createAddress("", "", this->textBox_address->Text, this->id_City);
		this->oStaff->updateStaffAddress(idPeople, idAddress);
	}
	else {
		// Créer un client
		System::DateTime^ date = this->date_birthday->Value;
		System::String^ dateString = System::Convert::ToString(date->Month) + "/";
		dateString += System::Convert::ToString(date->Day) + "/";
		dateString += System::Convert::ToString(date->Year);
		this->oCust->createCustomer(this->idPeople, dateString);
	}
	reload_components();
}

private: System::Void comboBox_city_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox_city->SelectedIndex != -1) {
		this->id_City = Convert::ToInt32(this->Cities->Tables["cities"]->Rows[this->comboBox_city->SelectedIndex]->ItemArray[0]);
		this->textBox_postalcode->Text = this->Cities->Tables["cities"]->Rows[this->comboBox_city->SelectedIndex]->ItemArray[1]->ToString();
	}
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

private: System::Void combo_superior_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int index = this->combo_superior->SelectedIndex;
	this->oDs = this->oStaff->selectAllStaff("staff");
	this->id_superior = System::Convert::ToInt32(this->oDs->Tables["staff"]->Rows[index]->ItemArray[0]);
}
private: System::Void comboBox_city_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Cities = this->oAddress->selectCityFromPostalcode("cities", this->textBox_postalcode->Text);
	this->comboBox_city->Items->Clear();
	for (int i = 0; i < this->Cities->Tables["cities"]->Rows->Count; i++) {
		this->comboBox_city->Items->Add(this->Cities->Tables["cities"]->Rows[i]->ItemArray[2]->ToString());
	}
}

private: System::Boolean test_enter(System::Void) {
	if (this->textBox_first_name->Text == "" || this->textBox_last_name->Text == "") {
		show_error("Prénom ou Nom vides");
		return false;
	}
	if (this->radio_staff_select->Checked) {
		if (this->textBox_address->Text == "") { show_error("Adresse vide"); return false; }
		if (this->textBox_postalcode->Text == "") { show_error("Code postal vide"); return false; }
		if (this->comboBox_city->SelectedIndex == -1) { show_error("Ville non sélectionnée"); return false; }
		if (this->textBox_username->Text == "") { show_error("Nom d'utilisateur vide"); return false; }
		if (this->textBox_password->Text == "") { show_error("Mot de passe vide"); return false; }
		if (this->comboBox_role->SelectedIndex == -1) { show_error("Role non sélectionné"); return false; }
	}
	return true;
}

private: System::Void show_error(System::String^ text) {
	MessageBoxButtons buttons = MessageBoxButtons::OK;
	MessageBoxIcon icon = MessageBoxIcon::Error;
	MessageBox::Show(text, "Erreur", buttons, icon);
}

private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
