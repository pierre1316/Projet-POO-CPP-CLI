#pragma once
//People :
#include "CreatePeopleForm.h"
#include "ModifyPeopleForm.h"
#include "ChangePasswordForm.h"

//Catalog :
#include "CategoryForm.h"
#include "ItemForm.h"
#include "OrderForm.h"
#include "PaymentForm.h"
#include "InvoiceForm.h"

//Autres :
#include "CatalogForm.h"
#include "ConnexionForm.h"
#include "Staff.h"
#include "Stats.h"
#include "Catalog.h"



namespace ProjetPoo {

	using namespace std;
	using namespace System;
	using namespace System::IO;

	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: NS_Comp_Svc::Staff^ oStaff;
	private: NS_Comp_Svc::Stats^ oStats;
	private: NS_Comp_Svc::Catalog^ oCatalog;
	private: DataSet^ oDs;
	private: int id_staff_user;
	private: int id_role_user;
	private: System::Windows::Forms::Button^ button_people_create;

	private: System::Windows::Forms::Button^ button_catalog;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button_modify_people;
	private: System::Windows::Forms::Button^ button_change_password;
	private: System::Windows::Forms::Button^ button_manage_category;
	private: System::Windows::Forms::Button^ button_manage_item;
	private: System::Windows::Forms::Button^ button_manage_orders;
	private: System::Windows::Forms::Button^ button_manage_payment;

	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Windows::Forms::GroupBox^ groupBox_ca;
	private: System::Windows::Forms::Label^ label_ca;

