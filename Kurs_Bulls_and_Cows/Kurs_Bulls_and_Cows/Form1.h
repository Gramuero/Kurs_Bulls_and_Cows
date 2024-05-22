#pragma once
#include <cstdlib>
#include <string>
#include <cstring>
#include <time.h>
namespace Kurs_Bulls_and_Cows {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;


	

	int Random() {
	srand(time(NULL));
    bool bmap[10];
    for(int i = 0; i != 10; i++) bmap[i] = true;
    int n, number = 0;
    for(int i = 1; i != 10000; i*= 10)
    {
        do{
               n=1+ rand()%9;
        }while(bmap[n]== false);
        bmap[n]=false;
        number += i * n;

    } return number;
}


	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripMenuItem^  rules;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  game;
	private: System::Windows::Forms::ToolStripMenuItem^  exit;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Panel^  panel2;





	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;




	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox2;






















	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->rules = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->game = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// rules
			// 
			this->rules->AutoSize = false;
			this->rules->Name = L"rules";
			this->rules->Size = System::Drawing::Size(101, 113);
			this->rules->Text = L"Правила игры";
			this->rules->Click += gcnew System::EventHandler(this, &Form1::rules_Click);
			// 
			// game
			// 
			this->game->AutoSize = false;
			this->game->Name = L"game";
			this->game->Size = System::Drawing::Size(101, 113);
			this->game->Text = L"Играть";
			this->game->Click += gcnew System::EventHandler(this, &Form1::game_Click);
			// 
			// exit
			// 
			this->exit->AutoSize = false;
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(101, 113);
			this->exit->Text = L"Выход";
			this->exit->Click += gcnew System::EventHandler(this, &Form1::exit_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->AutoSize = false;
			this->menuStrip1->BackColor = System::Drawing::Color::Azure;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::Right;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->rules, this->game, 
				this->exit});
			this->menuStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::VerticalStackWithOverflow;
			this->menuStrip1->Location = System::Drawing::Point(521, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(86, 345);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// panel1
			// 
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(199, 373);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(151, 70);
			this->panel1->TabIndex = 1;
			this->panel1->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(10, 14);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(423, 313);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = resources->GetString(L"textBox1.Text");
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Azure;
			this->panel2->Controls->Add(this->groupBox3);
			this->panel2->Controls->Add(this->groupBox2);
			this->panel2->Controls->Add(this->groupBox1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->numericUpDown1);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->textBox13);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Location = System::Drawing::Point(26, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(492, 324);
			this->panel2->TabIndex = 2;
			this->panel2->Visible = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->numericUpDown4);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->numericUpDown5);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Location = System::Drawing::Point(262, 154);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(198, 126);
			this->groupBox3->TabIndex = 38;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Второй игрок/Компьютер";
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->BackColor = System::Drawing::Color::AliceBlue;
			this->numericUpDown4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown4->Enabled = false;
			this->numericUpDown4->Location = System::Drawing::Point(52, 90);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {4, 0, 0, 0});
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->ReadOnly = true;
			this->numericUpDown4->Size = System::Drawing::Size(36, 20);
			this->numericUpDown4->TabIndex = 33;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(94, 92);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(46, 13);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Коровы";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(11, 92);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 13);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Быки";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(11, 48);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(82, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Назвать число";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->BackColor = System::Drawing::Color::AliceBlue;
			this->numericUpDown5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown5->Enabled = false;
			this->numericUpDown5->Location = System::Drawing::Point(149, 90);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {4, 0, 0, 0});
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->ReadOnly = true;
			this->numericUpDown5->Size = System::Drawing::Size(37, 20);
			this->numericUpDown5->TabIndex = 34;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(99, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Загаданное число";
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Enabled = false;
			this->textBox6->Location = System::Drawing::Point(116, 46);
			this->textBox6->MaxLength = 4;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(64, 20);
			this->textBox6->TabIndex = 12;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Enabled = false;
			this->textBox5->Location = System::Drawing::Point(116, 13);
			this->textBox5->MaxLength = 4;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(64, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->numericUpDown3);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(262, 16);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(198, 121);
			this->groupBox2->TabIndex = 37;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Первый игрок";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->BackColor = System::Drawing::Color::AliceBlue;
			this->numericUpDown3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown3->Enabled = false;
			this->numericUpDown3->Location = System::Drawing::Point(149, 81);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {4, 0, 0, 0});
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->ReadOnly = true;
			this->numericUpDown3->Size = System::Drawing::Size(37, 20);
			this->numericUpDown3->TabIndex = 32;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::Color::AliceBlue;
			this->numericUpDown2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown2->Enabled = false;
			this->numericUpDown2->Location = System::Drawing::Point(54, 81);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {4, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->ReadOnly = true;
			this->numericUpDown2->Size = System::Drawing::Size(37, 20);
			this->numericUpDown2->TabIndex = 31;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(97, 83);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(46, 13);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Коровы";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(14, 83);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Быки";
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(119, 48);
			this->textBox4->MaxLength = 4;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(64, 20);
			this->textBox4->TabIndex = 10;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 50);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Назвать число";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Enabled = false;
			this->textBox3->Location = System::Drawing::Point(119, 11);
			this->textBox3->MaxLength = 4;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(64, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Загаданное число";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(14, 16);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(184, 101);
			this->groupBox1->TabIndex = 36;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Режим игры";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(15, 73);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(132, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Игрок против игрока";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(15, 36);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(160, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Игрок против компьютера";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 202);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Кол-во ходов";
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(14, 137);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 34);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Новая игра";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::AliceBlue;
			this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown1->Enabled = false;
			this->numericUpDown1->Location = System::Drawing::Point(89, 200);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->ReadOnly = true;
			this->numericUpDown1->Size = System::Drawing::Size(95, 20);
			this->numericUpDown1->TabIndex = 30;
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(126, 239);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 25);
			this->button3->TabIndex = 35;
			this->button3->Text = L"Завершить игру";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::AliceBlue;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox13->Enabled = false;
			this->textBox13->Location = System::Drawing::Point(14, 286);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(148, 20);
			this->textBox13->TabIndex = 29;
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(14, 239);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 25);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Сделать ход";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(138, 22);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(279, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"ДОБРО ПОЖАЛОВАТЬ В ИГРУ \"БЫКИ И КОРОВЫ\"";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(607, 345);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Быки и коровы";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown5))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void rules_Click(System::Object^  sender, System::EventArgs^  e) {
				 textBox2->Visible = false;
				 panel2->Visible = false;
				 panel1->Location = System::Drawing::Point(23, 10);
				 panel1->Size = System::Drawing::Size(481, 313);
				 panel1->Visible = true;
			 }
