#pragma once
#include "CLpeople.h"
#include "CLservStaff.h"
#include "CLservCustomer.h"


namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ModifyPeopleForm
	/// </summary>
	public ref class ModifyPeopleForm : public System::Windows::Forms::Form
	{
	public:
		ModifyPeopleForm(void)
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
	private: NS_Comp_Svc::CLservCustomer^ oCust;
	private: NS_Comp_Svc::CLservStaff^ oStaff;
	private: NS_Comp_Svc::CLservPeople^ oPeo;
	private: System::Data::DataSet^ oDs;


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



	protected:

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
			this->SuspendLayout();
			// 
			// listbox_people
			// 
			this->listbox_people->FormattingEnabled = true;
			this->listbox_people->ItemHeight = 16;
			this->listbox_people->Location = System::Drawing::Point(12, 70);
			this->listbox_people->Name = L"listbox_people";
			this->listbox_people->Size = System::Drawing::Size(203, 244);
			this->listbox_people->TabIndex = 0;
			this->listbox_people->SelectedIndexChanged += gcnew System::EventHandler(this, &ModifyPeopleForm::listbox_people_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Choisir une personne à modifier";
			// 
			// radio_customer
			// 
			this->radio_customer->AutoSize = true;
			this->radio_customer->Checked = true;
			this->radio_customer->Location = System::Drawing::Point(28, 44);
			this->radio_customer->Name = L"radio_customer";
			this->radio_customer->Size = System::Drawing::Size(61, 20);
			this->radio_customer->TabIndex = 2;
			this->radio_customer->TabStop = true;
			this->radio_customer->Text = L"Client";
			this->radio_customer->UseVisualStyleBackColor = true;
			this->radio_customer->CheckedChanged += gcnew System::EventHandler(this, &ModifyPeopleForm::radio_customer_CheckedChanged);
			// 
			// radio_staff
			// 
			this->radio_staff->AutoSize = true;
			this->radio_staff->Location = System::Drawing::Point(112, 44);
			this->radio_staff->Name = L"radio_staff";
			this->radio_staff->Size = System::Drawing::Size(89, 20);
			this->radio_staff->TabIndex = 3;
			this->radio_staff->Text = L"Personnel";
			this->radio_staff->UseVisualStyleBackColor = true;
			// 
			// button_address
			// 
			this->button_address->Location = System::Drawing::Point(536, 12);
			this->button_address->Name = L"button_address";
			this->button_address->Size = System::Drawing::Size(149, 52);
			this->button_address->TabIndex = 31;
			this->button_address->Text = L"Ajouter des adresses";
			this->button_address->UseVisualStyleBackColor = true;
			// 
			// button_register
			// 
			this->button_register->Location = System::Drawing::Point(370, 12);
			this->button_register->Name = L"button_register";
			this->button_register->Size = System::Drawing::Size(149, 52);
			this->button_register->TabIndex = 30;
			this->button_register->Text = L"Enregistrer";
			this->button_register->UseVisualStyleBackColor = true;
			this->button_register->Click += gcnew System::EventHandler(this, &ModifyPeopleForm::button_register_Click);
			// 
			// date_hiring
			// 
			this->date_hiring->CustomFormat = L"";
			this->date_hiring->Enabled = false;
			this->date_hiring->Location = System::Drawing::Point(411, 243);
			this->date_hiring->Name = L"date_hiring";
			this->date_hiring->Size = System::Drawing::Size(257, 22);
			this->date_hiring->TabIndex = 29;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(260, 248);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 16);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Date d\'embauche :";
			// 
			// combo_superior
			// 
			this->combo_superior->Enabled = false;
			this->combo_superior->FormattingEnabled = true;
			this->combo_superior->Location = System::Drawing::Point(411, 214);
			this->combo_superior->Name = L"combo_superior";
			this->combo_superior->Size = System::Drawing::Size(257, 24);
			this->combo_superior->TabIndex = 27;
			this->combo_superior->Text = L"Sélectionnez un Supérieur";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(229, 217);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(151, 16);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Supérieur Hiérarchique :\r\n";
			// 
			// date_birthday
			// 
			this->date_birthday->Location = System::Drawing::Point(411, 182);
			this->date_birthday->Name = L"date_birthday";
			this->date_birthday->Size = System::Drawing::Size(257, 22);
			this->date_birthday->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(251, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(129, 16);
			this->label3->TabIndex = 24;
			this->label3->Text = L"Date de Naissance :";
			// 
			// textBox_first_name
			// 
			this->textBox_first_name->Location = System::Drawing::Point(411, 151);
			this->textBox_first_name->Name = L"textBox_first_name";
			this->textBox_first_name->Size = System::Drawing::Size(257, 22);
			this->textBox_first_name->TabIndex = 23;
			// 
			// textBox_last_name
			// 
			this->textBox_last_name->Location = System::Drawing::Point(411, 117);
			this->textBox_last_name->Name = L"textBox_last_name";
			this->textBox_last_name->Size = System::Drawing::Size(257, 22);
			this->textBox_last_name->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(320, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Prénom :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(338, 123);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 16);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Nom :";
			// 
			// ModifyPeopleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(697, 326);
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
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listbox_people);
			this->Name = L"ModifyPeopleForm";
			this->Text = L"ModifyPeopleForm";
			this->Load += gcnew System::EventHandler(this, &ModifyPeopleForm::ModifyPeopleForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
		this->oCust = gcnew NS_Comp_Svc::CLservCustomer();
		this->oStaff = gcnew NS_Comp_Svc::CLservStaff();
		this->oPeo = gcnew NS_Comp_Svc::CLservPeople();
		listbox_people_load();
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radio_customer_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		listbox_people_load();
	}
private: System::Void listbox_people_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int index = this->listbox_people->SelectedIndex;
	this->textBox_last_name->Text = this->oDs->Tables["rsl"]->Rows[index]->ItemArray[1]->ToString();
	this->textBox_first_name->Text = this->oDs->Tables["rsl"]->Rows[index]->ItemArray[2]->ToString();
}
private: System::Void button_register_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = this->listbox_people->SelectedIndex;
	int idPeople = System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[index]->ItemArray[0]);
	this->oPeo->modifyPeople(idPeople, this->textBox_last_name->Text, this->textBox_first_name->Text);
	//if (this->radio_customer->Checked) {

	//}
}
};
}
