#pragma once
#include "ArchivedOrdersForm.h"
#include "Catalog.h"
#include "Customer.h"
#include "Address.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de OrderForm
	/// </summary>
	public ref class OrderForm : public System::Windows::Forms::Form
	{
	public:
		OrderForm(void)
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
		~OrderForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox_orders;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton_order_create;
	private: System::Windows::Forms::RadioButton^ radioButton_update_order;

// Composants ajoutés :
	// Objets : 
	private: NS_Comp_Svc::Catalog^ oCatalog;
	private: NS_Comp_Svc::Customer^ oCustomer;
	private: NS_Comp_Svc::Address^ oAddress;

	// Catalog :
		//Category :
	private: int id_category = -1;
	private: Decimal tva;

		//Items :
	private: int id_item = -1;
	private: String^ item_name;
	private: Decimal price_ht;
	private: String^ minimum_quantity;
	private: Decimal price_over_level;
	private: int level;

		//Colors :
	private: String^ color_name;
	private: Decimal price_multiplier;
	private: int quantity_in_stock;

		//Order :
	private: String^ delivery_date;
	private: String^ issue_date;
	private: String^ payment_date;
	private: String^ reference_order;
	private: int id_payment_method;
	private: String^ new_reference_order;
	
		// Autres :
	private: DataTable^ currentTable;
	private: Decimal price_ttc;
	private: Decimal price_over_level_ttc;
	private: Data::DataSet^ oDs;
	private: Data::DataSet^ Items;
	//

	// Customer :
	private: int id_customer;
	private: String^ last_name;
	private: String^ first_name;

	// Address :
	private: int id_bill;
	private: int id_deli;
	private: String^ city;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox_items;
	private: System::Windows::Forms::ComboBox^ comboBox_category;
	private: System::Windows::Forms::ListBox^ listBox_color;
	private: System::Windows::Forms::ListBox^ listBox_currents;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_minimum_quantity;
	private: System::Windows::Forms::TextBox^ textBox_price_ttc;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_price_over_level_ttc;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button_add;
	private: System::Windows::Forms::Button^ button_delete;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown_quantity;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox_quantity_in_stock;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button_order_delete;



	private: System::Windows::Forms::Button^ button_current_clear;


	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox_customer;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ comboBox_deli;
	private: System::Windows::Forms::ComboBox^ comboBox_bill;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_deli;

	private: System::Windows::Forms::CheckBox^ checkBox_payment;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker_payment;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ comboBox_payment_method;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox_order_reference;
	private: System::Windows::Forms::TextBox^ textBox_price_total_ht;
	private: System::Windows::Forms::TextBox^ textBox_price_total_ttc;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button_order_enter;
private: System::Windows::Forms::Button^ button_archive_order;

	private: System::Windows::Forms::Button^ button_generate_reference;
private: System::Windows::Forms::Button^ button_archived_orders;




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
			this->listBox_orders = (gcnew System::Windows::Forms::ListBox());
			this->radioButton_order_create = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_update_order = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->listBox_items = (gcnew System::Windows::Forms::ListBox());
			this->comboBox_category = (gcnew System::Windows::Forms::ComboBox());
			this->listBox_color = (gcnew System::Windows::Forms::ListBox());
			this->listBox_currents = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_minimum_quantity = (gcnew System::Windows::Forms::TextBox());
			this->textBox_price_ttc = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_price_over_level_ttc = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown_quantity = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_quantity_in_stock = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button_order_delete = (gcnew System::Windows::Forms::Button());
			this->button_current_clear = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->comboBox_customer = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox_deli = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox_bill = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker_deli = (gcnew System::Windows::Forms::DateTimePicker());
			this->checkBox_payment = (gcnew System::Windows::Forms::CheckBox());
			this->dateTimePicker_payment = (gcnew System::Windows::Forms::DateTimePicker());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->comboBox_payment_method = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox_order_reference = (gcnew System::Windows::Forms::TextBox());
			this->textBox_price_total_ht = (gcnew System::Windows::Forms::TextBox());
			this->textBox_price_total_ttc = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button_order_enter = (gcnew System::Windows::Forms::Button());
			this->button_archive_order = (gcnew System::Windows::Forms::Button());
			this->button_generate_reference = (gcnew System::Windows::Forms::Button());
			this->button_archived_orders = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_quantity))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox_orders
			// 
			this->listBox_orders->Enabled = false;
			this->listBox_orders->FormattingEnabled = true;
			this->listBox_orders->Location = System::Drawing::Point(9, 53);
			this->listBox_orders->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listBox_orders->Name = L"listBox_orders";
			this->listBox_orders->Size = System::Drawing::Size(169, 199);
			this->listBox_orders->TabIndex = 4;
			this->listBox_orders->SelectedIndexChanged += gcnew System::EventHandler(this, &OrderForm::listBox_orders_SelectedIndexChanged);
			// 
			// radioButton_order_create
			// 
			this->radioButton_order_create->AutoSize = true;
			this->radioButton_order_create->Checked = true;
			this->radioButton_order_create->Location = System::Drawing::Point(23, 32);
			this->radioButton_order_create->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton_order_create->Name = L"radioButton_order_create";
			this->radioButton_order_create->Size = System::Drawing::Size(50, 17);
			this->radioButton_order_create->TabIndex = 1;
			this->radioButton_order_create->TabStop = true;
			this->radioButton_order_create->Text = L"Créer";
			this->radioButton_order_create->UseVisualStyleBackColor = true;
			this->radioButton_order_create->CheckedChanged += gcnew System::EventHandler(this, &OrderForm::radioButton_order_create_CheckedChanged);
			// 
			// radioButton_update_order
			// 
			this->radioButton_update_order->AutoSize = true;
			this->radioButton_update_order->Location = System::Drawing::Point(91, 32);
			this->radioButton_update_order->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton_update_order->Name = L"radioButton_update_order";
			this->radioButton_update_order->Size = System::Drawing::Size(62, 17);
			this->radioButton_update_order->TabIndex = 2;
			this->radioButton_update_order->Text = L"Modifier";
			this->radioButton_update_order->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gérer les commandes :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(183, 12);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ajouter des articles :";
			// 
			// listBox_items
			// 
			this->listBox_items->FormattingEnabled = true;
			this->listBox_items->Location = System::Drawing::Point(182, 53);
			this->listBox_items->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listBox_items->Name = L"listBox_items";
			this->listBox_items->Size = System::Drawing::Size(169, 199);
			this->listBox_items->TabIndex = 6;
			this->listBox_items->SelectedIndexChanged += gcnew System::EventHandler(this, &OrderForm::listBox_items_SelectedIndexChanged);
			// 
			// comboBox_category
			// 
			this->comboBox_category->FormattingEnabled = true;
			this->comboBox_category->Location = System::Drawing::Point(182, 28);
			this->comboBox_category->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox_category->Name = L"comboBox_category";
			this->comboBox_category->Size = System::Drawing::Size(169, 21);
			this->comboBox_category->TabIndex = 3;
			this->comboBox_category->Text = L"Choisir une catégorie";
			this->comboBox_category->SelectedIndexChanged += gcnew System::EventHandler(this, &OrderForm::comboBox_category_SelectedIndexChanged);
			this->comboBox_category->Click += gcnew System::EventHandler(this, &OrderForm::comboBox_category_Click);
			// 
			// listBox_color
			// 
			this->listBox_color->FormattingEnabled = true;
			this->listBox_color->Location = System::Drawing::Point(354, 53);
			this->listBox_color->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listBox_color->Name = L"listBox_color";
			this->listBox_color->Size = System::Drawing::Size(124, 251);
			this->listBox_color->TabIndex = 8;
			this->listBox_color->SelectedIndexChanged += gcnew System::EventHandler(this, &OrderForm::listBox_color_SelectedIndexChanged);
			// 
			// listBox_currents
			// 
			this->listBox_currents->FormattingEnabled = true;
			this->listBox_currents->Location = System::Drawing::Point(663, 53);
			this->listBox_currents->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listBox_currents->Name = L"listBox_currents";
			this->listBox_currents->Size = System::Drawing::Size(164, 251);
			this->listBox_currents->TabIndex = 22;
			this->listBox_currents->SelectedIndexChanged += gcnew System::EventHandler(this, &OrderForm::listBox_currents_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(486, 67);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Quantité Minimum :";
			// 
			// textBox_minimum_quantity
			// 
			this->textBox_minimum_quantity->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_minimum_quantity->Location = System::Drawing::Point(584, 64);
			this->textBox_minimum_quantity->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_minimum_quantity->Name = L"textBox_minimum_quantity";
			this->textBox_minimum_quantity->ReadOnly = true;
			this->textBox_minimum_quantity->Size = System::Drawing::Size(64, 20);
			this->textBox_minimum_quantity->TabIndex = 15;
			// 
			// textBox_price_ttc
			// 
			this->textBox_price_ttc->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_price_ttc->Location = System::Drawing::Point(584, 87);
			this->textBox_price_ttc->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_price_ttc->Name = L"textBox_price_ttc";
			this->textBox_price_ttc->ReadOnly = true;
			this->textBox_price_ttc->Size = System::Drawing::Size(41, 20);
			this->textBox_price_ttc->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(488, 89);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Prix de Base TTC :";
			// 
			// textBox_price_over_level_ttc
			// 
			this->textBox_price_over_level_ttc->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_price_over_level_ttc->Location = System::Drawing::Point(584, 120);
			this->textBox_price_over_level_ttc->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_price_over_level_ttc->Name = L"textBox_price_over_level_ttc";
			this->textBox_price_over_level_ttc->ReadOnly = true;
			this->textBox_price_over_level_ttc->Size = System::Drawing::Size(41, 20);
			this->textBox_price_over_level_ttc->TabIndex = 17;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(488, 112);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 26);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Prix au dessus de X \r\narticles TTC :";
			// 
			// button_add
			// 
			this->button_add->Enabled = false;
			this->button_add->Location = System::Drawing::Point(514, 212);
			this->button_add->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(109, 39);
			this->button_add->TabIndex = 20;
			this->button_add->Text = L"Ajouter";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &OrderForm::button_add_Click);
			// 
			// button_delete
			// 
			this->button_delete->Enabled = false;
			this->button_delete->Location = System::Drawing::Point(514, 256);
			this->button_delete->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(109, 39);
			this->button_delete->TabIndex = 21;
			this->button_delete->Text = L"Supprimer";
			this->button_delete->UseVisualStyleBackColor = true;
			this->button_delete->Click += gcnew System::EventHandler(this, &OrderForm::button_delete_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(512, 180);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Quantité :";
			// 
			// numericUpDown_quantity
			// 
			this->numericUpDown_quantity->Cursor = System::Windows::Forms::Cursors::Default;
			this->numericUpDown_quantity->Location = System::Drawing::Point(566, 176);
			this->numericUpDown_quantity->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->numericUpDown_quantity->Name = L"numericUpDown_quantity";
			this->numericUpDown_quantity->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->numericUpDown_quantity->Size = System::Drawing::Size(58, 20);
			this->numericUpDown_quantity->TabIndex = 19;
			this->numericUpDown_quantity->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(356, 36);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Choisir une couleur :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(668, 35);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Liste actuelle :";
			// 
			// textBox_quantity_in_stock
			// 
			this->textBox_quantity_in_stock->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_quantity_in_stock->Location = System::Drawing::Point(584, 150);
			this->textBox_quantity_in_stock->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_quantity_in_stock->Name = L"textBox_quantity_in_stock";
			this->textBox_quantity_in_stock->ReadOnly = true;
			this->textBox_quantity_in_stock->Size = System::Drawing::Size(41, 20);
			this->textBox_quantity_in_stock->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(495, 152);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Quantité en stock :";
			// 
			// button_order_delete
			// 
			this->button_order_delete->Enabled = false;
			this->button_order_delete->Location = System::Drawing::Point(9, 256);
			this->button_order_delete->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_order_delete->Name = L"button_order_delete";
			this->button_order_delete->Size = System::Drawing::Size(168, 47);
			this->button_order_delete->TabIndex = 5;
			this->button_order_delete->Text = L"Annuler la commande";
			this->button_order_delete->UseVisualStyleBackColor = true;
			this->button_order_delete->Click += gcnew System::EventHandler(this, &OrderForm::button1_Click);
			// 
			// button_current_clear
			// 
			this->button_current_clear->Location = System::Drawing::Point(770, 30);
			this->button_current_clear->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_current_clear->Name = L"button_current_clear";
			this->button_current_clear->Size = System::Drawing::Size(56, 19);
			this->button_current_clear->TabIndex = 26;
			this->button_current_clear->Text = L"Clear";
			this->button_current_clear->UseVisualStyleBackColor = true;
			this->button_current_clear->Click += gcnew System::EventHandler(this, &OrderForm::button_current_clear_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(628, 89);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(13, 13);
			this->label20->TabIndex = 0;
			this->label20->Text = L"€";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(628, 123);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(13, 13);
			this->label21->TabIndex = 0;
			this->label21->Text = L"€";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(19, 339);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(87, 13);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Choisir un client :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(19, 361);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(161, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Choisir une adresse de livraison :";
			// 
			// comboBox_customer
			// 
			this->comboBox_customer->FormattingEnabled = true;
			this->comboBox_customer->Location = System::Drawing::Point(182, 336);
			this->comboBox_customer->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox_customer->Name = L"comboBox_customer";
			this->comboBox_customer->Size = System::Drawing::Size(267, 21);
			this->comboBox_customer->TabIndex = 8;
			this->comboBox_customer->Text = L"Choisir un client";
			this->comboBox_customer->SelectedIndexChanged += gcnew System::EventHandler(this, &OrderForm::comboBox_customer_SelectedIndexChanged);
			this->comboBox_customer->Click += gcnew System::EventHandler(this, &OrderForm::comboBox_customer_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(19, 383);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(173, 13);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Choisir une adresse de facturation :";
			// 
			// comboBox_deli
			// 
			this->comboBox_deli->FormattingEnabled = true;
			this->comboBox_deli->Location = System::Drawing::Point(182, 358);
			this->comboBox_deli->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox_deli->Name = L"comboBox_deli";
			this->comboBox_deli->Size = System::Drawing::Size(267, 21);
			this->comboBox_deli->TabIndex = 9;
			this->comboBox_deli->Text = L"Choisir une adresse de livraison";
			this->comboBox_deli->SelectedIndexChanged += gcnew System::EventHandler(this, &OrderForm::comboBox_deli_SelectedIndexChanged);
			this->comboBox_deli->Click += gcnew System::EventHandler(this, &OrderForm::comboBox_deli_Click);
			// 
			// comboBox_bill
			// 
			this->comboBox_bill->FormattingEnabled = true;
			this->comboBox_bill->Location = System::Drawing::Point(182, 380);
			this->comboBox_bill->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox_bill->Name = L"comboBox_bill";
			this->comboBox_bill->Size = System::Drawing::Size(267, 21);
			this->comboBox_bill->TabIndex = 10;
			this->comboBox_bill->Text = L"Choisir une adresse de facturation";
			this->comboBox_bill->SelectedIndexChanged += gcnew System::EventHandler(this, &OrderForm::comboBox_bill_SelectedIndexChanged);
			this->comboBox_bill->Click += gcnew System::EventHandler(this, &OrderForm::comboBox_bill_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(19, 405);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(128, 13);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Date de livraison prévue :";
			// 
			// dateTimePicker_deli
			// 
			this->dateTimePicker_deli->Location = System::Drawing::Point(182, 402);
			this->dateTimePicker_deli->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dateTimePicker_deli->Name = L"dateTimePicker_deli";
			this->dateTimePicker_deli->Size = System::Drawing::Size(267, 20);
			this->dateTimePicker_deli->TabIndex = 11;
			// 
			// checkBox_payment
			// 
			this->checkBox_payment->AutoSize = true;
			this->checkBox_payment->Location = System::Drawing::Point(21, 426);
			this->checkBox_payment->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox_payment->Name = L"checkBox_payment";
			this->checkBox_payment->Size = System::Drawing::Size(110, 17);
			this->checkBox_payment->TabIndex = 12;
			this->checkBox_payment->Text = L"Date de paiment :";
			this->checkBox_payment->UseVisualStyleBackColor = true;
			this->checkBox_payment->CheckedChanged += gcnew System::EventHandler(this, &OrderForm::checkBox_payment_CheckedChanged);
			// 
			// dateTimePicker_payment
			// 
			this->dateTimePicker_payment->Enabled = false;
			this->dateTimePicker_payment->Location = System::Drawing::Point(182, 426);
			this->dateTimePicker_payment->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->dateTimePicker_payment->Name = L"dateTimePicker_payment";
			this->dateTimePicker_payment->Size = System::Drawing::Size(267, 20);
			this->dateTimePicker_payment->TabIndex = 13;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(19, 449);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(100, 13);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Moyen de paiment :";
			// 
			// comboBox_payment_method
			// 
			this->comboBox_payment_method->FormattingEnabled = true;
			this->comboBox_payment_method->Location = System::Drawing::Point(182, 447);
			this->comboBox_payment_method->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->comboBox_payment_method->Name = L"comboBox_payment_method";
			this->comboBox_payment_method->Size = System::Drawing::Size(267, 21);
			this->comboBox_payment_method->TabIndex = 14;
			this->comboBox_payment_method->Text = L"Choisir un moyen de paiement";
			this->comboBox_payment_method->SelectedIndexChanged += gcnew System::EventHandler(this, &OrderForm::comboBox_payment_method_SelectedIndexChanged);
			this->comboBox_payment_method->Click += gcnew System::EventHandler(this, &OrderForm::comboBox_payment_method_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(502, 373);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(147, 13);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Référence de la commande : ";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(502, 329);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(82, 13);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Prix Hors Taxe :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(502, 351);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(144, 13);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Prix Toutes Taxe Comprises :";
			// 
			// textBox_order_reference
			// 
			this->textBox_order_reference->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_order_reference->Location = System::Drawing::Point(647, 370);
			this->textBox_order_reference->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_order_reference->Name = L"textBox_order_reference";
			this->textBox_order_reference->ReadOnly = true;
			this->textBox_order_reference->Size = System::Drawing::Size(116, 20);
			this->textBox_order_reference->TabIndex = 45;
			// 
			// textBox_price_total_ht
			// 
			this->textBox_price_total_ht->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_price_total_ht->Location = System::Drawing::Point(647, 327);
			this->textBox_price_total_ht->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_price_total_ht->Name = L"textBox_price_total_ht";
			this->textBox_price_total_ht->ReadOnly = true;
			this->textBox_price_total_ht->Size = System::Drawing::Size(80, 20);
			this->textBox_price_total_ht->TabIndex = 46;
			// 
			// textBox_price_total_ttc
			// 
			this->textBox_price_total_ttc->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_price_total_ttc->Location = System::Drawing::Point(647, 349);
			this->textBox_price_total_ttc->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox_price_total_ttc->Name = L"textBox_price_total_ttc";
			this->textBox_price_total_ttc->ReadOnly = true;
			this->textBox_price_total_ttc->Size = System::Drawing::Size(80, 20);
			this->textBox_price_total_ttc->TabIndex = 47;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(730, 329);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 0;
			this->label18->Text = L"€";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(730, 351);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(13, 13);
			this->label19->TabIndex = 0;
			this->label19->Text = L"€";
			// 
			// button_order_enter
			// 
			this->button_order_enter->Enabled = false;
			this->button_order_enter->Location = System::Drawing::Point(455, 392);
			this->button_order_enter->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_order_enter->Name = L"button_order_enter";
			this->button_order_enter->Size = System::Drawing::Size(184, 84);
			this->button_order_enter->TabIndex = 24;
			this->button_order_enter->Text = L"Enregistrer la commande";
			this->button_order_enter->UseVisualStyleBackColor = true;
			this->button_order_enter->Click += gcnew System::EventHandler(this, &OrderForm::button2_Click);
			// 
			// button_archive_order
			// 
			this->button_archive_order->Location = System::Drawing::Point(644, 392);
			this->button_archive_order->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_archive_order->Name = L"button_archive_order";
			this->button_archive_order->Size = System::Drawing::Size(184, 84);
			this->button_archive_order->TabIndex = 25;
			this->button_archive_order->Text = L"Créer une facture et \r\narchiver la commande";
			this->button_archive_order->UseVisualStyleBackColor = true;
			this->button_archive_order->Click += gcnew System::EventHandler(this, &OrderForm::button_archive_order_Click);
			// 
			// button_generate_reference
			// 
			this->button_generate_reference->Location = System::Drawing::Point(771, 370);
			this->button_generate_reference->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_generate_reference->Name = L"button_generate_reference";
			this->button_generate_reference->Size = System::Drawing::Size(56, 19);
			this->button_generate_reference->TabIndex = 23;
			this->button_generate_reference->Text = L"Générer";
			this->button_generate_reference->UseVisualStyleBackColor = true;
			this->button_generate_reference->Click += gcnew System::EventHandler(this, &OrderForm::button_generate_reference_Click);
			// 
			// button_archived_orders
			// 
			this->button_archived_orders->Location = System::Drawing::Point(182, 256);
			this->button_archived_orders->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button_archived_orders->Name = L"button_archived_orders";
			this->button_archived_orders->Size = System::Drawing::Size(168, 47);
			this->button_archived_orders->TabIndex = 7;
			this->button_archived_orders->Text = L"Afficher les commandes archivées";
			this->button_archived_orders->UseVisualStyleBackColor = true;
			this->button_archived_orders->Click += gcnew System::EventHandler(this, &OrderForm::button_archived_orders_Click);
			// 
			// OrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(834, 488);
			this->Controls->Add(this->button_archived_orders);
			this->Controls->Add(this->button_generate_reference);
			this->Controls->Add(this->button_archive_order);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->button_order_enter);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->button_current_clear);
			this->Controls->Add(this->textBox_price_total_ttc);
			this->Controls->Add(this->button_order_delete);
			this->Controls->Add(this->textBox_price_total_ht);
			this->Controls->Add(this->textBox_quantity_in_stock);
			this->Controls->Add(this->textBox_order_reference);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->numericUpDown_quantity);
			this->Controls->Add(this->comboBox_payment_method);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button_delete);
			this->Controls->Add(this->dateTimePicker_payment);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->textBox_price_over_level_ttc);
			this->Controls->Add(this->checkBox_payment);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_price_ttc);
			this->Controls->Add(this->dateTimePicker_deli);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox_minimum_quantity);
			this->Controls->Add(this->comboBox_bill);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox_deli);
			this->Controls->Add(this->listBox_currents);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->listBox_color);
			this->Controls->Add(this->comboBox_customer);
			this->Controls->Add(this->comboBox_category);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->listBox_items);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton_update_order);
			this->Controls->Add(this->radioButton_order_create);
			this->Controls->Add(this->listBox_orders);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"OrderForm";
			this->Text = L"OrderForm";
			this->Load += gcnew System::EventHandler(this, &OrderForm::OrderForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown_quantity))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void OrderForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oCatalog = gcnew NS_Comp_Svc::Catalog();
	this->oCustomer = gcnew NS_Comp_Svc::Customer();
	this->oAddress = gcnew NS_Comp_Svc::Address();
	this->currentTable = gcnew DataTable();
	this->currentTable->Clear();
	this->oDs = this->oCatalog->selectContain("contains", "test");
	this->currentTable = this->oDs->Tables["contains"]->Clone();
	reload_all_components();
}
private: System::Void reload_all_components(System::Void) {
	if (radioButton_order_create->Checked) {
		this->listBox_orders->Enabled = false;
		this->button_order_enter->Enabled = false;
		this->comboBox_customer->Enabled = true;
		this->button_generate_reference->Visible = true;
	}
	else {
		this->listBox_orders->Enabled = true;
		this->button_order_enter->Enabled = true;
		this->comboBox_customer->Enabled = false;
		this->button_generate_reference->Visible = false;
	}
	this->comboBox_category->Text = "Choisir une catégorie";
	this->currentTable->Clear();
	load_current_listbox();
	listbox_orders_load();
	items_load();
	reload_down_components();
}

