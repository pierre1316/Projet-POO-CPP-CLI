#pragma once
#include "CLpeople.h"

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
	public ref class CreateCustomerForm : public System::Windows::Forms::Form
	{
	public:
		CreateCustomerForm(void)
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
		~CreateCustomerForm()
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
	private: NS_Comp_Svc::CLpeople^ oPeople;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			this->radiobutt_new_people = (gcnew System::Windows::Forms::RadioButton());
			this->radiobutt_existing_people = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// radiobutt_new_people
			// 
			this->radiobutt_new_people->AutoSize = true;
			this->radiobutt_new_people->Location = System::Drawing::Point(49, 31);
			this->radiobutt_new_people->Margin = System::Windows::Forms::Padding(4);
			this->radiobutt_new_people->Name = L"radiobutt_new_people";
			this->radiobutt_new_people->Size = System::Drawing::Size(139, 20);
			this->radiobutt_new_people->TabIndex = 0;
			this->radiobutt_new_people->TabStop = true;
			this->radiobutt_new_people->Text = L"Nouvelle personne";
			this->radiobutt_new_people->UseVisualStyleBackColor = true;
			this->radiobutt_new_people->CheckedChanged += gcnew System::EventHandler(this, &CreateCustomerForm::radiobutt_new_people_CheckedChanged);
			// 
			// radiobutt_existing_people
			// 
			this->radiobutt_existing_people->AutoSize = true;
			this->radiobutt_existing_people->Location = System::Drawing::Point(221, 31);
			this->radiobutt_existing_people->Margin = System::Windows::Forms::Padding(4);
			this->radiobutt_existing_people->Name = L"radiobutt_existing_people";
			this->radiobutt_existing_people->Size = System::Drawing::Size(139, 20);
			this->radiobutt_existing_people->TabIndex = 1;
			this->radiobutt_existing_people->TabStop = true;
			this->radiobutt_existing_people->Text = L"Personne existante";
			this->radiobutt_existing_people->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(424, 31);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(202, 24);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->Text = L"Selectionnez une personne";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CreateCustomerForm::comboBox1_SelectedIndexChanged);
			// 
			// CreateCustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(697, 326);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->radiobutt_existing_people);
			this->Controls->Add(this->radiobutt_new_people);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"CreateCustomerForm";
			this->Text = L"CreateCustomerForm";
			this->Load += gcnew System::EventHandler(this, &CreateCustomerForm::CreateCustomerForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void CreateCustomerForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->oPeople = gcnew NS_Comp_Svc::CLpeople();
		this->oDs = this->oPeople->selectAllPeople("rsl");
		this->comboBox1->Items->Clear();
		for (int i = 0; i < this->oDs->Tables["rsl"]->Rows->Count; i++) {
			this->comboBox1->Items->Add(
				this->oDs->Tables["rsl"]->Rows[i]->ItemArray[0]->ToString() + " " + 
				this->oDs->Tables["rsl"]->Rows[i]->ItemArray[1]->ToString() + " " +
				this->oDs->Tables["rsl"]->Rows[i]->ItemArray[2]->ToString());
		}
		
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radiobutt_new_people_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->radiobutt_existing_people->Checked) {
		this->comboBox1->Enabled = false;
	}
	else {
		this->comboBox1->Enabled = true;
	}
}
};
}
