#pragma once
#include "Catalog.h"
#include "Address.h"
#include "Customer.h"


namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ArchivedOrdersForm
	/// </summary>
	public ref class ArchivedOrdersForm : public System::Windows::Forms::Form
	{
	public:
		ArchivedOrdersForm(void)
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
		~ArchivedOrdersForm()
		{
			if (components)
			{
				delete components;
			}
		}

		// Objets :
	private: NS_Comp_Svc::Address^ oAddress;
	private: NS_Comp_Svc::Catalog^ oCatalog;
	private: NS_Comp_Svc::Customer^ oCustomer;
		// Datasets :
	private: DataSet^ oDs;
		//Variables :
	private: int index;
		//Catalog :
	private: System::String^ reference_order;
	private: System::String^ deli_date;
	private: System::String^ issue_date;
	private: System::String^ payment_date;
	private: int id_payment_method;
	private: int id_people;
	private: int id_bill;
	private: int id_deli;







	private: System::Windows::Forms::ListBox^ listBox_orders;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_client;
	private: System::Windows::Forms::TextBox^ textBox_deli;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox_deli_date;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_bill;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox_issue_date;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox_payment_date;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox_payment_method;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox_price_ht;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox_price_ttc;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ListBox^ listBox_items;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_client = (gcnew System::Windows::Forms::TextBox());
			this->textBox_deli = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox_deli_date = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_bill = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox_issue_date = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_payment_date = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox_payment_method = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_price_ht = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_price_ttc = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listBox_items = (gcnew System::Windows::Forms::ListBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox_orders
			// 
			this->listBox_orders->FormattingEnabled = true;
			this->listBox_orders->ItemHeight = 16;
			this->listBox_orders->Location = System::Drawing::Point(12, 38);
			this->listBox_orders->Name = L"listBox_orders";
			this->listBox_orders->Size = System::Drawing::Size(187, 276);
			this->listBox_orders->TabIndex = 0;
			this->listBox_orders->SelectedIndexChanged += gcnew System::EventHandler(this, &ArchivedOrdersForm::listBox_orders_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Choisir une commande :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(229, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Client :";
			// 
			// textBox_client
			// 
			this->textBox_client->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_client->Location = System::Drawing::Point(429, 57);
			this->textBox_client->Name = L"textBox_client";
			this->textBox_client->ReadOnly = true;
			this->textBox_client->Size = System::Drawing::Size(416, 22);
			this->textBox_client->TabIndex = 3;
			// 
			// textBox_deli
			// 
			this->textBox_deli->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_deli->Location = System::Drawing::Point(429, 85);
			this->textBox_deli->Name = L"textBox_deli";
			this->textBox_deli->ReadOnly = true;
			this->textBox_deli->Size = System::Drawing::Size(416, 22);
			this->textBox_deli->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(229, 88);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Adresse de livraison";
			// 
			// textBox_deli_date
			// 
			this->textBox_deli_date->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_deli_date->Location = System::Drawing::Point(429, 142);
			this->textBox_deli_date->Name = L"textBox_deli_date";
			this->textBox_deli_date->ReadOnly = true;
			this->textBox_deli_date->Size = System::Drawing::Size(416, 22);
			this->textBox_deli_date->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(229, 145);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(159, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Date de livraison prévue :";
			// 
			// textBox_bill
			// 
			this->textBox_bill->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_bill->Location = System::Drawing::Point(429, 114);
			this->textBox_bill->Name = L"textBox_bill";
			this->textBox_bill->ReadOnly = true;
			this->textBox_bill->Size = System::Drawing::Size(416, 22);
			this->textBox_bill->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(229, 117);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(152, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Adresse de Facturation :";
			// 
			// textBox_issue_date
			// 
			this->textBox_issue_date->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_issue_date->Location = System::Drawing::Point(429, 170);
			this->textBox_issue_date->Name = L"textBox_issue_date";
			this->textBox_issue_date->ReadOnly = true;
			this->textBox_issue_date->Size = System::Drawing::Size(416, 22);
			this->textBox_issue_date->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(229, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 16);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Date d\'envoi de la Facture :";
			// 
			// textBox_payment_date
			// 
			this->textBox_payment_date->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_payment_date->Location = System::Drawing::Point(429, 198);
			this->textBox_payment_date->Name = L"textBox_payment_date";
			this->textBox_payment_date->ReadOnly = true;
			this->textBox_payment_date->Size = System::Drawing::Size(416, 22);
			this->textBox_payment_date->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(229, 201);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(124, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Date de Paiement : ";
			// 
			// textBox_payment_method
			// 
			this->textBox_payment_method->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_payment_method->Location = System::Drawing::Point(429, 226);
			this->textBox_payment_method->Name = L"textBox_payment_method";
			this->textBox_payment_method->ReadOnly = true;
			this->textBox_payment_method->Size = System::Drawing::Size(416, 22);
			this->textBox_payment_method->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(229, 229);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(132, 16);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Moyen de paiement :";
			// 
			// textBox_price_ht
			// 
			this->textBox_price_ht->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_price_ht->Location = System::Drawing::Point(429, 254);
			this->textBox_price_ht->Name = L"textBox_price_ht";
			this->textBox_price_ht->ReadOnly = true;
			this->textBox_price_ht->Size = System::Drawing::Size(373, 22);
			this->textBox_price_ht->TabIndex = 17;
			this->textBox_price_ht->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(229, 257);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(108, 16);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Prix Hors Taxes :";
			// 
			// textBox_price_ttc
			// 
			this->textBox_price_ttc->BackColor = System::Drawing::SystemColors::Window;
			this->textBox_price_ttc->Location = System::Drawing::Point(429, 282);
			this->textBox_price_ttc->Name = L"textBox_price_ttc";
			this->textBox_price_ttc->ReadOnly = true;
			this->textBox_price_ttc->Size = System::Drawing::Size(373, 22);
			this->textBox_price_ttc->TabIndex = 19;
			this->textBox_price_ttc->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(229, 285);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(189, 16);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Prix Toutes Taxes Comprises :";
			// 
			// listBox_items
			// 
			this->listBox_items->FormattingEnabled = true;
			this->listBox_items->ItemHeight = 16;
			this->listBox_items->Location = System::Drawing::Point(874, 38);
			this->listBox_items->Name = L"listBox_items";
			this->listBox_items->Size = System::Drawing::Size(187, 276);
			this->listBox_items->TabIndex = 20;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(889, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 16);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Articles :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(808, 257);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(14, 16);
			this->label12->TabIndex = 22;
			this->label12->Text = L"€";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(808, 285);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(14, 16);
			this->label13->TabIndex = 23;
			this->label13->Text = L"€";
			// 
			// ArchivedOrdersForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1080, 333);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->listBox_items);
			this->Controls->Add(this->textBox_price_ttc);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox_price_ht);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox_payment_method);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox_payment_date);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox_issue_date);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox_deli_date);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox_bill);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox_deli);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_client);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox_orders);
			this->Name = L"ArchivedOrdersForm";
			this->Text = L"ArchivedOrdersForm";
			this->Load += gcnew System::EventHandler(this, &ArchivedOrdersForm::ArchivedOrdersForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void ArchivedOrdersForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oAddress = gcnew NS_Comp_Svc::Address();
	this->oCatalog = gcnew NS_Comp_Svc::Catalog();
	this->oCustomer = gcnew NS_Comp_Svc::Customer();
	load_order_listbox();
}