private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();	
		 }
private: System::Void game_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Visible = false;
			 panel1->Visible = false;
			 panel2->Location = System::Drawing::Point(23, 10);
			 panel2->Size = System::Drawing::Size(492, 324);
			 panel2->Visible = true;
		 }


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			 int i,j;
			 button3->Enabled=true;
			 button1->Enabled=false;
			 textBox3->PasswordChar='#';
			 textBox5->PasswordChar='#';
			 textBox6->PasswordChar='x';
			 numericUpDown1->Value=0;
			 textBox3->Text="";
			 textBox4->Text="";
			 textBox5->Text="";
			 textBox6->Text="";
			 textBox13->Text="";
			 numericUpDown2->Value=0;
			 numericUpDown3->Value=0;
			 numericUpDown4->Value=0;
			 numericUpDown5->Value=0;
			 radioButton1->Enabled=false;
			 radioButton2->Enabled=false;
			
			 
			 if (radioButton1->Checked){
				 String^ a;

				 textBox3->Enabled=true;
				 textBox4->Enabled=true;
				 a=Convert::ToString(Random());
			
				 textBox5->Text=a;
			     textBox6->Text=Convert::ToString(Random());
				 
				 textBox6->PasswordChar='x';
			 }
			 if (radioButton2->Checked){
				 textBox3->Enabled=true;
				 textBox4->Enabled=true;
				 textBox5->Enabled=true;
				 textBox6->Enabled=true;
				 textBox5->Text="";
			     textBox6->Text="";
				 textBox6->PasswordChar=0;}
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i, j;
			 textBox3->Enabled=false;
			 textBox5->Enabled=false;
			 numericUpDown1->Value+=1;
			 numericUpDown2->Value=0;
			 numericUpDown3->Value=0;
			 numericUpDown4->Value=0;
			 numericUpDown5->Value=0;
			 for(i=0;i<4;i++){
				 if (textBox4->Text->Substring(i,1)==textBox5->Text->Substring(i,1)){
					 numericUpDown2->Value+=1;}}
			 for(i=0;i<4;i++){
				 for(j=0;j<4;j++){
					 if((textBox4->Text->Substring(i,1)==textBox5->Text->Substring(j,1))&&(i!=j)){
						 numericUpDown3->Value+=1;}}}
			 for(i=0;i<4;i++){
				 if (textBox6->Text->Substring(i,1)==textBox3->Text->Substring(i,1)){
					 numericUpDown4->Value+=1;}}
			 for(i=0;i<4;i++){
				 for(j=0;j<4;j++){
					 if((textBox6->Text->Substring(i,1)==textBox3->Text->Substring(j,1))&&(i!=j)){
						 numericUpDown5->Value+=1;}}}
			 if (numericUpDown2->Value==4){
				 textBox3->PasswordChar=0;
				 textBox5->PasswordChar=0;
				 textBox13->Text="Победил первый игрок!";
				
				 button2->Visible=false;
			
				 textBox4->Enabled=false;
			
				 textBox6->Enabled=false;
			     }
			 if (numericUpDown4->Value==4){
				 textBox3->PasswordChar=0;
				 textBox5->PasswordChar=0;
				 if (radioButton2->Checked){
					 textBox13->Text="Победил второй игрок!";}
				 if (radioButton1->Checked){
					 textBox13->Text="Победил Компьютер!";}
				 button2->Visible=false;
			 
				 textBox4->Enabled=false;
			
				 textBox6->Enabled=false;}
			 if ((numericUpDown2->Value==4)&&(numericUpDown4->Value==4)){
				 textBox3->PasswordChar=0;
				 textBox5->PasswordChar=0;
				 textBox13->Text="Ничья!";
				 button2->Visible=false;
	
				 textBox4->Enabled=false;

				 textBox6->Enabled=false;}
			 if (radioButton1->Checked){
				 textBox6->Text=Convert::ToString(Random());
			
			 }






		 }
