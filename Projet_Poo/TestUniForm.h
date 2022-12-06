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
	/// Description r�sum�e de TestUniForm
	/// </summary>
	public ref class TestUniForm : public System::Windows::Forms::Form
	{
	public:
		TestUniForm(void)
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
		~TestUniForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Svc::People^ oPeople;
	private: NS_Comp_Svc::People^ oPeo;
	private: NS_Comp_Svc::Staff^ oStaff;
	private: NS_Comp_Svc::Customer^ oCust;
	private: NS_Comp_Svc::Address^ oAddress;
	private: System::Data::DataSet^ Cities;
	private: int id_City;


	private: System::Windows::Forms::Button^ button_delete;
	private: System::Windows::Forms::Button^ button_register;
	private: System::Windows::Forms::TextBox^ textBox_fn;
	private: System::Windows::Forms::TextBox^ textBox_ln;
	private: System::Windows::Forms::ComboBox^ textBox_sup;
	private: System::Windows::Forms::DateTimePicker^ textBox_hd;
	private: System::Windows::Forms::TextBox^ textBox_address;
	private: System::Windows::Forms::TextBox^ textBox_cp;
	private: System::Windows::Forms::ComboBox^ textBox_city;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox_n;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::TextBox^ textBox_username;
	private: System::Windows::Forms::TextBox^ textBox_password;


	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::ComboBox^ comboBox_role;
	private: System::Windows::Forms::TextBox^ textBox8;












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
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->textBox_fn = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ln = (gcnew System::Windows::Forms::TextBox());
			this->textBox_sup = (gcnew System::Windows::Forms::ComboBox());
			this->textBox_hd = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox_address = (gcnew System::Windows::Forms::TextBox());
			this->textBox_cp = (gcnew System::Windows::Forms::TextBox());
			this->textBox_city = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_n = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button_register = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->textBox_username = (gcnew System::Windows::Forms::TextBox());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox_role = (gcnew System::Windows::Forms::ComboBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button_delete
			// 
			this->button_delete->Location = System::Drawing::Point(594, 9);
			this->button_delete->Margin = System::Windows::Forms::Padding(4);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(200, 86);
			this->button_delete->TabIndex = 2;
			this->button_delete->Text = L"Suppression donn�e";
			this->button_delete->UseVisualStyleBackColor = true;
			this->button_delete->Click += gcnew System::EventHandler(this, &TestUniForm::button_delete_Click);
			// 
			// textBox_fn
			// 
			this->textBox_fn->Location = System::Drawing::Point(184, 9);
			this->textBox_fn->Name = L"textBox_fn";
			this->textBox_fn->Size = System::Drawing::Size(200, 22);
			this->textBox_fn->TabIndex = 18;
			// 
			// textBox_ln
			// 
			this->textBox_ln->Location = System::Drawing::Point(184, 40);
			this->textBox_ln->Name = L"textBox_ln";
			this->textBox_ln->Size = System::Drawing::Size(200, 22);
			this->textBox_ln->TabIndex = 19;
			// 
			// textBox_sup
			// 
			this->textBox_sup->Location = System::Drawing::Point(184, 71);
			this->textBox_sup->Name = L"textBox_sup";
			this->textBox_sup->Size = System::Drawing::Size(200, 24);
			this->textBox_sup->TabIndex = 20;
			this->textBox_sup->Text = L"S�lectionnez un Sup�rieur";
			// 
			// textBox_hd
			// 
			this->textBox_hd->CustomFormat = L"";
			this->textBox_hd->Location = System::Drawing::Point(184, 99);
			this->textBox_hd->Name = L"textBox_hd";
			this->textBox_hd->Size = System::Drawing::Size(200, 22);
			this->textBox_hd->TabIndex = 21;
			// 
			// textBox_address
			// 
			this->textBox_address->Location = System::Drawing::Point(184, 127);
			this->textBox_address->Name = L"textBox_address";
			this->textBox_address->Size = System::Drawing::Size(200, 22);
			this->textBox_address->TabIndex = 22;
			// 
			// textBox_cp
			// 
			this->textBox_cp->Location = System::Drawing::Point(184, 155);
			this->textBox_cp->Name = L"textBox_cp";
			this->textBox_cp->Size = System::Drawing::Size(200, 22);
			this->textBox_cp->TabIndex = 23;
			this->textBox_cp->Click += gcnew System::EventHandler(this, &TestUniForm::textBox_cp_Click);
			// 
			// textBox_city
			// 
			this->textBox_city->Location = System::Drawing::Point(184, 183);
			this->textBox_city->Name = L"textBox_city";
			this->textBox_city->Size = System::Drawing::Size(200, 24);
			this->textBox_city->TabIndex = 24;
			this->textBox_city->SelectedIndexChanged += gcnew System::EventHandler(this, &TestUniForm::textBox_city_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(78, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 15);
			this->textBox1->TabIndex = 25;
			this->textBox1->Text = L"Pr�nom : ";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(78, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 15);
			this->textBox2->TabIndex = 26;
			this->textBox2->Text = L"Nom : ";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(34, 74);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(144, 15);
			this->textBox3->TabIndex = 27;
			this->textBox3->Text = L"Sup�rieur hi�rarchique : ";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(60, 102);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(118, 15);
			this->textBox4->TabIndex = 28;
			this->textBox4->Text = L"Date d\'embauche: ";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(78, 130);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 15);
			this->textBox5->TabIndex = 29;
			this->textBox5->Text = L"Adresse : ";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Location = System::Drawing::Point(78, 158);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 15);
			this->textBox6->TabIndex = 30;
			this->textBox6->Text = L"Code Postal : ";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox_n
			// 
			this->textBox_n->Location = System::Drawing::Point(184, 318);
			this->textBox_n->Name = L"textBox_n";
			this->textBox_n->Size = System::Drawing::Size(200, 22);
			this->textBox_n->TabIndex = 32;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Location = System::Drawing::Point(78, 186);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 15);
			this->textBox7->TabIndex = 31;
			this->textBox7->Text = L"Ville : ";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Location = System::Drawing::Point(60, 318);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(118, 15);
			this->textBox9->TabIndex = 33;
			this->textBox9->Text = L"Combien de fois \? ";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button_register
			// 
			this->button_register->Location = System::Drawing::Point(412, 9);
			this->button_register->Name = L"button_register";
			this->button_register->Size = System::Drawing::Size(162, 86);
			this->button_register->TabIndex = 34;
			this->button_register->Text = L"Enregistrer";
			this->button_register->UseVisualStyleBackColor = true;
			this->button_register->Click += gcnew System::EventHandler(this, &TestUniForm::button_register_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(413, 99);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(161, 212);
			this->listBox1->TabIndex = 35;
			// 
			// textBox_username
			// 
			this->textBox_username->Location = System::Drawing::Point(184, 213);
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->Size = System::Drawing::Size(200, 22);
			this->textBox_username->TabIndex = 36;
			this->textBox_username->TextChanged += gcnew System::EventHandler(this, &TestUniForm::textBox_username_TextChanged);
			// 
			// textBox_password
			// 
			this->textBox_password->Location = System::Drawing::Point(184, 241);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->Size = System::Drawing::Size(200, 22);
			this->textBox_password->TabIndex = 37;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Location = System::Drawing::Point(78, 216);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 15);
			this->textBox11->TabIndex = 38;
			this->textBox11->Text = L"Username : ";
			this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Location = System::Drawing::Point(78, 244);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 15);
			this->textBox12->TabIndex = 39;
			this->textBox12->Text = L"Password : ";
			this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// comboBox_role
			// 
			this->comboBox_role->Location = System::Drawing::Point(184, 269);
			this->comboBox_role->Name = L"comboBox_role";
			this->comboBox_role->Size = System::Drawing::Size(200, 24);
			this->comboBox_role->TabIndex = 40;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Location = System::Drawing::Point(78, 272);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 15);
			this->textBox8->TabIndex = 41;
			this->textBox8->Text = L"R�le : ";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// TestUniForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(807, 352);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->comboBox_role);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->textBox_username);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button_register);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox_n);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox_city);
			this->Controls->Add(this->textBox_cp);
			this->Controls->Add(this->textBox_address);
			this->Controls->Add(this->textBox_hd);
			this->Controls->Add(this->textBox_sup);
			this->Controls->Add(this->textBox_ln);
			this->Controls->Add(this->textBox_fn);
			this->Controls->Add(this->button_delete);
			this->Name = L"TestUniForm";
			this->Text = L"TestUniForm";
			this->Load += gcnew System::EventHandler(this, &TestUniForm::TestUniForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TestUniForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oPeople = gcnew NS_Comp_Svc::People();
		this->oStaff = gcnew NS_Comp_Svc::Staff();
		this->oCust = gcnew NS_Comp_Svc::Customer();
		this->oAddress = gcnew NS_Comp_Svc::Address();
		textBox_sup_Selected();
		listBox1_Load();

	}


	private: System::Void textBox_sup_Selected(System::Void) {
		this->textBox_sup->Text = L"S�lectionnez un sup�rieur";
		this->oDs = this->oStaff->selectAllStaff("staff");
		this->textBox_sup->Items->Clear();
		for (int i = 0; i < this->oDs->Tables["staff"]->Rows->Count; i++) {
			this->textBox_sup->Items->Add(
				this->oDs->Tables["staff"]->Rows[i]->ItemArray[0]->ToString() + " " +
				this->oDs->Tables["staff"]->Rows[i]->ItemArray[1]->ToString() + " " +
				this->oDs->Tables["staff"]->Rows[i]->ItemArray[2]->ToString());

		}
	}
	private: System::Void textBox_city_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox_city->SelectedIndex != -1) {
			this->id_City = Convert::ToInt32(this->Cities->Tables["cities"]->Rows[this->textBox_city->SelectedIndex]->ItemArray[0]);
			this->textBox_cp->Text = this->Cities->Tables["cities"]->Rows[this->textBox_city->SelectedIndex]->ItemArray[1]->ToString();
		}
	}
	private: System::Void button_register_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Data::DataRow^ row;
		int idPeople;
		int n = Convert::ToInt32(this->textBox_n->Text);
		for (int i; i < n; i++) {
			row = this->oPeople->createPeople(this->textBox_fn->Text, this->textBox_ln->Text);
			idPeople = System::Convert::ToInt32(row->ItemArray[0]);

			int indexStaff;
			int idSuperior = -1;
			if (this->textBox_sup->SelectedIndex != -1) {
				this->oDs = this->oStaff->selectAllStaff("staff");
				indexStaff = this->textBox_sup->SelectedIndex;
				idSuperior = System::Convert::ToInt32(this->oDs->Tables["staff"]->Rows[indexStaff]->ItemArray[0]);
			}
			System::DateTime^ date = this->textBox_hd->Value;
			System::String^ dateString = System::Convert::ToString(date->Month) + "/";
			dateString += System::Convert::ToString(date->Day) + "/";
			dateString += System::Convert::ToString(date->Year);
			this->oStaff->createStaff(idPeople, dateString, idSuperior, "a", "1234", 1);
			int idAddress = this->oAddress->createAddress("", "", this->textBox_address->Text, this->id_City);
			this->oStaff->updateStaffAddress(idPeople, idAddress);
		}
		textBox_sup_Selected();
	}
	private: System::Void textBox_cp_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Cities = this->oAddress->selectCityFromPostalcode("cities", this->textBox_cp->Text);
		this->textBox_city->Items->Clear();
		for (int i = 0; i < this->Cities->Tables["cities"]->Rows->Count; i++) {
			this->textBox_city->Items->Add(this->Cities->Tables["cities"]->Rows[i]->ItemArray[2]->ToString());
		}
	}

	private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = Convert::ToInt32(this->textBox_n->Text);
		for (int i; i < n; i++) {
			int	idPeople = System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[-1]->ItemArray[0]);
			this->oDs = this->oCust->getTheCustomer("rsl", idPeople);
			this->oStaff->deleteStaff(idPeople);
			this->oPeo->deletePeople(idPeople);
		}
	}
	private: System::Void listBox1_Load(System::Void) {
		this->oDs = this->oStaff->selectAllStaff("rsl");
		this->listBox1->Items->Clear();
		for (int i = 0; i < this->oDs->Tables["rsl"]->Rows->Count; i++) {
			this->listBox1->Items->Add(
				this->oDs->Tables["rsl"]->Rows[i]->ItemArray[0]->ToString() + " " +
				this->oDs->Tables["rsl"]->Rows[i]->ItemArray[1]->ToString() + " " +
				this->oDs->Tables["rsl"]->Rows[i]->ItemArray[2]->ToString());
		}
	}

private: System::Void textBox_username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox_role_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oDs = this->oStaff->selectRoles("roles");
	this->comboBox_role->Items->Clear();
	for (int i = 0; i < this->oDs->Tables["roles"]->Rows->Count; i++) {
		this->comboBox_role->Items->Add(
			this->oDs->Tables["roles"]->Rows[i]->ItemArray[1]->ToString()
		);
	
}
};
}
