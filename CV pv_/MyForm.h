#pragma once

namespace CVpv {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::IO;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
		  

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: int N;
	private: int M;
	private: List<List<double>^>^ matrix;
	private: List<List<double>^>^ matrix1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button21;


	protected:




	protected:


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::WhiteSmoke;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(863, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"X";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AccessibleName = L"MatrixGrid";
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::WindowFrame;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView1->Location = System::Drawing::Point(34, 268);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::PaleGreen;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::Color::White;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(250, 250);
			this->dataGridView1->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::PaleGreen;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(36, 62);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(85, 30);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::PaleGreen;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12.1F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(127, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 32);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Matrix size (n)";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->ForeColor = System::Drawing::Color::PaleGreen;
			this->button2->Location = System::Drawing::Point(282, 60);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 30);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Initializing";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->ForeColor = System::Drawing::Color::PaleGreen;
			this->button3->Location = System::Drawing::Point(412, 60);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 30);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Load";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AccessibleName = L"MatrixGrid";
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToResizeColumns = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::WindowFrame;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->ColumnHeadersVisible = false;
			this->dataGridView2->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView2->Location = System::Drawing::Point(323, 268);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::PaleGreen;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			dataGridViewCellStyle6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::Color::White;
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(250, 250);
			this->dataGridView2->TabIndex = 7;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AccessibleName = L"MatrixGrid";
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToResizeColumns = false;
			this->dataGridView3->AllowUserToResizeRows = false;
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::WindowFrame;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->ColumnHeadersVisible = false;
			this->dataGridView3->Cursor = System::Windows::Forms::Cursors::Hand;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::Color::Red;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView3->DefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView3->GridColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dataGridView3->Location = System::Drawing::Point(608, 268);
			this->dataGridView3->Name = L"dataGridView3";
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::Color::PaleGreen;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView3->RowHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 51;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::Color::White;
			this->dataGridView3->RowsDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(250, 250);
			this->dataGridView3->TabIndex = 8;
			// 
			// button4
			// 
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->ForeColor = System::Drawing::Color::PaleGreen;
			this->button4->Location = System::Drawing::Point(34, 208);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(103, 30);
			this->button4->TabIndex = 9;
			this->button4->Text = L"M + Numb";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->ForeColor = System::Drawing::Color::PaleGreen;
			this->button5->Location = System::Drawing::Point(143, 208);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(103, 30);
			this->button5->TabIndex = 10;
			this->button5->Text = L"M - Numb";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->ForeColor = System::Drawing::Color::PaleGreen;
			this->button6->Location = System::Drawing::Point(252, 208);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(103, 30);
			this->button6->TabIndex = 11;
			this->button6->Text = L"M + M";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->ForeColor = System::Drawing::Color::PaleGreen;
			this->button7->Location = System::Drawing::Point(361, 208);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(103, 30);
			this->button7->TabIndex = 12;
			this->button7->Text = L"M - M";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->ForeColor = System::Drawing::Color::PaleGreen;
			this->button8->Location = System::Drawing::Point(470, 208);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(103, 30);
			this->button8->TabIndex = 13;
			this->button8->Text = L"det";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->ForeColor = System::Drawing::Color::PaleGreen;
			this->button9->Location = System::Drawing::Point(579, 208);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(103, 30);
			this->button9->TabIndex = 14;
			this->button9->Text = L"M⁻¹";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->ForeColor = System::Drawing::Color::PaleGreen;
			this->button10->Location = System::Drawing::Point(688, 208);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(103, 30);
			this->button10->TabIndex = 15;
			this->button10->Text = L"Initializing";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->ForeColor = System::Drawing::Color::PaleGreen;
			this->button11->Location = System::Drawing::Point(688, 542);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(103, 30);
			this->button11->TabIndex = 22;
			this->button11->Text = L"Initializing";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->ForeColor = System::Drawing::Color::PaleGreen;
			this->button12->Location = System::Drawing::Point(579, 542);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(103, 30);
			this->button12->TabIndex = 21;
			this->button12->Text = L"Initializing";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->ForeColor = System::Drawing::Color::PaleGreen;
			this->button13->Location = System::Drawing::Point(470, 542);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(103, 30);
			this->button13->TabIndex = 20;
			this->button13->Text = L"Initializing";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->ForeColor = System::Drawing::Color::PaleGreen;
			this->button14->Location = System::Drawing::Point(361, 542);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(103, 30);
			this->button14->TabIndex = 19;
			this->button14->Text = L"M / M";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->ForeColor = System::Drawing::Color::PaleGreen;
			this->button15->Location = System::Drawing::Point(252, 542);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(103, 30);
			this->button15->TabIndex = 18;
			this->button15->Text = L"M * M";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->ForeColor = System::Drawing::Color::PaleGreen;
			this->button16->Location = System::Drawing::Point(143, 542);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(103, 30);
			this->button16->TabIndex = 17;
			this->button16->Text = L"M / Numb";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->ForeColor = System::Drawing::Color::PaleGreen;
			this->button17->Location = System::Drawing::Point(34, 542);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(103, 30);
			this->button17->TabIndex = 16;
			this->button17->Text = L"M * Numb";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->ForeColor = System::Drawing::Color::PaleGreen;
			this->button18->Location = System::Drawing::Point(541, 60);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(103, 30);
			this->button18->TabIndex = 23;
			this->button18->Text = L"Clear";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->ForeColor = System::Drawing::Color::PaleGreen;
			this->button19->Location = System::Drawing::Point(287, 268);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(32, 77);
			this->button19->TabIndex = 24;
			this->button19->Text = L"<";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->ForeColor = System::Drawing::Color::PaleGreen;
			this->button20->Location = System::Drawing::Point(287, 427);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(32, 77);
			this->button20->TabIndex = 25;
			this->button20->Text = L">";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(41, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 23);
			this->label2->TabIndex = 26;
			this->label2->Text = L"M - matrix";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Location = System::Drawing::Point(41, 158);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(140, 23);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Numb - number";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Location = System::Drawing::Point(409, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 23);
			this->label4->TabIndex = 28;
			this->label4->Text = L"ATENTION !!!";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label5->Location = System::Drawing::Point(393, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(447, 17);
			this->label5->TabIndex = 29;
			this->label5->Text = L"✵ don`t forget after each swap\\initializing to *Load* a new *M* matrix";
			// 
			// button21
			// 
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->ForeColor = System::Drawing::Color::PaleGreen;
			this->button21->Location = System::Drawing::Point(287, 363);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(32, 47);
			this->button21->TabIndex = 30;
			this->button21->Text = L"✧";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScrollMargin = System::Drawing::Size(20, 30);
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(909, 647);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Padding = System::Windows::Forms::Padding(20);
			this->RightToLeftLayout = true;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Program Axs";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	
private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "Matrix size (" + N + ")";
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Size = textBox1->Text;
	
	try {
		N = System::Convert::ToInt32(Size);
		InitM1(N,N);
		InitM2(N,N);
		InitM3(1, 1);
		
	}
	catch(...){
		textBox1->Text = "Try Again";
		MessageBox::Show("Input corect value", "Error",MessageBoxButtons::OKCancel, MessageBoxIcon::Error );
		textBox1->Text = "";
	}
	

	// Output to console using cout
	StreamWriter^ writer = gcnew StreamWriter(Console::OpenStandardOutput());
	Console::SetOut(writer);
	Console::WriteLine(Size);
	writer->Flush();


}

