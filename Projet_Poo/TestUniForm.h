#pragma once
namespace ProjetPoo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de TestUniForm
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
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~TestUniForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Svc::People^ oPeople;
	private: NS_Comp_Svc::Staff^ oStaff;
	private: NS_Comp_Svc::Customer^ oCust;
	private: NS_Comp_Svc::Address^ oAddress;
	private: System::Data::DataSet^ Cities;


	private: System::Windows::Forms::Button^ button_delete;
	private: System::Windows::Forms::TextBox^ textBox_fn;
	private: System::Windows::Forms::TextBox^ textBox_ln;
	private: System::Windows::Forms::TextBox^ textBox_sup;
	private: System::Windows::Forms::TextBox^ textBox_hd;
	private: System::Windows::Forms::TextBox^ textBox_address;
	private: System::Windows::Forms::TextBox^ textBox_cp;
	private: System::Windows::Forms::TextBox^ textBox_city;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox_n;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox9;








	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->textBox_fn = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ln = (gcnew System::Windows::Forms::TextBox());
			this->textBox_sup = (gcnew System::Windows::Forms::TextBox());
			this->textBox_hd = (gcnew System::Windows::Forms::TextBox());
			this->textBox_address = (gcnew System::Windows::Forms::TextBox());
			this->textBox_cp = (gcnew System::Windows::Forms::TextBox());
			this->textBox_city = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_n = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button_delete
			// 
			this->button_delete->Location = System::Drawing::Point(184, 274);
			this->button_delete->Margin = System::Windows::Forms::Padding(4);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(184, 82);
			this->button_delete->TabIndex = 2;
			this->button_delete->Text = L"Suppression donnée";
			this->button_delete->UseVisualStyleBackColor = true;
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
			this->textBox_sup->Size = System::Drawing::Size(200, 22);
			this->textBox_sup->TabIndex = 20;
			this->textBox_sup->TextChanged += gcnew System::EventHandler(this, &TestUniForm::textBox2_TextChanged);
			// 
			// textBox_hd
			// 
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
			// 
			// textBox_city
			// 
			this->textBox_city->Location = System::Drawing::Point(184, 183);
			this->textBox_city->Name = L"textBox_city";
			this->textBox_city->Size = System::Drawing::Size(200, 22);
			this->textBox_city->TabIndex = 24;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(78, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 15);
			this->textBox1->TabIndex = 25;
			this->textBox1->Text = L"Prénom : ";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &TestUniForm::textBox1_TextChanged);
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
			this->textBox3->Text = L"Supérieur hiérarchique : ";
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
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &TestUniForm::textBox4_TextChanged);
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
			this->textBox_n->Location = System::Drawing::Point(184, 230);
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
			this->textBox9->Location = System::Drawing::Point(60, 233);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(118, 15);
			this->textBox9->TabIndex = 33;
			this->textBox9->Text = L"Combien de fois \? ";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &TestUniForm::textBox9_TextChanged);
			// 
			// TestUniForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(593, 380);
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
		combo_superior_Load();
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void combo_superior_Load(System::Void) {
	this->textBox_sup->Text = L"Sélectionnez un supérieur";
	this->oDs = this->oStaff->selectAllStaff("staff");
	this->textBox_sup->Items->Clear();
	for (int i = 0; i < this->oDs->Tables["staff"]->Rows->Count; i++) {
		this->textBox_sup->Items->Add(
			this->oDs->Tables["staff"]->Rows[i]->ItemArray[0]->ToString() + " " +
			this->oDs->Tables["staff"]->Rows[i]->ItemArray[1]->ToString() + " " +
			this->oDs->Tables["staff"]->Rows[i]->ItemArray[2]->ToString());
	}
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	this->textBox_ln->Text = this->oDs->Tables["rsl"]->Rows[index]->ItemArray[1]->ToString();
	this->textBox_fn->Text = this->oDs->Tables["rsl"]->Rows[index]->ItemArray[2]->ToString();
}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}