	private: System::Windows::Forms::ComboBox^ comboBox_ca;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label_price_average;
	private: System::Windows::Forms::ListBox^ listBox_seuil;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label_commercial_price_total;
	private: System::Windows::Forms::ListBox^ listBox_best_items;
	private: System::Windows::Forms::ListBox^ listBox_worst_items;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox_listpeople;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label_total_customer;











	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->button_people_create = (gcnew System::Windows::Forms::Button());
			this->button_catalog = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button_modify_people = (gcnew System::Windows::Forms::Button());
			this->button_change_password = (gcnew System::Windows::Forms::Button());
			this->button_manage_category = (gcnew System::Windows::Forms::Button());
			this->button_manage_item = (gcnew System::Windows::Forms::Button());
			this->button_manage_orders = (gcnew System::Windows::Forms::Button());
			this->button_manage_payment = (gcnew System::Windows::Forms::Button());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->groupBox_ca = (gcnew System::Windows::Forms::GroupBox());
			this->label_ca = (gcnew System::Windows::Forms::Label());
			this->comboBox_ca = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label_price_average = (gcnew System::Windows::Forms::Label());
			this->listBox_seuil = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label_commercial_price_total = (gcnew System::Windows::Forms::Label());
			this->listBox_best_items = (gcnew System::Windows::Forms::ListBox());
			this->listBox_worst_items = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox_listpeople = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label_total_customer = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox_ca->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_people_create
			// 
			this->button_people_create->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button_people_create->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_people_create->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_people_create->ForeColor = System::Drawing::Color::Black;
			this->button_people_create->Location = System::Drawing::Point(722, 47);
			this->button_people_create->Margin = System::Windows::Forms::Padding(6);
			this->button_people_create->Name = L"button_people_create";
			this->button_people_create->Size = System::Drawing::Size(184, 91);
			this->button_people_create->TabIndex = 1;
			this->button_people_create->Text = L"Cr�er une Personne";
			this->button_people_create->UseVisualStyleBackColor = false;
			this->button_people_create->Click += gcnew System::EventHandler(this, &MainForm::button_people_management_Click);
			// 
			// button_catalog
			// 
			this->button_catalog->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button_catalog->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_catalog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_catalog->ForeColor = System::Drawing::Color::Black;
			this->button_catalog->Location = System::Drawing::Point(15, 221);
			this->button_catalog->Margin = System::Windows::Forms::Padding(6);
			this->button_catalog->Name = L"button_catalog";
			this->button_catalog->Size = System::Drawing::Size(184, 91);
			this->button_catalog->TabIndex = 2;
			this->button_catalog->Text = L"Historique des Factures";
			this->button_catalog->UseVisualStyleBackColor = false;
			this->button_catalog->Click += gcnew System::EventHandler(this, &MainForm::button_catalog_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label1->Location = System::Drawing::Point(188, 133);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(187, 53);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(454, 77);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(30, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(151, 139);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// button_modify_people
			// 
			this->button_modify_people->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button_modify_people->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_modify_people->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_modify_people->ForeColor = System::Drawing::Color::Black;
			this->button_modify_people->Location = System::Drawing::Point(924, 47);
			this->button_modify_people->Margin = System::Windows::Forms::Padding(6);
			this->button_modify_people->Name = L"button_modify_people";
			this->button_modify_people->Size = System::Drawing::Size(184, 91);
			this->button_modify_people->TabIndex = 11;
			this->button_modify_people->Text = L"Modifier une Personne";
			this->button_modify_people->UseVisualStyleBackColor = false;
			this->button_modify_people->Click += gcnew System::EventHandler(this, &MainForm::button_modify_people_Click);
			// 
			// button_change_password
			// 
			this->button_change_password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button_change_password->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_change_password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_change_password->ForeColor = System::Drawing::Color::Black;
			this->button_change_password->Location = System::Drawing::Point(1126, 47);
			this->button_change_password->Margin = System::Windows::Forms::Padding(6);
			this->button_change_password->Name = L"button_change_password";
			this->button_change_password->Size = System::Drawing::Size(184, 91);
			this->button_change_password->TabIndex = 12;
			this->button_change_password->Text = L"Modifier le Mot de Passe";
			this->button_change_password->UseVisualStyleBackColor = false;
			this->button_change_password->Click += gcnew System::EventHandler(this, &MainForm::button_change_password_Click);
			// 
			// button_manage_category
			// 
			this->button_manage_category->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button_manage_category->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_manage_category->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_manage_category->ForeColor = System::Drawing::Color::Black;
			this->button_manage_category->Location = System::Drawing::Point(15, 324);
			this->button_manage_category->Margin = System::Windows::Forms::Padding(6);
			this->button_manage_category->Name = L"button_manage_category";
			this->button_manage_category->Size = System::Drawing::Size(184, 91);
			this->button_manage_category->TabIndex = 13;
			this->button_manage_category->Text = L"G�rer les Cat�gories";
			this->button_manage_category->UseVisualStyleBackColor = false;
			this->button_manage_category->Click += gcnew System::EventHandler(this, &MainForm::button_manage_category_Click);
			// 
			// button_manage_item
			// 
			this->button_manage_item->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button_manage_item->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_manage_item->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_manage_item->ForeColor = System::Drawing::Color::Black;
			this->button_manage_item->Location = System::Drawing::Point(15, 427);
			this->button_manage_item->Margin = System::Windows::Forms::Padding(6);
			this->button_manage_item->Name = L"button_manage_item";
			this->button_manage_item->Size = System::Drawing::Size(184, 91);
			this->button_manage_item->TabIndex = 14;
			this->button_manage_item->Text = L"G�rer les Articles";
			this->button_manage_item->UseVisualStyleBackColor = false;
			this->button_manage_item->Click += gcnew System::EventHandler(this, &MainForm::button_manage_item_Click);
			// 
			// button_manage_orders
			// 
			this->button_manage_orders->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button_manage_orders->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_manage_orders->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_manage_orders->ForeColor = System::Drawing::Color::Black;
			this->button_manage_orders->Location = System::Drawing::Point(15, 530);
			this->button_manage_orders->Margin = System::Windows::Forms::Padding(6);
			this->button_manage_orders->Name = L"button_manage_orders";
			this->button_manage_orders->Size = System::Drawing::Size(184, 91);
			this->button_manage_orders->TabIndex = 15;
			this->button_manage_orders->Text = L"G�rer les Commandes";
			this->button_manage_orders->UseVisualStyleBackColor = false;
			this->button_manage_orders->Click += gcnew System::EventHandler(this, &MainForm::button_manage_orders_Click);
			// 
			// button_manage_payment
			// 
			this->button_manage_payment->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->button_manage_payment->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_manage_payment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->button_manage_payment->ForeColor = System::Drawing::Color::Black;
			this->button_manage_payment->Location = System::Drawing::Point(15, 633);
			this->button_manage_payment->Margin = System::Windows::Forms::Padding(6);
			this->button_manage_payment->Name = L"button_manage_payment";
			this->button_manage_payment->Size = System::Drawing::Size(184, 91);
			this->button_manage_payment->TabIndex = 16;
			this->button_manage_payment->Text = L"G�rer les Moyens de Paiement";
			this->button_manage_payment->UseVisualStyleBackColor = false;
			this->button_manage_payment->Click += gcnew System::EventHandler(this, &MainForm::button_manage_payment_Click);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// groupBox_ca
			// 
			this->groupBox_ca->Controls->Add(this->label_ca);
			this->groupBox_ca->Controls->Add(this->comboBox_ca);
			this->groupBox_ca->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox_ca->ForeColor = System::Drawing::Color::SandyBrown;
			this->groupBox_ca->Location = System::Drawing::Point(268, 221);
			this->groupBox_ca->Name = L"groupBox_ca";
			this->groupBox_ca->Size = System::Drawing::Size(454, 64);
			this->groupBox_ca->TabIndex = 17;
			this->groupBox_ca->TabStop = false;
			this->groupBox_ca->Text = L"Chiffre d\'affaire :";
			// 
			// label_ca
			// 
			this->label_ca->AutoSize = true;
			this->label_ca->Location = System::Drawing::Point(233, 28);
			this->label_ca->Name = L"label_ca";
			this->label_ca->Size = System::Drawing::Size(0, 20);
			this->label_ca->TabIndex = 1;
			// 
			// comboBox_ca
			// 
			this->comboBox_ca->FormattingEnabled = true;
			this->comboBox_ca->Location = System::Drawing::Point(15, 25);
			this->comboBox_ca->Name = L"comboBox_ca";
			this->comboBox_ca->Size = System::Drawing::Size(212, 28);
			this->comboBox_ca->TabIndex = 0;
			this->comboBox_ca->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox_ca_SelectedIndexChanged);
			this->comboBox_ca->Click += gcnew System::EventHandler(this, &MainForm::comboBox1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label_price_average);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::Color::SandyBrown;
			this->groupBox1->Location = System::Drawing::Point(268, 324);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(454, 69);
			this->groupBox1->TabIndex = 18;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Prix du Panier Moyen";
			// 
			// label_price_average
			// 
			this->label_price_average->AutoSize = true;
			this->label_price_average->BackColor = System::Drawing::Color::Transparent;
			this->label_price_average->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_price_average->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label_price_average->Location = System::Drawing::Point(9, 25);
			this->label_price_average->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_price_average->Name = L"label_price_average";
			this->label_price_average->Size = System::Drawing::Size(277, 31);
			this->label_price_average->TabIndex = 19;
			this->label_price_average->Text = L"label_price_average";
			// 
			// listBox_seuil
			// 
			this->listBox_seuil->FormattingEnabled = true;
			this->listBox_seuil->ItemHeight = 20;
			this->listBox_seuil->Location = System::Drawing::Point(745, 380);
			this->listBox_seuil->Name = L"listBox_seuil";
			this->listBox_seuil->Size = System::Drawing::Size(346, 344);
			this->listBox_seuil->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label2->Location = System::Drawing::Point(741, 324);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(278, 40);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Articles en dessous \r\ndu seuil de r�approvisionnement :";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label_commercial_price_total);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::SandyBrown;
			this->groupBox2->Location = System::Drawing::Point(268, 427);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(454, 69);
			this->groupBox2->TabIndex = 20;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Valeur commerciale du Stock";
			// 
			// label_commercial_price_total
			// 
			this->label_commercial_price_total->AutoSize = true;
			this->label_commercial_price_total->BackColor = System::Drawing::Color::Transparent;
			this->label_commercial_price_total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_commercial_price_total->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label_commercial_price_total->Location = System::Drawing::Point(9, 25);
			this->label_commercial_price_total->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_commercial_price_total->Name = L"label_commercial_price_total";
			this->label_commercial_price_total->Size = System::Drawing::Size(393, 31);
			this->label_commercial_price_total->TabIndex = 19;
			this->label_commercial_price_total->Text = L"label_commercial_price_total";
			// 
			// listBox_best_items
			// 
			this->listBox_best_items->FormattingEnabled = true;
			this->listBox_best_items->ItemHeight = 20;
			this->listBox_best_items->Location = System::Drawing::Point(268, 543);
			this->listBox_best_items->Name = L"listBox_best_items";
			this->listBox_best_items->Size = System::Drawing::Size(216, 184);
			this->listBox_best_items->TabIndex = 21;
			// 
			// listBox_worst_items
			// 
			this->listBox_worst_items->FormattingEnabled = true;
			this->listBox_worst_items->ItemHeight = 20;
			this->listBox_worst_items->Location = System::Drawing::Point(505, 540);
			this->listBox_worst_items->Name = L"listBox_worst_items";
			this->listBox_worst_items->Size = System::Drawing::Size(217, 184);
			this->listBox_worst_items->TabIndex = 22;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label3->Location = System::Drawing::Point(264, 510);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(230, 20);
			this->label3->TabIndex = 23;
			this->label3->Text = L"10 articles les plus vendus :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label4->Location = System::Drawing::Point(494, 510);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(244, 20);
			this->label4->TabIndex = 24;
			this->label4->Text = L"10 articles les moins vendus :";
			// 
			// comboBox_listpeople
			// 
			this->comboBox_listpeople->FormattingEnabled = true;
			this->comboBox_listpeople->Location = System::Drawing::Point(17, 25);
			this->comboBox_listpeople->Name = L"comboBox_listpeople";
			this->comboBox_listpeople->Size = System::Drawing::Size(329, 28);
			this->comboBox_listpeople->TabIndex = 25;
			this->comboBox_listpeople->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboBox_listpeople_SelectedIndexChanged);
			this->comboBox_listpeople->Click += gcnew System::EventHandler(this, &MainForm::comboBox_listpeople_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label_total_customer);
			this->groupBox3->Controls->Add(this->comboBox_listpeople);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->ForeColor = System::Drawing::Color::SandyBrown;
			this->groupBox3->Location = System::Drawing::Point(745, 221);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(565, 64);
			this->groupBox3->TabIndex = 26;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Montant total des achats pour le client :";
			// 
			// label_total_customer
			// 
			this->label_total_customer->AutoSize = true;
			this->label_total_customer->BackColor = System::Drawing::Color::Transparent;
			this->label_total_customer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_total_customer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->label_total_customer->Location = System::Drawing::Point(362, 22);
			this->label_total_customer->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_total_customer->Name = L"label_total_customer";
			this->label_total_customer->Size = System::Drawing::Size(0, 31);
			this->label_total_customer->TabIndex = 20;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1344, 756);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listBox_worst_items);
			this->Controls->Add(this->listBox_best_items);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox_seuil);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox_ca);
			this->Controls->Add(this->button_manage_payment);
			this->Controls->Add(this->button_manage_orders);
			this->Controls->Add(this->button_manage_item);
			this->Controls->Add(this->button_manage_category);
			this->Controls->Add(this->button_change_password);
			this->Controls->Add(this->button_modify_people);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_catalog);
			this->Controls->Add(this->button_people_create);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RADTEK Corp.";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox_ca->ResumeLayout(false);
			this->groupBox_ca->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oStats = gcnew NS_Comp_Svc::Stats();
		this->oStaff = gcnew NS_Comp_Svc::Staff();
		this->oCatalog = gcnew NS_Comp_Svc::Catalog();
		ConnexionForm^ connForm = gcnew ConnexionForm();
		connForm->ShowDialog();
		if (!(connForm->DialogResult == System::Windows::Forms::DialogResult::OK)) {
			this->Close();
		}
		this->id_staff_user = connForm->get_id_staff();
		this->oDs = this->oStaff->selectAllStaff("staff");
		for (int i = 0; i < this->oDs->Tables["staff"]->Rows->Count; i++) {
			if (Convert::ToInt32(this->oDs->Tables["staff"]->Rows[i]->ItemArray[0]) == this->id_staff_user) {
				this->label1->Text = (
					" Bienvenue " +
					this->oDs->Tables["staff"]->Rows[i]->ItemArray[2]->ToString()
					);
			}
		}
		this->id_role_user = this->oStaff->getRole(this->id_staff_user);
		label_price_average_load();
		listbox_seuil_load();
		label_commercial_price_total_load();
		listboxes_items_load();
	}
