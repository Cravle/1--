#pragma once

namespace TicTak {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ btnTic1;
	private: System::Windows::Forms::Button^ btnNewGame;
	private: System::Windows::Forms::Button^ btnReset;



























	private: System::Windows::Forms::Label^ lblPlayerX;
	private: System::Windows::Forms::Label^ lblPlayerO;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnTic9;
	private: System::Windows::Forms::Button^ btnTic6;
	private: System::Windows::Forms::Button^ btnTic3;
	private: System::Windows::Forms::Button^ btnTic8;
	private: System::Windows::Forms::Button^ btnTic5;
	private: System::Windows::Forms::Button^ btnTic2;
	private: System::Windows::Forms::Button^ btnTic7;
	private: System::Windows::Forms::Button^ btnTic4;






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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnTic9 = (gcnew System::Windows::Forms::Button());
			this->btnTic6 = (gcnew System::Windows::Forms::Button());
			this->btnTic3 = (gcnew System::Windows::Forms::Button());
			this->btnTic8 = (gcnew System::Windows::Forms::Button());
			this->btnTic5 = (gcnew System::Windows::Forms::Button());
			this->btnTic2 = (gcnew System::Windows::Forms::Button());
			this->btnTic7 = (gcnew System::Windows::Forms::Button());
			this->btnTic4 = (gcnew System::Windows::Forms::Button());
			this->btnTic1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->btnNewGame = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->lblPlayerX = (gcnew System::Windows::Forms::Label());
			this->lblPlayerO = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1634, 120);
			this->panel1->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(535, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(667, 91);
			this->label5->TabIndex = 1;
			this->label5->Text = L"TicTacToe Game";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(12, 160);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1634, 556);
			this->panel2->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->btnTic9);
			this->panel4->Controls->Add(this->btnTic6);
			this->panel4->Controls->Add(this->btnTic3);
			this->panel4->Controls->Add(this->btnTic8);
			this->panel4->Controls->Add(this->btnTic5);
			this->panel4->Controls->Add(this->btnTic2);
			this->panel4->Controls->Add(this->btnTic7);
			this->panel4->Controls->Add(this->btnTic4);
			this->panel4->Controls->Add(this->btnTic1);
			this->panel4->Location = System::Drawing::Point(14, 13);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(736, 500);
			this->panel4->TabIndex = 2;
			// 
			// btnTic9
			// 
			this->btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTic9->Location = System::Drawing::Point(490, 335);
			this->btnTic9->Name = L"btnTic9";
			this->btnTic9->Size = System::Drawing::Size(215, 156);
			this->btnTic9->TabIndex = 0;
			this->btnTic9->UseVisualStyleBackColor = false;
			this->btnTic9->Click += gcnew System::EventHandler(this, &MyForm::btnTic9_Click);
			// 
			// btnTic6
			// 
			this->btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTic6->Location = System::Drawing::Point(490, 173);
			this->btnTic6->Name = L"btnTic6";
			this->btnTic6->Size = System::Drawing::Size(215, 156);
			this->btnTic6->TabIndex = 0;
			this->btnTic6->UseVisualStyleBackColor = false;
			this->btnTic6->Click += gcnew System::EventHandler(this, &MyForm::btnTic6_Click);
			// 
			// btnTic3
			// 
			this->btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTic3->Location = System::Drawing::Point(490, 11);
			this->btnTic3->Name = L"btnTic3";
			this->btnTic3->Size = System::Drawing::Size(215, 156);
			this->btnTic3->TabIndex = 0;
			this->btnTic3->UseVisualStyleBackColor = false;
			this->btnTic3->Click += gcnew System::EventHandler(this, &MyForm::btnTic3_Click);
			// 
			// btnTic8
			// 
			this->btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTic8->Location = System::Drawing::Point(269, 334);
			this->btnTic8->Name = L"btnTic8";
			this->btnTic8->Size = System::Drawing::Size(215, 156);
			this->btnTic8->TabIndex = 0;
			this->btnTic8->UseVisualStyleBackColor = false;
			this->btnTic8->Click += gcnew System::EventHandler(this, &MyForm::btnTic8_Click);
			// 
			// btnTic5
			// 
			this->btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTic5->Location = System::Drawing::Point(269, 172);
			this->btnTic5->Name = L"btnTic5";
			this->btnTic5->Size = System::Drawing::Size(215, 156);
			this->btnTic5->TabIndex = 0;
			this->btnTic5->UseVisualStyleBackColor = false;
			this->btnTic5->Click += gcnew System::EventHandler(this, &MyForm::btnTic5_Click);
			// 
			// btnTic2
			// 
			this->btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTic2->Location = System::Drawing::Point(269, 10);
			this->btnTic2->Name = L"btnTic2";
			this->btnTic2->Size = System::Drawing::Size(215, 156);
			this->btnTic2->TabIndex = 0;
			this->btnTic2->UseVisualStyleBackColor = false;
			this->btnTic2->Click += gcnew System::EventHandler(this, &MyForm::btnTic2_Click);
			// 
			// btnTic7
			// 
			this->btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTic7->Location = System::Drawing::Point(48, 334);
			this->btnTic7->Name = L"btnTic7";
			this->btnTic7->Size = System::Drawing::Size(215, 156);
			this->btnTic7->TabIndex = 0;
			this->btnTic7->UseVisualStyleBackColor = false;
			this->btnTic7->Click += gcnew System::EventHandler(this, &MyForm::btnTic7_Click);
			// 
			// btnTic4
			// 
			this->btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTic4->Location = System::Drawing::Point(48, 172);
			this->btnTic4->Name = L"btnTic4";
			this->btnTic4->Size = System::Drawing::Size(215, 156);
			this->btnTic4->TabIndex = 0;
			this->btnTic4->UseVisualStyleBackColor = false;
			this->btnTic4->Click += gcnew System::EventHandler(this, &MyForm::btnTic4_Click);
			// 
			// btnTic1
			// 
			this->btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnTic1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnTic1->Location = System::Drawing::Point(48, 10);
			this->btnTic1->Name = L"btnTic1";
			this->btnTic1->Size = System::Drawing::Size(215, 156);
			this->btnTic1->TabIndex = 0;
			this->btnTic1->UseVisualStyleBackColor = false;
			this->btnTic1->Click += gcnew System::EventHandler(this, &MyForm::btnTic1_Click);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Location = System::Drawing::Point(761, 13);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(871, 500);
			this->panel3->TabIndex = 1;
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Controls->Add(this->btnNewGame);
			this->panel7->Controls->Add(this->btnReset);
			this->panel7->Location = System::Drawing::Point(18, 258);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(828, 219);
			this->panel7->TabIndex = 3;
			// 
			// btnNewGame
			// 
			this->btnNewGame->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnNewGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNewGame->Location = System::Drawing::Point(3, 102);
			this->btnNewGame->Name = L"btnNewGame";
			this->btnNewGame->Size = System::Drawing::Size(818, 93);
			this->btnNewGame->TabIndex = 10;
			this->btnNewGame->Text = L"New game";
			this->btnNewGame->UseVisualStyleBackColor = false;
			this->btnNewGame->Click += gcnew System::EventHandler(this, &MyForm::btnNewGame_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnReset->Location = System::Drawing::Point(3, 3);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(818, 93);
			this->btnReset->TabIndex = 9;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->lblPlayerX);
			this->panel6->Controls->Add(this->lblPlayerO);
			this->panel6->Controls->Add(this->label2);
			this->panel6->Controls->Add(this->label1);
			this->panel6->Location = System::Drawing::Point(18, 3);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(828, 195);
			this->panel6->TabIndex = 2;
			// 
			// lblPlayerX
			// 
			this->lblPlayerX->BackColor = System::Drawing::Color::White;
			this->lblPlayerX->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPlayerX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblPlayerX->Location = System::Drawing::Point(505, 5);
			this->lblPlayerX->Name = L"lblPlayerX";
			this->lblPlayerX->Size = System::Drawing::Size(299, 70);
			this->lblPlayerX->TabIndex = 2;
			this->lblPlayerX->Text = L"0";
			this->lblPlayerX->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblPlayerO
			// 
			this->lblPlayerO->BackColor = System::Drawing::Color::White;
			this->lblPlayerO->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblPlayerO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblPlayerO->Location = System::Drawing::Point(505, 103);
			this->lblPlayerO->Name = L"lblPlayerO";
			this->lblPlayerO->Size = System::Drawing::Size(299, 70);
			this->lblPlayerO->TabIndex = 2;
			this->lblPlayerO->Text = L"0";
			this->lblPlayerO->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(30, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(256, 69);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Player X";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(30, 104);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 69);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Player O";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CadetBlue;
			this->ClientSize = System::Drawing::Size(1682, 753);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);

		}
		Boolean checker;
		int plusone;