//
// Gestion de la liste des commandes :
//
private: System::Void load_order_listbox(System::Void) {
	this->oDs = this->oCatalog->selectOrderArchived("orders");
	this->listBox_orders->ClearSelected();
	for (int i = 0; i < this->oDs->Tables["orders"]->Rows->Count; i++) {
		this->listBox_orders->Items->Add(
			Convert::ToString(this->oDs->Tables["orders"]->Rows[i]->ItemArray[0])
		);
	}
}
private: System::Void listBox_orders_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (listBox_orders->SelectedIndex == -1) {
		return;
	}
	this->oDs = this->oCatalog->selectOrderArchived("orders");
	this->index = listBox_orders->SelectedIndex;
	this->reference_order = Convert::ToString(this->oDs->Tables["orders"]->Rows[index]->ItemArray[0]);
	this->deli_date = Convert::ToString(this->oDs->Tables["orders"]->Rows[index]->ItemArray[1]);
	this->issue_date = Convert::ToString(this->oDs->Tables["orders"]->Rows[index]->ItemArray[2]);
	this->payment_date = Convert::ToString(this->oDs->Tables["orders"]->Rows[index]->ItemArray[3]);
	this->id_payment_method = Convert::ToInt32(this->oDs->Tables["orders"]->Rows[index]->ItemArray[4]);
	this->id_people = Convert::ToInt32(this->oDs->Tables["orders"]->Rows[index]->ItemArray[5]);
	this->id_bill = Convert::ToInt32(this->oDs->Tables["orders"]->Rows[index]->ItemArray[6]);
	this->id_deli = Convert::ToInt32(this->oDs->Tables["orders"]->Rows[index]->ItemArray[7]);
	load_textboxes();
}

