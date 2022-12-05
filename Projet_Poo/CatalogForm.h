#pragma once
#include "CreateCategoryForm.h"
#include "CreateItemForm.h"
#include "OrderForm.h"
#include "PaymentForm.h"

namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CatalogForm
	/// </summary>
	public ref class CatalogForm : public System::Windows::Forms::Form
	{
	public:
		CatalogForm(void)
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
		~CatalogForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_create_item;
	private: System::Windows::Forms::Button^ button_create_category;
	private: System::Windows::Forms::Button^ button_orders;
	private: System::Windows::Forms::Button^ button_payments;
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
			this->button_create_item = (gcnew System::Windows::Forms::Button());
			this->button_create_category = (gcnew System::Windows::Forms::Button());
			this->button_orders = (gcnew System::Windows::Forms::Button());
			this->button_payments = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_create_item
			// 
			this->button_create_item->Location = System::Drawing::Point(10, 84);
			this->button_create_item->Name = L"button_create_item";
			this->button_create_item->Size = System::Drawing::Size(138, 67);
			this->button_create_item->TabIndex = 2;
			this->button_create_item->Text = L"Gérer les Article";
			this->button_create_item->UseVisualStyleBackColor = true;
			this->button_create_item->Click += gcnew System::EventHandler(this, &CatalogForm::button_create_item_Click);
			// 
			// button_create_category
			// 
			this->button_create_category->Location = System::Drawing::Point(10, 11);
			this->button_create_category->Name = L"button_create_category";
			this->button_create_category->Size = System::Drawing::Size(138, 67);
			this->button_create_category->TabIndex = 1;
			this->button_create_category->Text = L"Gérer les Catégorie";
			this->button_create_category->UseVisualStyleBackColor = true;
			this->button_create_category->Click += gcnew System::EventHandler(this, &CatalogForm::button_create_category_Click);
			// 
			// button_orders
			// 
			this->button_orders->Location = System::Drawing::Point(10, 157);
			this->button_orders->Name = L"button_orders";
			this->button_orders->Size = System::Drawing::Size(138, 67);
			this->button_orders->TabIndex = 3;
			this->button_orders->Text = L"Gérer les Commandes";
			this->button_orders->UseVisualStyleBackColor = true;
			this->button_orders->Click += gcnew System::EventHandler(this, &CatalogForm::button_orders_Click);
			// 
			// button_payments
			// 
			this->button_payments->Location = System::Drawing::Point(10, 230);
			this->button_payments->Name = L"button_payments";
			this->button_payments->Size = System::Drawing::Size(138, 67);
			this->button_payments->TabIndex = 4;
			this->button_payments->Text = L"Gérer les Moyens de Paiment";
			this->button_payments->UseVisualStyleBackColor = true;
			this->button_payments->Click += gcnew System::EventHandler(this, &CatalogForm::button_payments_Click);
			// 
			// CatalogForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1061, 570);
			this->Controls->Add(this->button_payments);
			this->Controls->Add(this->button_orders);
			this->Controls->Add(this->button_create_category);
			this->Controls->Add(this->button_create_item);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"CatalogForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"CatalogForm";
			this->Load += gcnew System::EventHandler(this, &CatalogForm::CatalogForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CatalogForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_create_category_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateCategoryForm form;
		this->Hide();
		form.ShowDialog();

	}
	private: System::Void button_create_item_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateItemForm itemform;
		this->Hide();
		itemform.ShowDialog();
	}
	private: System::Void button_orders_Click(System::Object^ sender, System::EventArgs^ e) {
		OrderForm orderform;
		this->Hide();
		orderform.ShowDialog();
	}
private: System::Void button_payments_Click(System::Object^ sender, System::EventArgs^ e) {
	PaymentForm paymentform;
	this->Hide();
	paymentform.ShowDialog();
}
};
}