private: System::Void reload_down_components(System::Void) {
	this->comboBox_customer->Text = "Choisir un client";
	this->comboBox_deli->Text = "Choisir une adresse de livraison";
	this->comboBox_bill->Text = "Choisir une adresse de facturation";
	this->dateTimePicker_deli->ResetText();
	this->checkBox_payment->Checked = false;
	this->dateTimePicker_payment->ResetText();
	this->comboBox_payment_method->Text = "Choisir un moyen de paiment";
	this->textBox_price_total_ht->Text = "";
	this->textBox_price_total_ttc->Text = "";
	this->textBox_order_reference->Text = "";
}

private: System::Void radioButton_order_create_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	reload_all_components();
}

//
// Gestion de la liste des commandes :
//
private: System::Void listbox_orders_load(System::Void) {
	this->oDs = this->oCatalog->selectOrderNonArchived("orders");
	this->listBox_orders->Items->Clear();
	for (int i = 0; i < this->oDs->Tables["orders"]->Rows->Count; i++) {
		this->listBox_orders->Items->Add(
			this->oDs->Tables["orders"]->Rows[i]->ItemArray[0]->ToString()
		);
	}
}
private: System::Void listBox_orders_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	items_load();
	int index = listBox_orders->SelectedIndex;
	if (index == -1) {
		return;
	}
	this->button_order_delete->Enabled = true;
	this->oDs = this->oCatalog->selectOrderNonArchived("orders");
	this->reference_order = this->oDs->Tables["orders"]->Rows[index]->ItemArray[0]->ToString();
	this->textBox_order_reference->Text = this->reference_order;
	this->dateTimePicker_deli->Value = Convert::ToDateTime(this->oDs->Tables["orders"]->Rows[index]->ItemArray[1]);
	
	if (this->oDs->Tables["orders"]->Rows[index]->ItemArray[3]->ToString() != "") {
		this->checkBox_payment->Checked = true;
		this->dateTimePicker_payment->Value = Convert::ToDateTime(this->oDs->Tables["orders"]->Rows[index]->ItemArray[3]);
	}
	else {
		this->checkBox_payment->Checked = false;
		this->dateTimePicker_payment->ResetText();
	}
	this->id_payment_method = Convert::ToInt32(this->oDs->Tables["orders"]->Rows[index]->ItemArray[4]);
	this->id_customer = Convert::ToInt32(this->oDs->Tables["orders"]->Rows[index]->ItemArray[5]);
	this->id_bill = Convert::ToInt32(this->oDs->Tables["orders"]->Rows[index]->ItemArray[6]);
	this->id_deli = Convert::ToInt32(this->oDs->Tables["orders"]->Rows[index]->ItemArray[7]);
	this->oDs = this->oCustomer->selectAllCustomer("customers");
	for (int i = 0; i < this->oDs->Tables["customers"]->Rows->Count; i++) {
		if (Convert::ToInt32(this->oDs->Tables["customers"]->Rows[i]->ItemArray[0]) == this->id_customer) {
			this->comboBox_customer->Text = 
				this->oDs->Tables["customers"]->Rows[i]->ItemArray[1]->ToString() + " " +
				this->oDs->Tables["customers"]->Rows[i]->ItemArray[2]->ToString();
		}
	}
	this->oDs = this->oAddress->selectAddressDelivery("deli", this->id_customer);
	for (int i = 0; i < this->oDs->Tables["deli"]->Rows->Count; i++) {
		if (Convert::ToInt32(this->oDs->Tables["deli"]->Rows[i]->ItemArray[0]) == this->id_deli) {
			this->comboBox_deli->Text =
				this->oDs->Tables["deli"]->Rows[i]->ItemArray[3]->ToString() + " " +
				this->oDs->Tables["deli"]->Rows[i]->ItemArray[4]->ToString() + " " +
				this->oDs->Tables["deli"]->Rows[i]->ItemArray[5]->ToString();
		}
	}
	this->oDs = this->oAddress->selectAddressBilling("bill", this->id_customer);
	for (int i = 0; i < this->oDs->Tables["bill"]->Rows->Count; i++) {
		if (Convert::ToInt32(this->oDs->Tables["bill"]->Rows[i]->ItemArray[0]) == this->id_bill) {
			this->comboBox_bill->Text =
				this->oDs->Tables["bill"]->Rows[i]->ItemArray[3]->ToString() + " " +
				this->oDs->Tables["bill"]->Rows[i]->ItemArray[4]->ToString() + " " +
				this->oDs->Tables["bill"]->Rows[i]->ItemArray[5]->ToString();
		}
	}
	this->oDs = this->oCatalog->selectPaymentMethod("methods");
	for (int i = 0; i < this->oDs->Tables["methods"]->Rows->Count; i++) {
		if (Convert::ToInt32(this->oDs->Tables["methods"]->Rows[i]->ItemArray[0]) == this->id_payment_method) {
			this->comboBox_payment_method->Text =
				this->oDs->Tables["methods"]->Rows[i]->ItemArray[1]->ToString();
		}
	}
	this->currentTable->Clear();
	this->oDs = this->oCatalog->selectContain("contains", this->reference_order);
	this->currentTable = this->oDs->Tables["contains"]->Copy();
	load_current_listbox();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oCatalog->deleteOrder(this->reference_order);
	listbox_orders_load();
}