private: void InitM1(int a,int b) {
	int i = dataGridView1->Columns->Count;
	int m = N;
	int n = N;
	while (i<n)
	{
	dataGridView1->Columns->Add(gcnew DataGridViewTextBoxColumn());
	dataGridView1->Columns[i]->Width = 30;


	i++;
	}
	i = dataGridView1->Rows->Count;
	while (i < m)
	{
		dataGridView1->Rows->Add();
		dataGridView1->Rows[i]->Height = 30;

		i++;
	}
	if (n < dataGridView1->Columns->Count) {
		int i = dataGridView1->Columns->Count;

		while (i >n)
		{	
			i--;
			dataGridView1->Columns->RemoveAt(i);
			


			
		}
	}
	if (m < dataGridView1->Rows->Count) {
		int i = dataGridView1->Rows->Count;

		while (i > m)
		{
			i--;
			dataGridView1->Rows->RemoveAt(i);




		}
	}

	}

private: void InitM2(int a, int b) {
	int i = dataGridView2->Columns->Count;
	int m = N;
	int n = N;
	while (i < n)
	{
		dataGridView2->Columns->Add(gcnew DataGridViewTextBoxColumn());
		dataGridView2->Columns[i]->Width = 30;


		i++;
	}
	i = dataGridView2->Rows->Count;
	while (i < m)
	{
		dataGridView2->Rows->Add();
		dataGridView2->Rows[i]->Height = 30;

		i++;
	}
	if (n < dataGridView2->Columns->Count) {
		int i = dataGridView2->Columns->Count;

		while (i > n)
		{
			i--;
			dataGridView2->Columns->RemoveAt(i);




		}
	}
	if (m < dataGridView2->Rows->Count) {
		int i = dataGridView2->Rows->Count;

		while (i > m)
		{
			i--;
			dataGridView2->Rows->RemoveAt(i);




		}
	}

}