private: System::Void button_people_management_Click(System::Object^ sender, System::EventArgs^ e) {
	CreatePeopleForm crepeopleform(this->id_role_user);
	this->Hide();
	crepeopleform.ShowDialog();
	this->Show();
}
private: System::Void button_modify_people_Click(System::Object^ sender, System::EventArgs^ e) {
	ModifyPeopleForm modpeopleform(this->id_role_user);
	this->Hide();
	modpeopleform.ShowDialog();
	this->Show();
}
private: System::Void button_change_password_Click(System::Object^ sender, System::EventArgs^ e) {
	ChangePasswordForm changepeopleform(this->id_staff_user);
	changepeopleform.ShowDialog();
}

private: System::Void button_catalog_Click(System::Object^ sender, System::EventArgs^ e) {
	InvoiceForm invoiceform;
	this->Hide();
	invoiceform.ShowDialog();
	this->Show();
}

private: System::Void button_manage_category_Click(System::Object^ sender, System::EventArgs^ e) {
	CategoryForm categoryform;
	categoryform.ShowDialog();
}
private: System::Void button_manage_item_Click(System::Object^ sender, System::EventArgs^ e) {
	ItemForm itemform;
	this->Hide();
	itemform.ShowDialog();
	this->Show();
}
private: System::Void button_manage_orders_Click(System::Object^ sender, System::EventArgs^ e) {
	OrderForm orderform;
	this->Hide();
	orderform.ShowDialog();
	this->Show();
}
private: System::Void button_manage_payment_Click(System::Object^ sender, System::EventArgs^ e) {
	PaymentForm paymentform;
	paymentform.ShowDialog();
}	

