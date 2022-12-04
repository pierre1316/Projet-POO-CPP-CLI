#pragma once
#include "Catalog.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CreateItemForm
	/// </summary>
	public ref class CreateItemForm : public System::Windows::Forms::Form
	{
	public:
		CreateItemForm(void)
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
		~CreateItemForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: NS_Comp_Svc::Catalog^ oCatalog;
	private: Data::DataSet^ CategoryList;
	private: Data::DataSet^ ItemList;
	private: Data::DataSet^ ColorList;
	private: int id_category;
	private: int id_item = -1;

	private: System::Windows::Forms::Button^ button_delete;
	protected:
	private: System::Windows::Forms::Button^ button_enter;





	private: System::Windows::Forms::ListBox^ listBox_items;


	private: System::Windows::Forms::RadioButton^ radio_modify_item;

	private: System::Windows::Forms::RadioButton^ radio_create_item;

	private: System::Windows::Forms::TextBox^ textBox_price_ht;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox_quantity_reduction;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_price_ht_after_reduc;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox_minimum;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ combo_category;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ListBox^ listBox_colors;

	private: System::Windows::Forms::RadioButton^ radio_modify_color;
	private: System::Windows::Forms::RadioButton^ radio_create_color;
	private: System::Windows::Forms::Button^ button_color_delete;
	private: System::Windows::Forms::Button^ button_color_enter;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_name;
	private: System::Windows::Forms::TextBox^ textBox_color_name;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox_price_multiplicateur;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox_quantity;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox_color_r;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button_pick;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_quantity_max;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox_color_b;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox_color_g;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::GroupBox^ groupBox2;



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
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->button_enter = (gcnew System::Windows::Forms::Button());
			this->listBox_items = (gcnew System::Windows::Forms::ListBox());
			this->radio_modify_item = (gcnew System::Windows::Forms::RadioButton());
			this->radio_create_item = (gcnew System::Windows::Forms::RadioButton());
			this->textBox_price_ht = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_quantity_reduction = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_price_ht_after_reduc = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_minimum = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->combo_category = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listBox_colors = (gcnew System::Windows::Forms::ListBox());
			this->radio_modify_color = (gcnew System::Windows::Forms::RadioButton());
			this->radio_create_color = (gcnew System::Windows::Forms::RadioButton());
			this->button_color_delete = (gcnew System::Windows::Forms::Button());
			this->button_color_enter = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_name = (gcnew System::Windows::Forms::TextBox());
			this->textBox_color_name = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox_price_multiplicateur = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox_quantity = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox_color_r = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button_pick = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_quantity_max = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox_color_b = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox_color_g = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_delete
			// 
			this->button_delete->Enabled = false;
			this->button_delete->Location = System::Drawing::Point(235, 291);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(163, 47);
			this->button_delete->TabIndex = 20;
			this->button_delete->Text = L"Supprimer";
			this->button_delete->UseVisualStyleBackColor = true;
			this->button_delete->Click += gcnew System::EventHandler(this, &CreateItemForm::button_delete_Click);
			// 
			// button_enter
			// 
			this->button_enter->Location = System::Drawing::Point(436, 282);
			this->button_enter->Name = L"button_enter";
			this->button_enter->Size = System::Drawing::Size(163, 47);
			this->button_enter->TabIndex = 19;
			this->button_enter->Text = L"Enregistrer";
			this->button_enter->UseVisualStyleBackColor = true;
			this->button_enter->Click += gcnew System::EventHandler(this, &CreateItemForm::button_enter_Click);
			// 
			// listBox_items
			// 
			this->listBox_items->Enabled = false;
			this->listBox_items->FormattingEnabled = true;
			this->listBox_items->ItemHeight = 16;
			this->listBox_items->Location = System::Drawing::Point(12, 62);
			this->listBox_items->Name = L"listBox_items";
			this->listBox_items->Size = System::Drawing::Size(202, 276);
			this->listBox_items->TabIndex = 14;
			this->listBox_items->SelectedIndexChanged += gcnew System::EventHandler(this, &CreateItemForm::listBox_items_SelectedIndexChanged);
			// 
			// radio_modify_item
			// 
			this->radio_modify_item->AutoSize = true;
			this->radio_modify_item->Location = System::Drawing::Point(88, 36);
			this->radio_modify_item->Name = L"radio_modify_item";
			this->radio_modify_item->Size = System::Drawing::Size(76, 20);
			this->radio_modify_item->TabIndex = 12;
			this->radio_modify_item->Text = L"Modifier";
			this->radio_modify_item->UseVisualStyleBackColor = true;
			// 
			// radio_create_item
			// 
			this->radio_create_item->AutoSize = true;
			this->radio_create_item->Checked = true;
			this->radio_create_item->Location = System::Drawing::Point(12, 36);
			this->radio_create_item->Name = L"radio_create_item";
			this->radio_create_item->Size = System::Drawing::Size(61, 20);
			this->radio_create_item->TabIndex = 11;
			this->radio_create_item->TabStop = true;
			this->radio_create_item->Text = L"Créer";
			this->radio_create_item->UseVisualStyleBackColor = true;
			this->radio_create_item->CheckedChanged += gcnew System::EventHandler(this, &CreateItemForm::radio_create_item_CheckedChanged);
			// 
			// textBox_price_ht
			// 
			this->textBox_price_ht->Location = System::Drawing::Point(402, 107);
			this->textBox_price_ht->Name = L"textBox_price_ht";
			this->textBox_price_ht->Size = System::Drawing::Size(85, 22);
			this->textBox_price_ht->TabIndex = 23;
			this->textBox_price_ht->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(304, 107);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(92, 16);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Prix hors taxe :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(490, 107);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 16);
			this->label6->TabIndex = 25;
			this->label6->Text = L"€";
			// 
			// textBox_quantity_reduction
			// 
			this->textBox_quantity_reduction->Location = System::Drawing::Point(402, 160);
			this->textBox_quantity_reduction->Name = L"textBox_quantity_reduction";
			this->textBox_quantity_reduction->Size = System::Drawing::Size(200, 22);
			this->textBox_quantity_reduction->TabIndex = 27;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(236, 163);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(156, 16);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Quantité avant réduction :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(539, 191);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(14, 16);
			this->label4->TabIndex = 30;
			this->label4->Text = L"€";
			// 
			// textBox_price_ht_after_reduc
			// 
			this->textBox_price_ht_after_reduc->Location = System::Drawing::Point(451, 188);
			this->textBox_price_ht_after_reduc->Name = L"textBox_price_ht_after_reduc";
			this->textBox_price_ht_after_reduc->Size = System::Drawing::Size(85, 22);
			this->textBox_price_ht_after_reduc->TabIndex = 29;
			this->textBox_price_ht_after_reduc->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(245, 191);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(188, 16);
			this->label8->TabIndex = 28;
			this->label8->Text = L"Prix hors taxe après réduction :";
			// 
			// textBox_minimum
			// 
			this->textBox_minimum->Location = System::Drawing::Point(402, 132);
			this->textBox_minimum->Name = L"textBox_minimum";
			this->textBox_minimum->Size = System::Drawing::Size(200, 22);
			this->textBox_minimum->TabIndex = 32;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(278, 135);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(118, 16);
			this->label9->TabIndex = 31;
			this->label9->Text = L"Quantité minimum :";
			// 
			// combo_category
			// 
			this->combo_category->FormattingEnabled = true;
			this->combo_category->Location = System::Drawing::Point(402, 244);
			this->combo_category->Name = L"combo_category";
			this->combo_category->Size = System::Drawing::Size(200, 24);
			this->combo_category->TabIndex = 34;
			this->combo_category->Text = L"Sélectionnez une Catégorie";
			this->combo_category->SelectedIndexChanged += gcnew System::EventHandler(this, &CreateItemForm::combo_category_SelectedIndexChanged);
			this->combo_category->Enter += gcnew System::EventHandler(this, &CreateItemForm::combo_category_Enter);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(320, 247);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(72, 16);
			this->label10->TabIndex = 33;
			this->label10->Text = L"Catégorie :";
			// 
			// listBox_colors
			// 
			this->listBox_colors->Enabled = false;
			this->listBox_colors->FormattingEnabled = true;
			this->listBox_colors->ItemHeight = 16;
			this->listBox_colors->Location = System::Drawing::Point(11, 53);
			this->listBox_colors->Name = L"listBox_colors";
			this->listBox_colors->Size = System::Drawing::Size(175, 276);
			this->listBox_colors->TabIndex = 35;
			this->listBox_colors->SelectedIndexChanged += gcnew System::EventHandler(this, &CreateItemForm::listBox_colors_SelectedIndexChanged);
			// 
			// radio_modify_color
			// 
			this->radio_modify_color->AutoSize = true;
			this->radio_modify_color->Location = System::Drawing::Point(96, 27);
			this->radio_modify_color->Name = L"radio_modify_color";
			this->radio_modify_color->Size = System::Drawing::Size(76, 20);
			this->radio_modify_color->TabIndex = 37;
			this->radio_modify_color->Text = L"Modifier";
			this->radio_modify_color->UseVisualStyleBackColor = true;
			// 
			// radio_create_color
			// 
			this->radio_create_color->AutoSize = true;
			this->radio_create_color->Checked = true;
			this->radio_create_color->Location = System::Drawing::Point(20, 27);
			this->radio_create_color->Name = L"radio_create_color";
			this->radio_create_color->Size = System::Drawing::Size(61, 20);
			this->radio_create_color->TabIndex = 36;
			this->radio_create_color->TabStop = true;
			this->radio_create_color->Text = L"Créer";
			this->radio_create_color->UseVisualStyleBackColor = true;
			this->radio_create_color->CheckedChanged += gcnew System::EventHandler(this, &CreateItemForm::radio_create_color_CheckedChanged);
			// 
			// button_color_delete
			// 
			this->button_color_delete->Enabled = false;
			this->button_color_delete->Location = System::Drawing::Point(192, 282);
			this->button_color_delete->Name = L"button_color_delete";
			this->button_color_delete->Size = System::Drawing::Size(107, 47);
			this->button_color_delete->TabIndex = 40;
			this->button_color_delete->Text = L"Supprimer";
			this->button_color_delete->UseVisualStyleBackColor = true;
			this->button_color_delete->Click += gcnew System::EventHandler(this, &CreateItemForm::button_color_delete_Click);
			// 
			// button_color_enter
			// 
			this->button_color_enter->Location = System::Drawing::Point(305, 282);
			this->button_color_enter->Name = L"button_color_enter";
			this->button_color_enter->Size = System::Drawing::Size(107, 47);
			this->button_color_enter->TabIndex = 39;
			this->button_color_enter->Text = L"Enregistrer";
			this->button_color_enter->UseVisualStyleBackColor = true;
			this->button_color_enter->Click += gcnew System::EventHandler(this, &CreateItemForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(354, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Nom :";
			// 
			// textBox_name
			// 
			this->textBox_name->Location = System::Drawing::Point(402, 76);
			this->textBox_name->Name = L"textBox_name";
			this->textBox_name->Size = System::Drawing::Size(200, 22);
			this->textBox_name->TabIndex = 17;
			// 
			// textBox_color_name
			// 
			this->textBox_color_name->Location = System::Drawing::Point(244, 68);
			this->textBox_color_name->Name = L"textBox_color_name";
			this->textBox_color_name->Size = System::Drawing::Size(164, 22);
			this->textBox_color_name->TabIndex = 42;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(196, 71);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(42, 16);
			this->label12->TabIndex = 41;
			this->label12->Text = L"Nom :";
			// 
			// textBox_price_multiplicateur
			// 
			this->textBox_price_multiplicateur->Location = System::Drawing::Point(323, 105);
			this->textBox_price_multiplicateur->Name = L"textBox_price_multiplicateur";
			this->textBox_price_multiplicateur->Size = System::Drawing::Size(85, 22);
			this->textBox_price_multiplicateur->TabIndex = 44;
			this->textBox_price_multiplicateur->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(208, 108);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(91, 16);
			this->label13->TabIndex = 43;
			this->label13->Text = L"Multiplicateur :";
			// 
			// textBox_quantity
			// 
			this->textBox_quantity->Location = System::Drawing::Point(323, 146);
			this->textBox_quantity->Name = L"textBox_quantity";
			this->textBox_quantity->Size = System::Drawing::Size(85, 22);
			this->textBox_quantity->TabIndex = 46;
			this->textBox_quantity->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(193, 149);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(115, 16);
			this->label14->TabIndex = 45;
			this->label14->Text = L"Quantité en stock :";
			// 
			// textBox_color_r
			// 
			this->textBox_color_r->Location = System::Drawing::Point(256, 180);
			this->textBox_color_r->Name = L"textBox_color_r";
			this->textBox_color_r->ReadOnly = true;
			this->textBox_color_r->Size = System::Drawing::Size(52, 22);
			this->textBox_color_r->TabIndex = 48;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(193, 183);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(54, 16);
			this->label15->TabIndex = 47;
			this->label15->Text = L"Rouge :";
			// 
			// button_pick
			// 
			this->button_pick->Location = System::Drawing::Point(319, 183);
			this->button_pick->Name = L"button_pick";
			this->button_pick->Size = System::Drawing::Size(93, 72);
			this->button_pick->TabIndex = 49;
			this->button_pick->Text = L"Sélectionner\r\nla\r\nCouleur";
			this->button_pick->UseVisualStyleBackColor = true;
			this->button_pick->Click += gcnew System::EventHandler(this, &CreateItemForm::button_pick_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(219, 219);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(175, 16);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Quantité maximum en stock :";
			// 
			// textBox_quantity_max
			// 
			this->textBox_quantity_max->Location = System::Drawing::Point(402, 216);
			this->textBox_quantity_max->Name = L"textBox_quantity_max";
			this->textBox_quantity_max->Size = System::Drawing::Size(200, 22);
			this->textBox_quantity_max->TabIndex = 18;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox_color_b);
			this->groupBox1->Controls->Add(this->label17);
			this->groupBox1->Controls->Add(this->textBox_color_g);
			this->groupBox1->Controls->Add(this->label16);
			this->groupBox1->Controls->Add(this->button_pick);
			this->groupBox1->Controls->Add(this->textBox_color_r);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->textBox_quantity);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->textBox_price_multiplicateur);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->textBox_color_name);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->button_color_delete);
			this->groupBox1->Controls->Add(this->button_color_enter);
			this->groupBox1->Controls->Add(this->radio_modify_color);
			this->groupBox1->Controls->Add(this->radio_create_color);
			this->groupBox1->Controls->Add(this->listBox_colors);
			this->groupBox1->Location = System::Drawing::Point(630, 9);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(422, 340);
			this->groupBox1->TabIndex = 50;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Gestion des couleurs :";
			// 
			// textBox_color_b
			// 
			this->textBox_color_b->Location = System::Drawing::Point(256, 236);
			this->textBox_color_b->Name = L"textBox_color_b";
			this->textBox_color_b->ReadOnly = true;
			this->textBox_color_b->Size = System::Drawing::Size(52, 22);
			this->textBox_color_b->TabIndex = 53;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(193, 239);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(40, 16);
			this->label17->TabIndex = 52;
			this->label17->Text = L"Bleu :";
			// 
			// textBox_color_g
			// 
			this->textBox_color_g->Location = System::Drawing::Point(256, 208);
			this->textBox_color_g->Name = L"textBox_color_g";
			this->textBox_color_g->ReadOnly = true;
			this->textBox_color_g->Size = System::Drawing::Size(52, 22);
			this->textBox_color_g->TabIndex = 51;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(193, 211);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(37, 16);
			this->label16->TabIndex = 50;
			this->label16->Text = L"Vert :";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button_enter);
			this->groupBox2->Location = System::Drawing::Point(3, 9);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(621, 340);
			this->groupBox2->TabIndex = 51;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Gestion des articles :";
			// 
			// CreateItemForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1064, 353);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->combo_category);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox_minimum);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_price_ht_after_reduc);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox_quantity_reduction);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox_price_ht);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button_delete);
			this->Controls->Add(this->textBox_quantity_max);
			this->Controls->Add(this->textBox_name);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox_items);
			this->Controls->Add(this->radio_modify_item);
			this->Controls->Add(this->radio_create_item);
			this->Controls->Add(this->groupBox2);
			this->Name = L"CreateItemForm";
			this->Text = L"CreateItemForm";
			this->Load += gcnew System::EventHandler(this, &CreateItemForm::CreateItemForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void CreateItemForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oCatalog = gcnew NS_Comp_Svc::Catalog();
	//this->ItemList = gcnew Data::DataSet();
	reload_components();
}


