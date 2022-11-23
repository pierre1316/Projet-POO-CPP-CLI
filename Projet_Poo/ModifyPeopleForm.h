#pragma once
#include "CLservStaff.h"
#include "CLservCustomer.h"
#include "CLpeople.h"

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
			this->SuspendLayout();
			// 
			// ModifyPeopleForm
			// 
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"ModifyPeopleForm";
			this->Load += gcnew System::EventHandler(this, &ModifyPeopleForm::ModifyPeopleForm_Load);
			this->ResumeLayout(false);

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
		listbox_people_load();
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
