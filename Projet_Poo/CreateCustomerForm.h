#pragma once
#include "CLcad.h"
#include "CLmapPeople.h"

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
	private: System::Windows::Forms::ListBox^ listBox1;
	private: NS_Comp_Data::CLcad^ oCad;
	private: NS_Mapping::CLmapPeople^ mapPeople;
	private: System::Data::DataSet^ dataSet;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// radiobutt_new_people
			// 
			this->radiobutt_new_people->AutoSize = true;
			this->radiobutt_new_people->Location = System::Drawing::Point(37, 25);
			this->radiobutt_new_people->Name = L"radiobutt_new_people";
			this->radiobutt_new_people->Size = System::Drawing::Size(114, 17);
			this->radiobutt_new_people->TabIndex = 0;
			this->radiobutt_new_people->TabStop = true;
			this->radiobutt_new_people->Text = L"Nouvelle personne";
			this->radiobutt_new_people->UseVisualStyleBackColor = true;
			// 
			// radiobutt_existing_people
			// 
			this->radiobutt_existing_people->AutoSize = true;
			this->radiobutt_existing_people->Location = System::Drawing::Point(166, 25);
			this->radiobutt_existing_people->Name = L"radiobutt_existing_people";
			this->radiobutt_existing_people->Size = System::Drawing::Size(115, 17);
			this->radiobutt_existing_people->TabIndex = 1;
			this->radiobutt_existing_people->TabStop = true;
			this->radiobutt_existing_people->Text = L"Personne existante";
			this->radiobutt_existing_people->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(312, 25);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 17);
			this->listBox1->TabIndex = 2;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &CreateCustomerForm::listBox1_SelectedIndexChanged);
			this->listBox1->DataSource;
			// 
			// CreateCustomerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(523, 265);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->radiobutt_existing_people);
			this->Controls->Add(this->radiobutt_new_people);
			this->Name = L"CreateCustomerForm";
			this->Text = L"CreateCustomerForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		System::String^ sql = this->mapPeople->GetAllPeople();
		this->dataSet = this->oCad->getRows("rsl", sql);
		this->listBox1->DataSource = this->dataSet;
	}
	};
}