//
// Gestion des textboxes :
//
private: System::Void load_textboxes(System::Void) {
	this->oDs = this->oCustomer->selectAllCustomer("cust");
	for (int i = 0; i < this->oDs->Tables["cust"]->Rows->Count; i++) {
		if (Convert::ToInt32(this->oDs->Tables["cust"]->Rows[i]->ItemArray[0]) == this->id_people) {
			this->textBox_client->Text = (
				this->oDs->Tables["cust"]->Rows[i]->ItemArray[1]->ToString() + " " +
				this->oDs->Tables["cust"]->Rows[i]->ItemArray[2]->ToString()
			);
		}
	}
	this->oDs = this->oAddress->selectAddress("deli", this->id_deli);
	this->textBox_deli->Text = (
		this->oDs->Tables["deli"]->Rows[0]->ItemArray[1]->ToString() + " " +
		this->oDs->Tables["deli"]->Rows[0]->ItemArray[2]->ToString() + " " +
		this->oDs->Tables["deli"]->Rows[0]->ItemArray[3]->ToString() + " " +
		this->oDs->Tables["deli"]->Rows[0]->ItemArray[4]->ToString() + " " +
		this->oDs->Tables["deli"]->Rows[0]->ItemArray[5]->ToString()
	);
	this->oDs = this->oAddress->selectAddress("bill", this->id_bill);
	this->textBox_bill->Text = (
		this->oDs->Tables["bill"]->Rows[0]->ItemArray[1]->ToString() + " " +
		this->oDs->Tables["bill"]->Rows[0]->ItemArray[2]->ToString() + " " +
		this->oDs->Tables["bill"]->Rows[0]->ItemArray[3]->ToString() + " " +
		this->oDs->Tables["bill"]->Rows[0]->ItemArray[4]->ToString() + " " +
		this->oDs->Tables["bill"]->Rows[0]->ItemArray[5]->ToString()
	);
	this->textBox_deli_date->Text = Convert::ToString(this->deli_date->Remove(10));
	this->textBox_issue_date->Text = Convert::ToString(this->issue_date->Remove(10));
	this->textBox_payment_date->Text = Convert::ToString(this->payment_date->Remove(10));
	this->oDs = this->oCatalog->selectPaymentMethod("methods");
	for (int i = 0; i < this->oDs->Tables["methods"]->Rows->Count; i++) {
		if (Convert::ToInt32(this->oDs->Tables["methods"]->Rows[i]->ItemArray[0]) == this->id_payment_method) {
			this->textBox_payment_method->Text = (
				this->oDs->Tables["methods"]->Rows[i]->ItemArray[1]->ToString()
				);
		}
	}
	Decimal total_ht = 0;
	Decimal total_ttc = 0;
	this->oDs = this->oCatalog->selectContain("contains", this->reference_order);
	this->listBox_items->Items->Clear();
	for (int i = 0; i < this->oDs->Tables["contains"]->Rows->Count; i++) {
		this->listBox_items->Items->Add(
			this->oDs->Tables["contains"]->Rows[i]->ItemArray[3]->ToString() + "x " +
			this->oDs->Tables["contains"]->Rows[i]->ItemArray[1]->ToString() + " " +
			this->oDs->Tables["contains"]->Rows[i]->ItemArray[2]->ToString()
		);
	}
	if (this->oDs->Tables["contains"]->Rows->Count == 0) {
		return;
	}
	for (int i = 0; i < this->oDs->Tables["contains"]->Rows->Count; i++) {
		if (Convert::ToInt32(this->oDs->Tables["contains"]->Rows[i]->ItemArray[3]) < Convert::ToInt32(this->oDs->Tables["contains"]->Rows[i]->ItemArray[5])) {
			total_ht = Decimal::Add(total_ht,
				(Convert::ToDecimal(this->oDs->Tables["contains"]->Rows[i]->ItemArray[4]) * Convert::ToDecimal(this->oDs->Tables["contains"]->Rows[i]->ItemArray[7])) * Convert::ToInt32(this->oDs->Tables["contains"]->Rows[i]->ItemArray[3])
			);
			total_ttc = Decimal::Add(total_ttc,
				(Decimal::Add(Convert::ToDecimal(this->oDs->Tables["contains"]->Rows[i]->ItemArray[4]), Convert::ToDecimal(this->oDs->Tables["contains"]->Rows[i]->ItemArray[4]) * (Convert::ToDecimal(this->oDs->Tables["contains"]->Rows[i]->ItemArray[9]) / 100)) * Convert::ToDecimal(this->oDs->Tables["contains"]->Rows[i]->ItemArray[7])) * Convert::ToInt32(this->oDs->Tables["contains"]->Rows[i]->ItemArray[3])
			);
		}
		else {
			total_ht = Decimal::Add(total_ht,
				(Convert::ToDecimal(this->oDs->Tables["contains"]->Rows[i]->ItemArray[6]) * Convert::ToDecimal(this->oDs->Tables["contains"]->Rows[i]->ItemArray[7])) * Convert::ToInt32(this->oDs->Tables["contains"]->Rows[i]->ItemArray[3])
			);
			total_ttc = Decimal::Add(total_ttc,
				(Decimal::Add(Convert::ToDecimal(this->oDs->Tables["contains"]->Rows[i]->ItemArray[6]), Convert::ToDecimal(this->oDs->Tables["contains"]->Rows[i]->ItemArray[4]) * (Convert::ToDecimal(this->oDs->Tables["contains"]->Rows[i]->ItemArray[9]) / 100)) * Convert::ToDecimal(this->oDs->Tables["contains"]->Rows[i]->ItemArray[7])) * Convert::ToInt32(this->oDs->Tables["contains"]->Rows[i]->ItemArray[3])
			);
		}
	}
	this->textBox_price_ht->Text = Convert::ToString(total_ht);
	this->textBox_price_ttc->Text = Convert::ToString(total_ttc);






}


};
}
