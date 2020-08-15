#pragma once

namespace ttttt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::Button^ btnRes;
	private: System::Windows::Forms::Button^ btnClear;



	private: System::Windows::Forms::Label^ lblRecom;
	private: System::Windows::Forms::TextBox^ tbxRec;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->btnRes = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->lblRecom = (gcnew System::Windows::Forms::Label());
			this->tbxRec = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(80, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(83, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(80, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Ваш вес(кг)";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(83, 77);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(205, 22);
			this->textBox2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(80, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Ваш рост(см)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(83, 162);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(205, 22);
			this->textBox3->TabIndex = 1;
			// 
			// btnRes
			// 
			this->btnRes->Location = System::Drawing::Point(83, 303);
			this->btnRes->Name = L"btnRes";
			this->btnRes->Size = System::Drawing::Size(95, 23);
			this->btnRes->TabIndex = 3;
			this->btnRes->Text = L"Вычеслить";
			this->btnRes->UseVisualStyleBackColor = true;
			this->btnRes->Click += gcnew System::EventHandler(this, &MyForm::btnRes_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(193, 303);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(95, 23);
			this->btnClear->TabIndex = 3;
			this->btnClear->Text = L"Очистить";
			this->btnClear->UseVisualStyleBackColor = true;
			// 
			// lblRecom
			// 
			this->lblRecom->AutoSize = true;
			this->lblRecom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblRecom->Location = System::Drawing::Point(80, 209);
			this->lblRecom->Name = L"lblRecom";
			this->lblRecom->Size = System::Drawing::Size(151, 25);
			this->lblRecom->TabIndex = 2;
			this->lblRecom->Text = L"Рекомендация";
			this->lblRecom->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// tbxRec
			// 
			this->tbxRec->Location = System::Drawing::Point(83, 257);
			this->tbxRec->Name = L"tbxRec";
			this->tbxRec->Size = System::Drawing::Size(205, 22);
			this->tbxRec->TabIndex = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(359, 405);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnRes);
			this->Controls->Add(this->lblRecom);
			this->Controls->Add(this->tbxRec);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnRes_Click(System::Object^ sender, System::EventArgs^ e) 

	{
	int weight = 0;
	int idealWeight = 0;
	int rost = 0;

	
	weight = std::stoi(textBox2->Text)
	}
};
}