//
// Stat CA mois;
//

private: System::Void comboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oDs = this->oStats->caDate("month");
	this->comboBox_ca->Items->Clear();
	for (int i = 0; i < this->oDs->Tables["month"]->Rows->Count; i++) {
		this->comboBox_ca->Items->Add(
			getMonthName(Convert::ToInt32(this->oDs->Tables["month"]->Rows[i]->ItemArray[0])) + " " +
			this->oDs->Tables["month"]->Rows[i]->ItemArray[1]->ToString()
		);
	}
}

private: System::String^ getMonthName(int monthNumber) {
	switch (monthNumber) {
	case 1 :
		return "Janvier";
		break;
	case 2 :
		return "F�vrier";
		break;
	case 3 :
		return "Mars";
		break;
	case 4 :
		return "Avril";
		break;
	case 5 :
		return "Mai";
		break;
	case 6 :
		return "Juin";
		break;
	case 7 :
		return "Juillet";
		break;
	case 8 :
		return "Ao�t";
		break;
	case 9 :
		return "Septembre";
		break;
	case 10 :
		return "Octobre";
		break;
	case 11 :
		return "Novembre";
		break;
	case 12 :
		return "D�cembre";
		break;
	}
}
private: System::Void comboBox_ca_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	this->label_ca->Text = this->oDs->Tables["month"]->Rows[comboBox_ca->SelectedIndex]->ItemArray[2]->ToString() + " �";
}