private: System::Void button_archived_orders_Click(System::Object^ sender, System::EventArgs^ e) {
	ArchivedOrdersForm form;
	form.ShowDialog();
	//afficher les commandes archivées
}

//
// Gestion des catégories :
//
private: System::Void comboBox_category_Click(System::Object^ sender, System::EventArgs^ e) {
	category_load();
}
private: System::Void category_load(System::Void) {
	this->comboBox_category->Items->Clear();
	this->oDs = this->oCatalog->selectCategory("categories");
	for (int i = 0; i < this->oDs->Tables["categories"]->Rows->Count; i++) {
		this->comboBox_category->Items->Add(
			this->oDs->Tables["categories"]->Rows[i]->ItemArray[1]->ToString()
		);
	}
}
private: System::Void comboBox_category_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox_category->SelectedIndex == -1) {
		return;
	}
	this->id_category = Convert::ToInt32(this->oDs->Tables["categories"]->Rows[this->comboBox_category->SelectedIndex]->ItemArray[0]);
	this->tva = Convert::ToDecimal(this->oDs->Tables["categories"]->Rows[this->comboBox_category->SelectedIndex]->ItemArray[2]);
	items_load();
	
}

//
// Gestion des articles :
//
private: System::Void items_load(System::Void) {
	this->listBox_items->Items->Clear();
	this->listBox_color->Items->Clear();
	this->oDs = this->oCatalog->selectItemsCategory("items", this->id_category);
	for (int i = 0; i < this->oDs->Tables["items"]->Rows->Count; i++) {
		this->listBox_items->Items->Add(
			this->oDs->Tables["items"]->Rows[i]->ItemArray[1]->ToString()
		);
	}
}
private: System::Void listBox_items_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->listBox_items->SelectedIndex == -1) {
		return;
	}
	this->oDs = this->oCatalog->selectItemsCategory("items", this->id_category);
	this->id_item = Convert::ToInt32(this->oDs->Tables["items"]->Rows[this->listBox_items->SelectedIndex]->ItemArray[0]);
	this->item_name = Convert::ToString(this->oDs->Tables["items"]->Rows[this->listBox_items->SelectedIndex]->ItemArray[1]);
	this->minimum_quantity = Convert::ToString(this->oDs->Tables["items"]->Rows[this->listBox_items->SelectedIndex]->ItemArray[4]);
	this->price_ht = Convert::ToDecimal(this->oDs->Tables["items"]->Rows[this->listBox_items->SelectedIndex]->ItemArray[2]);
	this->price_over_level = Convert::ToDecimal(this->oDs->Tables["items"]->Rows[this->listBox_items->SelectedIndex]->ItemArray[5]);
	this->level = Convert::ToInt32(this->oDs->Tables["items"]->Rows[this->listBox_items->SelectedIndex]->ItemArray[6]);
	colors_load();
}