private: System::Void reload_color_part(Void) {
	// Coté Couleurs
	this->listBox_colors->Items->Clear();
	this->textBox_color_name->ResetText();
	this->textBox_quantity->ResetText();
	this->textBox_price_multiplicateur->ResetText();
	this->textBox_color_r->ResetText();
	this->textBox_color_g->ResetText();
	this->textBox_color_b->ResetText();
	this->button_pick->BackColor = this->button_pick->DefaultBackColor;
	if (this->radio_create_color->Checked) {
		this->listBox_colors->Enabled = false;
		this->button_color_delete->Enabled = false;
	}
	else {
		this->listBox_colors->Enabled = true;
		this->button_color_delete->Enabled = true;
	}
	this->ColorList = this->oCatalog->selectColors("colors", this->id_item);
	for (int i = 0; i < this->ColorList->Tables["colors"]->Rows->Count; i++) {
		this->listBox_colors->Items->Add(
			this->ColorList->Tables["colors"]->Rows[i]->ItemArray[1]->ToString()
		);
	}
}


private: System::Void reload_components(System::Void) {
	this->listBox_items->ResetText();
	this->textBox_name->ResetText();
	this->textBox_quantity->ResetText();
	this->textBox_price_ht->ResetText();
	this->textBox_minimum->ResetText();
	this->textBox_quantity_max->ResetText();
	this->textBox_quantity_reduction->ResetText();
	this->textBox_price_ht_after_reduc->ResetText();
	this->textBox_color_name->ResetText();
	this->listBox_items->Items->Clear();
	if (this->radio_create_item->Checked) {
		this->groupBox1->Enabled = false;
		this->listBox_items->Enabled = false;
		this->button_delete->Enabled = false;
	}
	else {
		this->groupBox1->Enabled = true;
		this->listBox_items->Enabled = true;
		this->button_delete->Enabled = true;
		
	}
	this->ItemList = this->oCatalog->selectItems("items");
	for (int i = 0; i < this->ItemList->Tables["items"]->Rows->Count; i++) {
		this->listBox_items->Items->Add(
			this->ItemList->Tables["items"]->Rows[i]->ItemArray[0]->ToString() + " " +
			this->ItemList->Tables["items"]->Rows[i]->ItemArray[1]->ToString());
	}
	combo_category_load();
	reload_color_part();
}