private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				if (radioButton1->Checked || radioButton2->Checked){
					button1->Enabled=true;
				}
				else{
					button1->Enabled=false;}
			 
			 
		 }




private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (radioButton1->Checked || radioButton2->Checked){
				 button1->Enabled=true;
			 }
			 else{
				 button1->Enabled=false;}
		
		  

		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(textBox3->Text->Length==4&&textBox4->Text->Length==4&&textBox5->Text->Length==4&&textBox6->Text->Length==4){
				button2->Enabled=true;}
			 else{
				 button2->Enabled=false;}
			
			
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 numericUpDown1->Value=0;
			 textBox3->Text="";
			 textBox4->Text="";
			 textBox5->Text="";
			 textBox6->Text="";
			 textBox3->Enabled=false;
			 textBox4->Enabled=false;
			 textBox5->Enabled=false;
			 textBox6->Enabled=false;
			 textBox13->Text="";
			 button3->Enabled=false;
			 numericUpDown2->Value=0;
			 numericUpDown3->Value=0;
			 numericUpDown4->Value=0;
			 numericUpDown5->Value=0;
			 radioButton1->Enabled=true;
			 radioButton2->Enabled=true;
			 radioButton1->Checked=false;
			 radioButton2->Checked=false;
			 button2->Visible=true;


		 }
};
}