//
// Gestion des couleurs :
//
private: System::Void colors_load(System::Void) {
	this->listBox_color->Items->Clear();
	this->oDs = this->oCatalog->selectColors("colors", this->id_item);
	for (int i = 0; i < this->oDs->Tables["colors"]->Rows->Count; i++) {
		this->listBox_color->Items->Add(
			this->oDs->Tables["colors"]->Rows[i]->ItemArray[1]->ToString()
		);
	}
}
private: System::Void listBox_color_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->listBox_color->SelectedIndex == -1) {
		return;
	}
	this->oDs = this->oCatalog->selectColors("colors", this->id_item);
	this->color_name = this->oDs->Tables["colors"]->Rows[this->listBox_color->SelectedIndex]->ItemArray[1]->ToString();
	this->button_add->Enabled = true;
	load_price_textboxes();
}

//
// Gestion des textboxes :
//
private: System::Void load_price_textboxes(System::Void) {
	this->price_multiplier = Convert::ToDecimal(this->oDs->Tables["colors"]->Rows[this->listBox_color->SelectedIndex]->ItemArray[2]);
	this->quantity_in_stock = Convert::ToInt32(this->oDs->Tables["colors"]->Rows[this->listBox_color->SelectedIndex]->ItemArray[3]);
	this->textBox_minimum_quantity->Text = this->minimum_quantity;
	this->price_ttc = Decimal::Add(this->price_ht, this->price_ht * (this->tva / 100)) * this->price_multiplier;
	this->price_over_level_ttc = Decimal::Add(this->price_over_level, this->price_ht * (this->tva / 100)) * this->price_multiplier;
	this->textBox_price_ttc->Text = Convert::ToString(price_ttc);
	this->textBox_price_over_level_ttc->Text = Convert::ToString(price_over_level_ttc);
	this->label5->Text = L"Prix au dessus de " + this->level + "\r\narticles TTC : ";
	this->textBox_quantity_in_stock->Text = Convert::ToString(quantity_in_stock);
	this->numericUpDown_quantity->Value = 1;
}