private: void InitM3(int a, int b) {
	int i = dataGridView3->Columns->Count;
	int m = N;
	int n = N;
	while (i < n)
	{
		dataGridView3->Columns->Add(gcnew DataGridViewTextBoxColumn());
		dataGridView3->Columns[i]->Width = 30;


		i++;
	}
	i = dataGridView3->Rows->Count;
	while (i < m)
	{
		dataGridView3->Rows->Add();
		dataGridView3->Rows[i]->Height = 30;

		i++;
	}
	if (n < dataGridView3->Columns->Count) {
		int i = dataGridView3->Columns->Count;

		while (i > n)
		{
			i--;
			dataGridView3->Columns->RemoveAt(i);




		}
	}
	if (m < dataGridView3->Rows->Count) {
		int i = dataGridView3->Rows->Count;

		while (i > m)
		{
			i--;
			dataGridView3->Rows->RemoveAt(i);




		}
	}

}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: void MatrixLoad() {
	for (int i = 0; i < dataGridView1->Columns->Count; i++) {
		for (int j = 0; j < dataGridView1->Rows->Count; j++) {
		;
			if (!dataGridView1->Rows[j]->Cells[i]->Value) {
				
				dataGridView1->Rows[j]->Cells[i]->Value = "0";
			}

		}
	}
	matrix = gcnew List<List<double>^>;
	for (int i = 0; i < dataGridView1->Columns->Count; i++) {
		
			List<double>^elemlist =  gcnew List<double>();
		
		for (int j = 0; j < dataGridView1->Rows->Count; j++) {
			double elem=0;
			
			try {
				String^ cellValue = dataGridView1->Rows[j]->Cells[i]->Value->ToString();
				if (!String::IsNullOrEmpty(cellValue)) {
					elem = System::Convert::ToDouble(cellValue);
				}
				elemlist->Add(elem);
			
			}
			catch (...) {
				int a=j+1, b=i+1;
				textBox1->Text = "M1 Index "+ a+" " + b;
				MessageBox::Show("Cell: " + a + " " + b, "Input corect value", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
				textBox1->Text = "";
				elemlist->Add(0);
			}
			
			

		}
		try {
			matrix->Add(elemlist);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred while adding the row to the matrix: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "L-d is done" ;
	MatrixLoad();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Text = textBox1->Text;
	double Numb;

	try {
		Numb = System::Convert::ToDouble(Text);
		
		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			List<double>^ row = matrix[i];
			for (int j = 0; j < dataGridView1->Columns->Count; j++) {
				dataGridView2->Rows[j]->Cells[i]->Value =  row[j]+Numb;
				
				
			}
		}
		

	}
	catch (...) {
		textBox1->Text = "Try Again";
		MessageBox::Show("Input corect value", "Error", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		textBox1->Text = "";
	}


}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	int size = N;
	N = 0;
	InitM1(1,1);
	InitM2(1,1);
	InitM3(1,1);
	N = size;
	InitM1(1, 1);
	InitM2(1, 1);
	InitM3(1, 1);
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	swapL();
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	swapR();
}
private: void swapL() {
		for (int i = 0; i < dataGridView2->Columns->Count; i++) {
			for (int j = 0; j < dataGridView2->Rows->Count; j++) {
				;
				if (!dataGridView2->Rows[j]->Cells[i]->Value) {

					dataGridView2->Rows[j]->Cells[i]->Value = "0";
				}

			}
		}
		for (int i = 0; i < dataGridView1->Columns->Count; i++) {
			for (int j = 0; j < dataGridView1->Rows->Count; j++) {
				
				

				dataGridView1->Rows[j]->Cells[i]->Value = dataGridView2->Rows[j]->Cells[i]->Value;

				

			}
		}


	
	}
private: void swapR() {
		for (int i = 0; i < dataGridView2->Columns->Count; i++) {
			for (int j = 0; j < dataGridView2->Rows->Count; j++) {
				;


				dataGridView2->Rows[j]->Cells[i]->Value = dataGridView1->Rows[j]->Cells[i]->Value;
				dataGridView1->Rows[j]->Cells[i]->Value = "0";


			}
		}
	
	}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Text = textBox1->Text;
	double Numb;

	try {
		Numb = System::Convert::ToDouble(Text);

		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			List<double>^ row = matrix[i];
			for (int j = 0; j < dataGridView1->Columns->Count; j++) {
				dataGridView2->Rows[j]->Cells[i]->Value = row[j] - Numb;


			}
		}


	}
	catch (...) {
		textBox1->Text = "Try Again";
		MessageBox::Show("Input corect value", "Error", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		textBox1->Text = "";
	}


}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Text = textBox1->Text;
	double Numb;

	try {
		Numb = System::Convert::ToDouble(Text);

		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			List<double>^ row = matrix[i];
			for (int j = 0; j < dataGridView1->Columns->Count; j++) {
				dataGridView2->Rows[j]->Cells[i]->Value = row[j] * Numb;


			}
		}


	}
	catch (...) {
		textBox1->Text = "Try Again";
		MessageBox::Show("Input corect value", "Error", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		textBox1->Text = "";
	}

}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Text = textBox1->Text;
	double Numb;

	try {
		Numb = System::Convert::ToDouble(Text);

		for (int i = 0; i < dataGridView1->Rows->Count; i++) {
			List<double>^ row = matrix[i];
			for (int j = 0; j < dataGridView1->Columns->Count; j++) {
				dataGridView2->Rows[j]->Cells[i]->Value = row[j] / Numb;


			}
		}


	}
	catch (...) {
		textBox1->Text = "Try Again";
		MessageBox::Show("Input corect value", "Error", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		textBox1->Text = "";
	}

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	for (int i = 0; i < dataGridView2->Columns->Count; i++) {
		for (int j = 0; j < dataGridView2->Rows->Count; j++) {
			;
			if (!dataGridView2->Rows[j]->Cells[i]->Value) {

				dataGridView2->Rows[j]->Cells[i]->Value = "0";
			}

		}
	}

	try{
		
		double elem;

		for (int i = 0; i < dataGridView1->Columns->Count; i++) {
			


			List<double>^ row = matrix[i];
			for (int j = 0; j < dataGridView1->Rows->Count; j++) {
				elem = 0;

				try {
					String^ cellValue;
					
						
						
						cellValue = dataGridView2->Rows[j]->Cells[i]->Value->ToString();
					
						elem = System::Convert::ToDouble(cellValue);
						dataGridView3->Rows[j]->Cells[i]->Value = row[j] + elem;
					



				}
				catch (...) {
					int a = i + 1;
					int b = j + 1;
					textBox1->Text = "M2 Index " + a + " " + b;
					MessageBox::Show("Cell: " + a + " " + b, "Input corect value", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
					textBox1->Text = "";


				}

			}



		}
	}
	catch (...) {
		textBox1->Text = "Seriosly ?";
		MessageBox::Show("You forget to *Load*", "M1 Load", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		textBox1->Text = "";

		
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {


	for (int i = 0; i < dataGridView2->Columns->Count; i++) {
		for (int j = 0; j < dataGridView2->Rows->Count; j++) {
			;
			if (!dataGridView2->Rows[j]->Cells[i]->Value) {

				dataGridView2->Rows[j]->Cells[i]->Value = "0";
			}

		}
	}

	try {

		double elem;

		for (int i = 0; i < dataGridView1->Columns->Count; i++) {



			List<double>^ row = matrix[i];
			for (int j = 0; j < dataGridView1->Rows->Count; j++) {
				elem = 0;

				try {
					String^ cellValue;



					cellValue = dataGridView2->Rows[j]->Cells[i]->Value->ToString();

					elem = System::Convert::ToDouble(cellValue);
					dataGridView3->Rows[j]->Cells[i]->Value = row[j] - elem;




				}
				catch (...) {
					int a = i + 1;
					int b = j + 1;
					textBox1->Text = "M2 Index " + a + " " + b;
					MessageBox::Show("Cell: " + a + " " + b, "Input corect value", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
					textBox1->Text = "";


				}

			}



		}
	}
	catch (...) {
		textBox1->Text = "Seriosly ?";
		MessageBox::Show("You forget to *Load*", "M1 Load", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		textBox1->Text = "";


	}
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	
	swapL();
	for (int i = 0; i < dataGridView1->Columns->Count; i++) {
		for (int j = 0; j < dataGridView1->Rows->Count; j++) {
			;
			if (!dataGridView1->Rows[j]->Cells[i]->Value) {

				dataGridView1->Rows[j]->Cells[i]->Value = "0";
			}

		}
	}
	//transpose();
	try
	{

	
	
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {
		List<double>^ row = matrix[i];
		for (int j = 0; j < dataGridView1->Columns->Count; j++) {
			dataGridView2->Rows[j]->Cells[i]->Value = row[j];


		}
	}
	
	MatrixLoad();
	}
	catch (...)
	{
		textBox1->Text = "Seriosly ?";
		MessageBox::Show("You forget to *Load*", "M1 Load", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
		textBox1->Text = "";



	}

}
private: void transpose() {
	
	int rows = matrix->Count;
	int columns = matrix[0]->Count;
	List<List<double>^>^ matriX = gcnew List<List<double>^>;

		

		for (int i = 0; i < rows; i++) {
				
				
				List<double>^ elemlist = gcnew List<double>();
				for (int j = 0; j < columns; j++) {
					try {
						List<double>^ row = matrix[j];
						elemlist->Add( row[i]);
					}
					catch (...) {
						textBox1->Text = "code:red";
					}

				}
				matriX->Add(elemlist);
			
		}
		for (int i = 0; i < rows; i++) {

			List<double>^ row = matrix[i];
			List<double>^ elemlist = matriX[i];
			for (int j = 0; j < columns; j++) {
				try {
					
					row[j]=elemlist[j];
				}
				catch (...) {
					textBox1->Text = "code:blue";
				}

			}
			

		}
	
	

	
	   
}

private: void Matrix1Load() {
	for (int i = 0; i < dataGridView2->Columns->Count; i++) {
		for (int j = 0; j < dataGridView2->Rows->Count; j++) {
			;
			if (!dataGridView2->Rows[j]->Cells[i]->Value) {

				dataGridView2->Rows[j]->Cells[i]->Value = "0";
			}

		}
	}
	matrix1 = gcnew List<List<double>^>;
	for (int i = 0; i < dataGridView2->Columns->Count; i++) {

		List<double>^ elemlist = gcnew List<double>();

		for (int j = 0; j < dataGridView2->Rows->Count; j++) {
			double elem = 0;

			try {
				String^ cellValue = dataGridView2->Rows[i]->Cells[j]->Value->ToString();
				if (!String::IsNullOrEmpty(cellValue)) {
					elem = System::Convert::ToDouble(cellValue);
				}
				elemlist->Add(elem);

			}
			catch (...) {
				int a = j + 1, b = i + 1;
				textBox1->Text = "M1 Index " + a + " " + b;
				MessageBox::Show("Cell: " + a + " " + b, "Input corect value", MessageBoxButtons::OKCancel, MessageBoxIcon::Error);
				textBox1->Text = "";
				elemlist->Add(0);
			}



		}
		try {
			matrix1->Add(elemlist);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred while adding the row to the matrix: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	transpose();
	int m1 = matrix->Count;         // Number of rows in matrix1
	int n1 = matrix[0]->Count;      // Number of columns in matrix1
	Matrix1Load();
	int m2 = matrix1->Count;         // Number of rows in matrix2
	int n2 = matrix1[0]->Count;      // Number of columns in matrix2

	if (n1 != m2) {
		MessageBox::Show("Invalid matrix dimensions for multiplication", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;  
	}

	
	List<List<double>^>^ resultMatrix = gcnew List<List<double>^>(m1);
	

	// Perform matrix multiplication
	for (int i = 0; i < m1; i++) {
		List<double>^ row = matrix[i];
		List<double>^ row3 = gcnew List<double>;
		for (int j = 0; j < n2; j++) {
			double sum = 0.0;
			for (int k = 0; k < n1; k++) {
				List<double>^ row1 = matrix1[k];
				sum += row[k] * row1[j];
			}
			row3->Add(sum);
		}
		resultMatrix->Add(row3);
	}

	for (int i = 0; i < dataGridView3->Rows->Count; i++) {
		List<double>^ row = resultMatrix[i];
		List<double>^ row1 = matrix1[i];
		for (int j = 0; j < dataGridView3->Columns->Count; j++) {
			dataGridView3->Rows[i]->Cells[j]->Value = row[j];

			String^ Size = ""+row1[j];
			StreamWriter^ writer = gcnew StreamWriter(Console::OpenStandardOutput());
			Console::SetOut(writer);
			Console::WriteLine(Size);
			writer->Flush();

		}
		
	}
	transpose();

	
}
};

	


}
