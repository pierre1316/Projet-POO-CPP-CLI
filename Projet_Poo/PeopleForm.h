#pragma once
#include "CreateCustomerForm.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de PeopleForm
	/// </summary>
	public ref class PeopleForm : public System::Windows::Forms::Form
	{
	public:
		PeopleForm(void)
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
		~PeopleForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_create_customer;
	protected:

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
			this->button_create_customer = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_create_customer
			// 
			this->button_create_customer->Location = System::Drawing::Point(12, 12);
			this->button_create_customer->Name = L"button_create_customer";
			this->button_create_customer->Size = System::Drawing::Size(138, 67);
			this->button_create_customer->TabIndex = 0;
			this->button_create_customer->Text = L"Créer un \r\nClient";
			this->button_create_customer->UseVisualStyleBackColor = true;
			this->button_create_customer->Click += gcnew System::EventHandler(this, &PeopleForm::button_create_customer_Click);
			// 
			// PeopleForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1061, 570);
			this->Controls->Add(this->button_create_customer);
			this->Name = L"PeopleForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"PeopleForm";
			this->Load += gcnew System::EventHandler(this, &PeopleForm::PeopleForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PeopleForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_create_customer_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateCustomerForm^ newcustForm = gcnew CreateCustomerForm();
		newcustForm->ShowDialog();
	}

	};
}