//
// Gestion du current :
//
private: System::Void load_current_table(System::Void) {
	this->currentTable->Reset();
	this->currentTable->TableName = "contains";
	this->currentTable->Columns->Add("id_item");
	this->currentTable->Columns["id_item"]->DataType = Type::GetType("System.Int32");
	this->currentTable->Columns->Add("name");
	this->currentTable->Columns["name"]->DataType = Type::GetType("System.String");
	this->currentTable->Columns->Add("color_name");
	this->currentTable->Columns["color_name"]->DataType = Type::GetType("System.String");
	this->currentTable->Columns->Add("quantity");
	this->currentTable->Columns["quantity"]->DataType = Type::GetType("System.Int32");
	
	
}
private: System::Void load_current_listbox(System::Void) {
	this->listBox_currents->Items->Clear();
	for (int i = 0; i < this->currentTable->Rows->Count; i++) {
		this->listBox_currents->Items->Add(
			this->currentTable->Rows[i]->ItemArray[3]->ToString() + "x " +
			this->currentTable->Rows[i]->ItemArray[1]->ToString() + " " +
			this->currentTable->Rows[i]->ItemArray[2]->ToString()
		);
	}
	load_prices();
}
private: System::Void load_prices(System::Void) {
	Decimal total_ht = 0;
	Decimal total_ttc = 0;
	if (this->currentTable->Rows->Count == 0) {
		return;
	}
	for (int i = 0; i < this->currentTable->Rows->Count; i++) {
		if (Convert::ToInt32(this->currentTable->Rows[i]->ItemArray[3]) < Convert::ToInt32(this->currentTable->Rows[i]->ItemArray[5])) {
			total_ht = Decimal::Add(total_ht, 
				(Convert::ToDecimal(this->currentTable->Rows[i]->ItemArray[4]) * Convert::ToDecimal(this->currentTable->Rows[i]->ItemArray[7])) * Convert::ToInt32(this->currentTable->Rows[i]->ItemArray[3])
			);
			total_ttc = Decimal::Add(total_ttc,
				(Decimal::Add(Convert::ToDecimal(this->currentTable->Rows[i]->ItemArray[4]), Convert::ToDecimal(this->currentTable->Rows[i]->ItemArray[4])* (Convert::ToDecimal(this->currentTable->Rows[i]->ItemArray[9]) / 100)) * Convert::ToDecimal(this->currentTable->Rows[i]->ItemArray[7])) * Convert::ToInt32(this->currentTable->Rows[i]->ItemArray[3])
			);
		}
		else {
			total_ht = Decimal::Add(total_ht, 
				(Convert::ToDecimal(this->currentTable->Rows[i]->ItemArray[6]) * Convert::ToDecimal(this->currentTable->Rows[i]->ItemArray[7])) * Convert::ToInt32(this->currentTable->Rows[i]->ItemArray[3])
			);
			total_ttc = Decimal::Add(total_ttc,
				(Decimal::Add(Convert::ToDecimal(this->currentTable->Rows[i]->ItemArray[6]), Convert::ToDecimal(this->currentTable->Rows[i]->ItemArray[4]) * (Convert::ToDecimal(this->currentTable->Rows[i]->ItemArray[9]) / 100)) * Convert::ToDecimal(this->currentTable->Rows[i]->ItemArray[7])) * Convert::ToInt32(this->currentTable->Rows[i]->ItemArray[3])
			);
		}
		//total_ttc = total_ttc + Decimal::Add(price_ht, (price_ht * (tva_rate / 100) * price_multiplicator))
		;
		//total_ht += si quantité est inférieur à level alors prix_ht sinon prix_ht_over_level * multiplicateur
		//total_ttc += (si quantité est inférieur à mevem alors prix_ht sinon prix_ht_over_level + lui même * tva) * multiplicateur 
	}
	this->textBox_price_total_ht->Text = Convert::ToString(total_ht);
	this->textBox_price_total_ttc->Text = Convert::ToString(total_ttc);
}

