#pragma once
#include "CLservPeople.h"
#include "CLservAddress.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de CreateAddressForm
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
		/// Nettoyage des ressources utilis�es.
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
		/// Variable n�cessaire au concepteur.
		/// </summary>
		
	private: int idPeople;
	private: NS_Comp_Svc::CLservAddress^ oAddress;
	private: NS_Comp_Svc::CLservPeople^ oPeople;
	private: System::Data::DataSet^ oDs;
	private: int indexPeople;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_city;
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
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_city = (gcnew System::Windows::Forms::TextBox());
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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(83, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// textBox_city
			// 
			this->textBox_city->Location = System::Drawing::Point(135, 203);
			this->textBox_city->Name = L"textBox_city";
			this->textBox_city->Size = System::Drawing::Size(257, 22);
			this->textBox_city->TabIndex = 44;
			// 
			// textBox_postalcode
			// 
			this->textBox_postalcode->Location = System::Drawing::Point(135, 175);
			this->textBox_postalcode->Name = L"textBox_postalcode";
			this->textBox_postalcode->Size = System::Drawing::Size(257, 22);
			this->textBox_postalcode->TabIndex = 43;
			// 
			// textBox_address
			// 
			this->textBox_address->Location = System::Drawing::Point(135, 147);
			this->textBox_address->Name = L"textBox_address";
			this->textBox_address->Size = System::Drawing::Size(257, 22);
			this->textBox_address->TabIndex = 42;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(63, 207);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(42, 16);
			this->label8->TabIndex = 41;
			this->label8->Text = L"Ville : ";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 178);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 16);
			this->label7->TabIndex = 40;
			this->label7->Text = L"Code Postal :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(38, 150);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(64, 16);
			this->label9->TabIndex = 39;
			this->label9->Text = L"Adresse :";
			// 
			// textBox_first_name
			// 
			this->textBox_first_name->Location = System::Drawing::Point(135, 119);
			this->textBox_first_name->Name = L"textBox_first_name";
			this->textBox_first_name->Size = System::Drawing::Size(257, 22);
			this->textBox_first_name->TabIndex = 46;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 45;
			this->label2->Text = L"Pr�nom :";
			// 
			// textBox_last_name
			// 
			this->textBox_last_name->Location = System::Drawing::Point(135, 91);
			this->textBox_last_name->Name = L"textBox_last_name";
			this->textBox_last_name->Size = System::Drawing::Size(257, 22);
			this->textBox_last_name->TabIndex = 48;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 94);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 16);
			this->label3->TabIndex = 47;
			this->label3->Text = L"Nom :";
			// 
			// checkBox_deli
			// 
			this->checkBox_deli->AutoSize = true;
			this->checkBox_deli->Location = System::Drawing::Point(86, 250);
			this->checkBox_deli->Name = L"checkBox_deli";
			this->checkBox_deli->Size = System::Drawing::Size(83, 20);
			this->checkBox_deli->TabIndex = 49;
			this->checkBox_deli->Text = L"Livraison";
			this->checkBox_deli->UseVisualStyleBackColor = true;
			// 
			// checkBox_bill
			// 
			this->checkBox_bill->AutoSize = true;
			this->checkBox_bill->Location = System::Drawing::Point(225, 250);
			this->checkBox_bill->Name = L"checkBox_bill";
			this->checkBox_bill->Size = System::Drawing::Size(95, 20);
			this->checkBox_bill->TabIndex = 50;
			this->checkBox_bill->Text = L"Facturation";
			this->checkBox_bill->UseVisualStyleBackColor = true;
			// 
			// button_enter
			// 
			this->button_enter->Location = System::Drawing::Point(116, 276);
			this->button_enter->Name = L"button_enter";
			this->button_enter->Size = System::Drawing::Size(161, 61);
			this->button_enter->TabIndex = 51;
			this->button_enter->Text = L"Valider !";
			this->button_enter->UseVisualStyleBackColor = true;
			this->button_enter->Click += gcnew System::EventHandler(this, &CreateAddressForm::button_enter_Click);
			// 
			// CreateAddressForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(413, 349);
			this->Controls->Add(this->button_enter);
			this->Controls->Add(this->checkBox_bill);
			this->Controls->Add(this->checkBox_deli);
			this->Controls->Add(this->textBox_last_name);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_first_name);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_city);
			this->Controls->Add(this->textBox_postalcode);
			this->Controls->Add(this->textBox_address);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label1);
			this->Name = L"CreateAddressForm";
			this->Text = L"CreateAddressForm";
			this->Load += gcnew System::EventHandler(this, &CreateAddressForm::CreateAddressForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CreateAddressForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oAddress = gcnew NS_Comp_Svc::CLservAddress();
		this->oPeople = gcnew NS_Comp_Svc::CLservPeople();
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
			this->textBox_postalcode->Text,
			this->textBox_city->Text);
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
};
}