private: System::Void radio_create_item_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	reload_components();
}
private: System::Void button_enter_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->combo_category->SelectedIndex == -1) {
		return; // Pas de catégorie sélectionnée
	}
	if (this->radio_create_item->Checked) {
		this->oCatalog->createItem(
			this->textBox_name->Text,
			this->textBox_price_ht->Text,
			Convert::ToInt32(this->textBox_quantity_max->Text),
			Convert::ToInt32(this->textBox_minimum->Text),
			this->textBox_price_ht_after_reduc->Text,
			Convert::ToInt32(this->textBox_quantity_reduction->Text),
			this->id_category
		);
	}
	else {
		this->oCatalog->updateItem(
			this->id_item,
			this->textBox_name->Text,
			this->textBox_price_ht->Text->ToString(),
			Convert::ToInt32(this->textBox_quantity_max->Text),
			Convert::ToInt32(this->textBox_minimum->Text),
			this->textBox_price_ht_after_reduc->Text->ToString(),
			Convert::ToInt32(this->textBox_quantity_reduction->Text),
			this->id_category
		);

	}
	reload_components();
}



private: System::Void button_pick_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ MyDialog = gcnew ColorDialog();
	// Keeps the user from selecting a custom color.
	MyDialog->AllowFullOpen = true;
	// Allows the user to get help. (The default is false.)
	MyDialog->ShowHelp = true;
	// Sets the initial color select to the current text color.
	MyDialog->Color = Color::White;

	// Update the text box color if the user clicks OK 

	MyDialog->ShowDialog();
	Color hello;
	hello = MyDialog->Color;;
	this->textBox_color_r->Text = Convert::ToString(hello.R);
	this->textBox_color_g->Text = Convert::ToString(hello.G);
	this->textBox_color_b->Text = Convert::ToString(hello.B);
	this->button_pick->BackColor = hello;

}
private: System::Void combo_category_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	this->id_category = Convert::ToInt32(this->CategoryList->Tables["categories"]->Rows[this->combo_category->SelectedIndex]->ItemArray[0]);
	
}
private: System::Void listBox_items_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->listBox_items->SelectedIndex == -1) {
		reload_components();
		return;
	}
	this->ItemList = this->oCatalog->selectItems("items");
	int index = this->listBox_items->SelectedIndex;
	this->id_item = Convert::ToInt32(this->ItemList->Tables["items"]->Rows[index]->ItemArray[0]);
	this->label2->Text = Convert::ToString(this->id_item);
	this->textBox_name->Text = this->ItemList->Tables["items"]->Rows[index]->ItemArray[1]->ToString();
	this->textBox_price_ht->Text = this->ItemList->Tables["items"]->Rows[index]->ItemArray[2]->ToString();
	this->textBox_quantity_max->Text = this->ItemList->Tables["items"]->Rows[index]->ItemArray[3]->ToString();
	this->textBox_minimum->Text = this->ItemList->Tables["items"]->Rows[index]->ItemArray[4]->ToString();
	this->textBox_price_ht_after_reduc->Text = this->ItemList->Tables["items"]->Rows[index]->ItemArray[5]->ToString();
	this->textBox_quantity_reduction->Text = this->ItemList->Tables["items"]->Rows[index]->ItemArray[6]->ToString();
	String^ idcat = Convert::ToString(this->ItemList->Tables["items"]->Rows[index]->ItemArray[7]);
	int index_category;
	this->CategoryList = this->oCatalog->selectCategory("categories");
	for (int i = 0; i < this->CategoryList->Tables["categories"]->Rows->Count; i++) {
		if (System::Convert::ToString(this->CategoryList->Tables["categories"]->Rows[i]->ItemArray[0]) == idcat) {
			index_category = i;
		}
	}
	this->combo_category->SelectedIndex = index_category;
	reload_color_part();




}
private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oCatalog->deleteItem(this->id_item);
	reload_components();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!radio_create_color->Checked) {
		this->oCatalog->deleteColor(this->id_item, this->ColorList->Tables["colors"]->Rows[this->listBox_colors->SelectedIndex]->ItemArray[1]->ToString());
	}
	this->oCatalog->createColor(
		this->id_item,
		this->textBox_color_name->Text,
		this->textBox_price_multiplicateur->Text,
		Convert::ToInt32(this->textBox_quantity->Text),
		Convert::ToInt32(this->textBox_color_r->Text),
		Convert::ToInt32(this->textBox_color_g->Text),
		Convert::ToInt32(this->textBox_color_b->Text)
	);
	reload_color_part();

		
}
private: System::Void radio_create_color_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	reload_color_part();
}
private: System::Void listBox_colors_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (listBox_colors->SelectedIndex == -1) {
		return;
	}
	this->textBox_color_name->Text = this->ColorList->Tables["colors"]->Rows[this->listBox_colors->SelectedIndex]->ItemArray[1]->ToString();
	this->textBox_price_multiplicateur->Text = this->ColorList->Tables["colors"]->Rows[this->listBox_colors->SelectedIndex]->ItemArray[2]->ToString();
	this->textBox_quantity->Text = this->ColorList->Tables["colors"]->Rows[this->listBox_colors->SelectedIndex]->ItemArray[3]->ToString();
	this->textBox_color_r->Text = this->ColorList->Tables["colors"]->Rows[this->listBox_colors->SelectedIndex]->ItemArray[4]->ToString();
	this->textBox_color_g->Text = this->ColorList->Tables["colors"]->Rows[this->listBox_colors->SelectedIndex]->ItemArray[5]->ToString();
	this->textBox_color_b->Text = this->ColorList->Tables["colors"]->Rows[this->listBox_colors->SelectedIndex]->ItemArray[6]->ToString();
	//Color^ button_color = gcnew Color();
	//button_color = Color::FromArgb(Convert::ToInt32(this->textBox_color_r->Text), Convert::ToInt32(this->textBox_color_g->Text), Convert::ToInt32(this->textBox_color_b->Text));
	this->button_pick->BackColor = Color::FromArgb(Convert::ToInt32(this->textBox_color_r->Text), Convert::ToInt32(this->textBox_color_g->Text), Convert::ToInt32(this->textBox_color_b->Text));
}
private: System::Void button_color_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oCatalog->deleteColor(this->id_item, this->ColorList->Tables["colors"]->Rows[this->listBox_colors->SelectedIndex]->ItemArray[1]->ToString());
	reload_color_part();
}

private: System::Void combo_category_load(System::Void) {
	this->combo_category->Items->Clear();
	this->combo_category->Text = L"Sélectionnez une Catégorie";
	this->CategoryList = this->oCatalog->selectCategory("categories");
	for (int i = 0; i < this->CategoryList->Tables["categories"]->Rows->Count; i++) {
		this->combo_category->Items->Add(
			this->CategoryList->Tables["categories"]->Rows[i]->ItemArray[1]->ToString() + " | TVA : " +
			this->CategoryList->Tables["categories"]->Rows[i]->ItemArray[2]->ToString() + "%");
	}
}
private: System::Void combo_category_Enter(System::Object^ sender, System::EventArgs^ e) {
	combo_category_load();
}
};
}