private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e) {
	int add = 0;
	for (int i = 0; i < this->currentTable->Rows->Count; i++) {
		if (Convert::ToInt32(this->currentTable->Rows[i]->ItemArray[0]) == this->id_item &&
			this->currentTable->Rows[i]->ItemArray[2]->ToString() == this->color_name) {
			add = Convert::ToInt32(this->currentTable->Rows[i]->ItemArray[3]);
			this->currentTable->Rows[i]->Delete();
			this->currentTable->AcceptChanges();
		}
	}
	DataRow^ row = currentTable->NewRow();
	row[0] = Convert::ToInt32(this->id_item);
	row[1] = Convert::ToString(this->item_name);
	row[2] = Convert::ToString(this->color_name);
	row[3] = Convert::ToInt32(this->numericUpDown_quantity->Value) + add;
	row[4] = Convert::ToDecimal(this->price_ht);
	row[5] = Convert::ToInt32(this->level);
	row[6] = Convert::ToDecimal(this->price_over_level);
	row[7] = Convert::ToDecimal(this->price_multiplier);
	row[8] = Convert::ToInt32(this->id_category);
	row[9] = Convert::ToDecimal(this->tva);
	this->currentTable->Rows->Add(row);
	load_current_listbox();
}
private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = this->listBox_currents->SelectedIndex;
	if (index == -1) {
		return;
	}
	this->currentTable->Rows[index]->Delete();
	this->currentTable->AcceptChanges();
	load_current_listbox();
}