#pragma endregion
		void Enable_False()
		{
			btnTic1->Enabled = false;
			btnTic2->Enabled = false;
			btnTic3->Enabled = false;
			btnTic4->Enabled = false;
			btnTic5->Enabled = false;
			btnTic6->Enabled = false;
			btnTic7->Enabled = false;
			btnTic8->Enabled = false;
			btnTic9->Enabled = false;

		}

		void score()
		{
			if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::PowderBlue;
				btnTic2->BackColor = System::Drawing::Color::PowderBlue;
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic1->Text == "X" && btnTic4->Text == "X" && btnTic7->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::Pink;
				btnTic4->BackColor = System::Drawing::Color::Pink;
				btnTic7->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic1->Text == "X" && btnTic5->Text == "X" && btnTic9->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "X")
			{
				btnTic4->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic6->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "X")
			{
				btnTic7->BackColor = System::Drawing::Color::Azure;
				btnTic8->BackColor = System::Drawing::Color::Azure;
				btnTic9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic3->Text == "X" && btnTic5->Text == "X" && btnTic7->Text == "X")
			{
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic7->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic2->Text == "X" && btnTic5->Text == "X" && btnTic8->Text == "X")
			{
				btnTic2->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic8->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic3->Text == "X" && btnTic6->Text == "X" && btnTic9->Text == "X")
			{
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				btnTic6->BackColor = System::Drawing::Color::PowderBlue;
				btnTic9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player X", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}


			///////////////////////////////////////////////////////////////////////////////////////

			if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::PowderBlue;
				btnTic2->BackColor = System::Drawing::Color::PowderBlue;
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic1->Text == "O" && btnTic4->Text == "O" && btnTic7->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::Pink;
				btnTic4->BackColor = System::Drawing::Color::Pink;
				btnTic7->BackColor = System::Drawing::Color::Pink;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic1->Text == "O" && btnTic5->Text == "O" && btnTic9->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "O")
			{
				btnTic4->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic6->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "O")
			{
				btnTic7->BackColor = System::Drawing::Color::Azure;
				btnTic8->BackColor = System::Drawing::Color::Azure;
				btnTic9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic3->Text == "O" && btnTic5->Text == "O" && btnTic7->Text == "O")
			{
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic7->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic2->Text == "O" && btnTic5->Text == "O" && btnTic8->Text == "O")
			{
				btnTic2->BackColor = System::Drawing::Color::PowderBlue;
				btnTic5->BackColor = System::Drawing::Color::PowderBlue;
				btnTic8->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerO->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}

			if (btnTic3->Text == "O" && btnTic6->Text == "O" && btnTic9->Text == "O")
			{
				btnTic3->BackColor = System::Drawing::Color::PowderBlue;
				btnTic6->BackColor = System::Drawing::Color::PowderBlue;
				btnTic9->BackColor = System::Drawing::Color::PowderBlue;
				MessageBox::Show("The Winner is Player O", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusone = int::Parse(lblPlayerO->Text);
				lblPlayerX->Text = Convert::ToString(plusone + 1);
				Enable_False();
			}
			///////////////////////////////////////////////////////////





		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void btnTic1_Click(System::Object^ sender, System::EventArgs^ e)
	{

		if (checker == false)
		{
			btnTic1->Text = "X";
			checker = true;
		}
		else
		{
			btnTic1->Text = "O";
			checker = false;
		}

		score();
		btnTic1->Enabled = false;
	}

	private: System::Void btnTic2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checker == false)
		{
			btnTic2->Text = "X";
			checker = true;
		}
		else
		{
			btnTic2->Text = "O";
			checker = false;
		}

		score();
		btnTic2->Enabled = false;
			 
	}

	private: System::Void btnTic3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (checker == false)
		{
			btnTic3->Text = "X";
			checker = true;
		}
		else
		{
			btnTic3->Text = "O";
			checker = false;
		}

		score();
		btnTic3->Enabled = false;
	}

	private: System::Void btnTic4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (checker == false)
		{
			btnTic4->Text = "X";
			checker = true;
		}
		else
		{
			btnTic4->Text = "O";
			checker = false;
		}

		score();
		btnTic4->Enabled = false;
	}



	private: System::Void btnTic5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (checker == false)
		{
			btnTic5->Text = "X";
			checker = true;
		}
		else
		{
			btnTic5->Text = "O";
			checker = false;
		}

		score();
		btnTic5->Enabled = false;
	}

	private: System::Void btnTic6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checker == false)
		{
			btnTic6->Text = "X";
			checker = true;
		}
		else
		{
			btnTic6->Text = "O";
			checker = false;
		}

		score();
		btnTic6->Enabled = false;
	}

	private: System::Void btnTic7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (checker == false)
		{
			btnTic7->Text = "X";
			checker = true;
		}
		else
		{
			btnTic7->Text = "O";
			checker = false;
		}

		score();
		btnTic7->Enabled = false;
	}

	   private: System::Void btnTic8_Click(System::Object^ sender, System::EventArgs^ e) 
	   {
		   if (checker == false)
		   {
			   btnTic8->Text = "X";
			   checker = true;
		   }
		   else
		   {
			   btnTic8->Text = "O";
			   checker = false;
		   }

		   score();
		   btnTic8->Enabled = false;
	   }

	private: System::Void btnTic9_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (checker == false)
		{
			btnTic9->Text = "X";
			checker = true;
		}
		else
		{
			btnTic9->Text = "O";
			checker = false;
		}

		score();
		btnTic9->Enabled = false;
	}


	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		btnTic1->Enabled = true;
		btnTic2->Enabled = true;
		btnTic3->Enabled = true;
		btnTic4->Enabled = true;
		btnTic5->Enabled = true;
		btnTic6->Enabled = true;
		btnTic7->Enabled = true;
		btnTic8->Enabled = true;
		btnTic9->Enabled = true;

		btnTic1->Text = "";
		btnTic2->Text = "";
		btnTic3->Text = "";
		btnTic4->Text = "";
		btnTic5->Text = "";
		btnTic6->Text = "";
		btnTic7->Text = "";
		btnTic8->Text = "";
		btnTic9->Text = "";

		btnNewGame->Enabled = true;

		btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;

		};

private: System::Void btnNewGame_Click(System::Object^ sender, System::EventArgs^ e) {
	btnTic1->Enabled = true;
	btnTic2->Enabled = true;
	btnTic3->Enabled = true;
	btnTic4->Enabled = true;
	btnTic5->Enabled = true;
	btnTic6->Enabled = true;
	btnTic7->Enabled = true;
	btnTic8->Enabled = true;
	btnTic9->Enabled = true;

	btnTic1->Text = "";
	btnTic2->Text = "";
	btnTic3->Text = "";
	btnTic4->Text = "";
	btnTic5->Text = "";
	btnTic6->Text = "";
	btnTic7->Text = "";
	btnTic8->Text = "";
	btnTic9->Text = "";

	lblPlayerO->Text = "0";
	lblPlayerX->Text = "0";

	btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
	btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;

}

};
}