private: System::Void label_price_average_load(System::Void) {
	this->label_price_average->Text = Convert::ToString(this->oStats->price_average()) + " �";
}

private: System::Void listbox_seuil_load(System::Void) {
	this->oDs = this->oStats->items_out_of_stock("seuil");
	this->listBox_seuil->Items->Clear();
	for (int i = 0; i < this->oDs->Tables["seuil"]->Rows->Count; i++) {
		this->listBox_seuil->Items->Add(
			this->oDs->Tables["seuil"]->Rows[i]->ItemArray[2]->ToString() + "x " +
			this->oDs->Tables["seuil"]->Rows[i]->ItemArray[0]->ToString() + " " +
			this->oDs->Tables["seuil"]->Rows[i]->ItemArray[1]->ToString()

		);
	}
}

private: System::Void label_commercial_price_total_load(System::Void) {
	this->label_commercial_price_total->Text = Convert::ToString(this->oStats->price_commercial_total()) + " �";
}

private: Void listboxes_items_load(Void) {
	this->oDs = this->oStats->tenBestSale("tenbest");
	this->listBox_best_items->Items->Clear();
	for (int i = 0; i < this->oDs->Tables["tenbest"]->Rows->Count; i++) {
		this->listBox_best_items->Items->Add(
			this->oDs->Tables["tenbest"]->Rows[i]->ItemArray[1]->ToString() + "x " +
			this->oDs->Tables["tenbest"]->Rows[i]->ItemArray[0]->ToString()
		);
	}
	this->oDs = this->oStats->tenWorstSale("tenworst");
	this->listBox_worst_items->Items->Clear();
	for (int i = 0; i < this->oDs->Tables["tenworst"]->Rows->Count; i++) {
		this->listBox_worst_items->Items->Add(
			this->oDs->Tables["tenworst"]->Rows[i]->ItemArray[1]->ToString() + "x " +
			this->oDs->Tables["tenworst"]->Rows[i]->ItemArray[0]->ToString()
		);
	}
}

private: System::Void comboBox_listpeople_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oDs = this->oStats->selectInvoiceNames("names");
	this->comboBox_listpeople->Items->Clear();
	for (int i = 0; i < this->oDs->Tables["names"]->Rows->Count; i++) {
		this->comboBox_listpeople->Items->Add(this->oDs->Tables["names"]->Rows[i]->ItemArray[0]->ToString());
	}
}
private: System::Void comboBox_listpeople_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->oDs->Tables["names"]->Rows[this->comboBox_listpeople->SelectedIndex]->ItemArray[0]->ToString();
	label1->Text = name;
	this->label_total_customer->Text = Convert::ToString(this->oStats->customerTotalPurchase(name)) + " �";
}
};
}