//
// Gestion du client :
//
private: System::Void combo_customer_load(System::Void) {
	this->comboBox_customer->Items->Clear();
	this->oDs = this->oCustomer->selectAllCustomer("customers");
	for (int i = 0; i < this->oDs->Tables["customers"]->Rows->Count; i++) {
		this->comboBox_customer->Items->Add(
			this->oDs->Tables["customers"]->Rows[i]->ItemArray[1]->ToString() + " " +
			this->oDs->Tables["customers"]->Rows[i]->ItemArray[2]->ToString()
		);
	}
}
private: System::Void comboBox_customer_Click(System::Object^ sender, System::EventArgs^ e) {
	combo_customer_load();
}
private: System::Void comboBox_customer_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox_customer->SelectedIndex == -1) {
		return;
	}
	this->id_customer = Convert::ToInt32(this->oDs->Tables["customers"]->Rows[this->comboBox_customer->SelectedIndex]->ItemArray[0]);
	this->last_name = Convert::ToString(this->oDs->Tables["customers"]->Rows[this->comboBox_customer->SelectedIndex]->ItemArray[1]);
	this->first_name = Convert::ToString(this->oDs->Tables["customers"]->Rows[this->comboBox_customer->SelectedIndex]->ItemArray[2]);

}

//
// Gestion Adresses de livraison :
//
private: System::Void combo_deli_load(System::Void) {
	this->comboBox_deli->Items->Clear();
	this->oDs = this->oAddress->selectAddressDelivery("deli", this->id_customer);
	for (int i = 0; i < this->oDs->Tables["deli"]->Rows->Count; i++) {
		this->comboBox_deli->Items->Add(
			this->oDs->Tables["deli"]->Rows[i]->ItemArray[3]->ToString() + " " +
			this->oDs->Tables["deli"]->Rows[i]->ItemArray[4]->ToString() + " " +
			this->oDs->Tables["deli"]->Rows[i]->ItemArray[5]->ToString()
		);
	}
}
private: System::Void comboBox_deli_Click(System::Object^ sender, System::EventArgs^ e) {
	combo_deli_load();
}
private: System::Void comboBox_deli_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox_deli->SelectedIndex == -1) {
		return;
	}
	this->id_deli = Convert::ToInt32(this->oDs->Tables["deli"]->Rows[this->comboBox_deli->SelectedIndex]->ItemArray[0]);
	this->city = Convert::ToString(this->oDs->Tables["deli"]->Rows[this->comboBox_deli->SelectedIndex]->ItemArray[5]);
}

