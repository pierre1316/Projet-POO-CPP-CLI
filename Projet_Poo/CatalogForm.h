#pragma once

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
			this->SuspendLayout();
			// 
			// button_create_item
			// 
			this->button_create_item->Location = System::Drawing::Point(13, 13);
			this->button_create_item->Margin = System::Windows::Forms::Padding(4);
			this->button_create_item->Name = L"button_create_item";
			this->button_create_item->Size = System::Drawing::Size(184, 82);
			this->button_create_item->TabIndex = 2;
			this->button_create_item->Text = L"Créer un Article";
			this->button_create_item->UseVisualStyleBackColor = true;
			// 
			// CatalogForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1415, 702);
			this->Controls->Add(this->button_create_item);
			this->Name = L"CatalogForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"CatalogForm";
			this->Load += gcnew System::EventHandler(this, &CatalogForm::CatalogForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CatalogForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