//
// Gestion Adresses de facturation :
//
private: System::Void combo_bill_load(System::Void) {
	this->comboBox_bill->Items->Clear();
	this->oDs = this->oAddress->selectAddressBilling("bill", this->id_customer);
	for (int i = 0; i < this->oDs->Tables["bill"]->Rows->Count; i++) {
		this->comboBox_bill->Items->Add(
			this->oDs->Tables["bill"]->Rows[i]->ItemArray[3]->ToString() + " " +
			this->oDs->Tables["bill"]->Rows[i]->ItemArray[4]->ToString() + " " +
			this->oDs->Tables["bill"]->Rows[i]->ItemArray[5]->ToString()
		);
	}
}
private: System::Void comboBox_bill_Click(System::Object^ sender, System::EventArgs^ e) {
	combo_bill_load();
}
private: System::Void comboBox_bill_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox_bill->SelectedIndex == -1) {
		return;
	}
	this->id_bill = Convert::ToInt32(this->oDs->Tables["bill"]->Rows[this->comboBox_bill->SelectedIndex]->ItemArray[0]);
}

//
// Gestion Moyens de Paiement :
//
private: System::Void combo_payment_load(System::Void) {
	this->comboBox_payment_method->Items->Clear();
	this->oDs = this->oCatalog->selectPaymentMethod("methods");
	for (int i = 0; i < this->oDs->Tables["methods"]->Rows->Count; i++) {
		this->comboBox_payment_method->Items->Add(
			this->oDs->Tables["methods"]->Rows[i]->ItemArray[1]->ToString()
		);
	}
}
private: System::Void comboBox_payment_method_Click(System::Object^ sender, System::EventArgs^ e) {
	combo_payment_load();
}
private: System::Void comboBox_payment_method_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->comboBox_payment_method->SelectedIndex == -1) {
		return;
	}
	this->id_payment_method = Convert::ToInt32(this->oDs->Tables["methods"]->Rows[this->comboBox_payment_method->SelectedIndex]->ItemArray[0]);
}

//
// Gestion des CheckBoxes des Dates :
//

private: System::Void checkBox_payment_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox_payment->Checked) {
		this->dateTimePicker_payment->Enabled = true;

	}
	else {
		this->dateTimePicker_payment->Enabled = false;
	}
}

//
// Gestion de l'enregistrement :
//
private: System::Void button_generate_reference_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ firstName = Convert::ToString(this->first_name->Remove(2))->ToUpperInvariant();
	String^ lastName = Convert::ToString(this->last_name->Remove(2))->ToUpperInvariant();
	DateTime^ date = DateTime::Now;
	String^ year = Convert::ToString(date->Year);
	String^ city = Convert::ToString(this->city->Remove(3))->ToUpperInvariant();
	this->new_reference_order = firstName + lastName + year + city;
	this->oDs = this->oCatalog->searchOrder("searchorder", this->new_reference_order);
	int number = this->oDs->Tables["searchorder"]->Rows->Count;
	this->new_reference_order += number;
	this->textBox_order_reference->Text = new_reference_order;
	this->button_order_enter->Enabled = true;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->radioButton_order_create->Checked) {
		this->reference_order = this->new_reference_order;
	}
	
	System::DateTime^ date = this->dateTimePicker_deli->Value;
	this->delivery_date = System::Convert::ToString(date->Month) + "/";
	this->delivery_date += System::Convert::ToString(date->Day) + "/";
	this->delivery_date += System::Convert::ToString(date->Year);
	if (this->checkBox_payment->Checked) {
		System::DateTime^ date = this->dateTimePicker_payment->Value;
		this->payment_date = "'" + System::Convert::ToString(date->Month) + "/";
		this->payment_date += System::Convert::ToString(date->Day) + "/";
		this->payment_date += System::Convert::ToString(date->Year) + "'";
	}
	else {
		this->payment_date = "NULL";
	}
	if (this->radioButton_order_create->Checked) {
		this->oCatalog->createOrder(this->reference_order,
			this->delivery_date, "NULL", this->payment_date,
			this->id_payment_method, this->id_customer, this->id_bill, this->id_deli,
			this->currentTable);
	}
	else {
		this->oCatalog->updateOrder(this->reference_order,
			this->delivery_date, "NULL", this->payment_date,
			this->id_payment_method, this->id_bill, this->id_deli, this->currentTable);
	}
	this->currentTable->Clear();
	load_current_listbox();
	reload_all_components();
}



private: System::Void listBox_currents_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	this->button_delete->Enabled = true;
}
private: System::Void button_current_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	this->currentTable->Clear();
	load_current_listbox();
}


private: System::Void button_archive_order_Click(System::Object^ sender, System::EventArgs^ e) {
	button2_Click(sender, e);
	System::DateTime^ date = DateTime::Now;
	this->issue_date = System::Convert::ToString(date->Month) + "/";
	this->issue_date += System::Convert::ToString(date->Day) + "/";
	this->issue_date += System::Convert::ToString(date->Year);
	this->oCatalog->setOrderIssueDate(this->reference_order, this->issue_date);
	this->oCatalog->archiveOrder(this->reference_order);
	reload_all_components();
}
};
}
