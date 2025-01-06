#pragma once
#include <algorithm>
#include <vector>
#include <msclr/marshal_cppstd.h>
#include "Header.h"
#include "functionForManipulationWithPlayers.h"
#include "definition.h"
#include "exeptionGeneral.h"



namespace CourseWork {
	ref class ask;
	std::vector<sportsMan> temp_vector;
	std::vector<sportsMan> sArray;
	CTimerCount* avarageFor3km;
	CTimerCount* avarageFor100m;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	void showMessageBoxError(const CExeption& error)
	{
		String^ managedErrorMessage = gcnew String(error.getErrorMessage().c_str());
		MessageBox::Show(managedErrorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

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
			// Initialize the timer
			toolStripContainer1->Hide();
			//toolStripContainer2->Hide();
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

	protected:

	protected:

	protected:


	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;














	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TabPage^ CreateNew;
	private: System::Windows::Forms::TextBox^ nameBox;
	private: System::Windows::Forms::TextBox^ surnameBox;
	private: System::Windows::Forms::TextBox^ JumpBox;



	private: System::Windows::Forms::TextBox^ pressBox;

	private: System::Windows::Forms::TextBox^ spring3kmBox;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ AddPlayerButton;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ sprint100mBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;






	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ ButtonSortBy;








	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ handleButton;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ IdTextBox;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ ButtonForAvarageRes;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
private: System::Windows::Forms::Button^ ButtonAddPlayerString;

private: System::Windows::Forms::ToolStripMenuItem^ openTxtFileWithToolStripMenuItem;
private: System::Windows::Forms::Button^ ButtonWorthWithSelect;



private: System::Windows::Forms::Button^ clearButton;
private: System::Windows::Forms::Button^ buttonUndo;
private: System::Windows::Forms::Button^ buttonRedo;


private: System::Windows::Forms::Button^ ButtonForBestAndWorths;

private: System::Windows::Forms::ListBox^ listBoxOfKind;
private: System::Windows::Forms::Button^ ButtonOutPutTheBest;

private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::TabPage^ tabPage2;

private: System::Windows::Forms::CheckBox^ checkBox3;
private: System::Windows::Forms::Button^ Button3KmWithDiviation;
private: System::Windows::Forms::Button^ ButtonFindPerson;



private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::ToolStripMenuItem^ sortToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ addToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ undoToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ redoToolStripMenuItem;
private: System::Windows::Forms::ToolStrip^ toolStrip1;
private: System::Windows::Forms::ToolStripButton^ ToolSave;













private: System::Windows::Forms::ToolTip^ toolTip1;
private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Button^ ButtonDeletePlayer;


private: System::Windows::Forms::PictureBox^ pictureBox1;


private: System::Windows::Forms::DataGridViewTextBoxColumn^ IDCol;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Surname;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ NameColumn;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sprint3kmCol;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ SprintFor100Col;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ PressAmountCol;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ LongJumCol;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ totalPointCol;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ diviory;

private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
private: System::Windows::Forms::ToolStripDropDownButton^ ToolAddPerson;

private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
private: System::Windows::Forms::ToolStripMenuItem^ byTheNameToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ byThe100MToolStripMenuItem;
private: System::Windows::Forms::ToolStripButton^ redoTool;

private: System::Windows::Forms::ToolStripButton^ UndoTool;

private: System::Windows::Forms::ToolStripMenuItem^ functionalityToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ topPlayerToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ bestPressWorthJumpToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ find7359DeviationPlayersToolStripMenuItem;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::TextBox^ EditTextBox;

private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Button^ EditButton;

private: System::Windows::Forms::ToolStripContainer^ toolStripContainer1;
private: System::Windows::Forms::Button^ ButtonForAcseedChange;

private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::ToolStripButton^ ToolOpenFile;

private: System::Windows::Forms::ToolStripDropDownButton^ toolStripButton3;
private: System::Windows::Forms::ToolStripDropDownButton^ deleteTool;

private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox2;

private: System::Windows::Forms::PictureBox^ pictureBox2;
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ longJumpToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ pressToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ undoToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^ redoToolStripMenuItem1;
private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ textBoxSpri3kmGro;
private: System::Windows::Forms::TextBox^ textBoxNumberGroup;


private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::TextBox^ textBoxSprin100mGro;
private: System::Windows::Forms::TextBox^ textBoxPressGroup;
private: System::Windows::Forms::TextBox^ textBoxNameGroup;



private: System::Windows::Forms::TextBox^ textBoxInLongGroup;


private: System::Windows::Forms::TextBox^ textBoxSurnameGroup;
private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::NumericUpDown^ numericUpDown2;














































































































	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
/// Required designer variable.
/// </summary>


#pragma region Windows Form Designer generated code
					/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openTxtFileWithToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sortToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byTheNameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->byThe100MToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->functionalityToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->topPlayerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bestPressWorthJumpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->find7359DeviationPlayersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->longJumpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pressToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->saveAsToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CreateNew = (gcnew System::Windows::Forms::TabPage());
			this->ButtonDeletePlayer = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->ButtonAddPlayerString = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->IdTextBox = (gcnew System::Windows::Forms::TextBox());
			this->handleButton = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->sprint100mBox = (gcnew System::Windows::Forms::TextBox());
			this->nameBox = (gcnew System::Windows::Forms::TextBox());
			this->surnameBox = (gcnew System::Windows::Forms::TextBox());
			this->JumpBox = (gcnew System::Windows::Forms::TextBox());
			this->pressBox = (gcnew System::Windows::Forms::TextBox());
			this->spring3kmBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AddPlayerButton = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Button3KmWithDiviation = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->ButtonForAvarageRes = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->ButtonOutPutTheBest = (gcnew System::Windows::Forms::Button());
			this->ButtonForBestAndWorths = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listBoxOfKind = (gcnew System::Windows::Forms::ListBox());
			this->ButtonWorthWithSelect = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->ButtonSortBy = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->ButtonFindPerson = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->ButtonForAcseedChange = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->EditButton = (gcnew System::Windows::Forms::Button());
			this->EditTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->IDCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sprint3kmCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->SprintFor100Col = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PressAmountCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LongJumCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->totalPointCol = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->diviory = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->buttonUndo = (gcnew System::Windows::Forms::Button());
			this->buttonRedo = (gcnew System::Windows::Forms::Button());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->ToolSave = (gcnew System::Windows::Forms::ToolStripButton());
			this->ToolOpenFile = (gcnew System::Windows::Forms::ToolStripButton());
			this->ToolAddPerson = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->deleteTool = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripTextBox2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->redoTool = (gcnew System::Windows::Forms::ToolStripButton());
			this->UndoTool = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBoxSpri3kmGro = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNumberGroup = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBoxSprin100mGro = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPressGroup = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNameGroup = (gcnew System::Windows::Forms::TextBox());
			this->textBoxInLongGroup = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSurnameGroup = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->CreateNew->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fileToolStripMenuItem,
					this->addToolStripMenuItem, this->deleteToolStripMenuItem, this->sortToolStripMenuItem, this->functionalityToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1463, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->openTxtFileWithToolStripMenuItem,
					this->saveAsToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
			this->fileToolStripMenuItem->Text = L"File";
			this->fileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fileToolStripMenuItem_Click);
			// 
			// openTxtFileWithToolStripMenuItem
			// 
			this->openTxtFileWithToolStripMenuItem->Name = L"openTxtFileWithToolStripMenuItem";
			this->openTxtFileWithToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->openTxtFileWithToolStripMenuItem->Size = System::Drawing::Size(259, 26);
			this->openTxtFileWithToolStripMenuItem->Text = L"Open txt file with";
			this->openTxtFileWithToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openTxtFileWithToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(259, 26);
			this->saveAsToolStripMenuItem->Text = L"Save as";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// addToolStripMenuItem
			// 
			this->addToolStripMenuItem->Name = L"addToolStripMenuItem";
			this->addToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->addToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->addToolStripMenuItem->Text = L"Add";
			this->addToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::W));
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->deleteToolStripMenuItem->Text = L"Delete";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteToolStripMenuItem_Click);
			// 
			// sortToolStripMenuItem
			// 
			this->sortToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->byTheNameToolStripMenuItem,
					this->byThe100MToolStripMenuItem
			});
			this->sortToolStripMenuItem->Name = L"sortToolStripMenuItem";
			this->sortToolStripMenuItem->Size = System::Drawing::Size(50, 24);
			this->sortToolStripMenuItem->Text = L"Sort";
			this->sortToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::sortToolStripMenuItem_Click);
			// 
			// byTheNameToolStripMenuItem
			// 
			this->byTheNameToolStripMenuItem->Name = L"byTheNameToolStripMenuItem";
			this->byTheNameToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::D));
			this->byTheNameToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->byTheNameToolStripMenuItem->Text = L"By the name";
			this->byTheNameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::byTheNameToolStripMenuItem_Click);
			// 
			// byThe100MToolStripMenuItem
			// 
			this->byThe100MToolStripMenuItem->Name = L"byThe100MToolStripMenuItem";
			this->byThe100MToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
			this->byThe100MToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->byThe100MToolStripMenuItem->Text = L"By the 100 m";
			this->byThe100MToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::byThe100MToolStripMenuItem_Click);
			// 
			// functionalityToolStripMenuItem
			// 
			this->functionalityToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->topPlayerToolStripMenuItem,
					this->bestPressWorthJumpToolStripMenuItem, this->find7359DeviationPlayersToolStripMenuItem, this->toolStripMenuItem1, this->undoToolStripMenuItem1,
					this->redoToolStripMenuItem1
			});
			this->functionalityToolStripMenuItem->Name = L"functionalityToolStripMenuItem";
			this->functionalityToolStripMenuItem->Size = System::Drawing::Size(107, 24);
			this->functionalityToolStripMenuItem->Text = L"Functionality";
			// 
			// topPlayerToolStripMenuItem
			// 
			this->topPlayerToolStripMenuItem->Name = L"topPlayerToolStripMenuItem";
			this->topPlayerToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::A));
			this->topPlayerToolStripMenuItem->Size = System::Drawing::Size(346, 26);
			this->topPlayerToolStripMenuItem->Text = L"Top sportsman";
			this->topPlayerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::topPlayerToolStripMenuItem_Click);
			// 
			// bestPressWorthJumpToolStripMenuItem
			// 
			this->bestPressWorthJumpToolStripMenuItem->Name = L"bestPressWorthJumpToolStripMenuItem";
			this->bestPressWorthJumpToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::B));
			this->bestPressWorthJumpToolStripMenuItem->Size = System::Drawing::Size(346, 26);
			this->bestPressWorthJumpToolStripMenuItem->Text = L"Best press & Worth Jump";
			this->bestPressWorthJumpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::bestPressWorthJumpToolStripMenuItem_Click);
			// 
			// find7359DeviationPlayersToolStripMenuItem
			// 
			this->find7359DeviationPlayersToolStripMenuItem->Name = L"find7359DeviationPlayersToolStripMenuItem";
			this->find7359DeviationPlayersToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::C));
			this->find7359DeviationPlayersToolStripMenuItem->Size = System::Drawing::Size(346, 26);
			this->find7359DeviationPlayersToolStripMenuItem->Text = L"Find ±7.359% Deviation Players";
			this->find7359DeviationPlayersToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::find7359DeviationPlayersToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->longJumpToolStripMenuItem,
					this->pressToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(346, 26);
			this->toolStripMenuItem1->Text = L"Find the worst result of";
			// 
			// longJumpToolStripMenuItem
			// 
			this->longJumpToolStripMenuItem->Name = L"longJumpToolStripMenuItem";
			this->longJumpToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::L));
			this->longJumpToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->longJumpToolStripMenuItem->Text = L"Long Jump";
			this->longJumpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::longJumpToolStripMenuItem_Click);
			// 
			// pressToolStripMenuItem
			// 
			this->pressToolStripMenuItem->Name = L"pressToolStripMenuItem";
			this->pressToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::P));
			this->pressToolStripMenuItem->Size = System::Drawing::Size(209, 26);
			this->pressToolStripMenuItem->Text = L"Press";
			this->pressToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pressToolStripMenuItem_Click);
			// 
			// undoToolStripMenuItem1
			// 
			this->undoToolStripMenuItem1->Name = L"undoToolStripMenuItem1";
			this->undoToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->undoToolStripMenuItem1->Size = System::Drawing::Size(346, 26);
			this->undoToolStripMenuItem1->Text = L"Undo";
			this->undoToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::undoToolStripMenuItem1_Click);
			// 
			// redoToolStripMenuItem1
			// 
			this->redoToolStripMenuItem1->Name = L"redoToolStripMenuItem1";
			this->redoToolStripMenuItem1->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
			this->redoToolStripMenuItem1->Size = System::Drawing::Size(346, 26);
			this->redoToolStripMenuItem1->Text = L"Redo";
			this->redoToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::redoToolStripMenuItem1_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->saveAsToolStripMenuItem1,
					this->undoToolStripMenuItem, this->redoToolStripMenuItem, this->openToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(130, 100);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStrip1_Opening);
			// 
			// saveAsToolStripMenuItem1
			// 
			this->saveAsToolStripMenuItem1->Name = L"saveAsToolStripMenuItem1";
			this->saveAsToolStripMenuItem1->Size = System::Drawing::Size(129, 24);
			this->saveAsToolStripMenuItem1->Text = L"Save As";
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->Size = System::Drawing::Size(129, 24);
			this->undoToolStripMenuItem->Text = L"Undo";
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->Size = System::Drawing::Size(129, 24);
			this->redoToolStripMenuItem->Text = L"Redo";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(129, 24);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// CreateNew
			// 
			this->CreateNew->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->CreateNew->Controls->Add(this->ButtonDeletePlayer);
			this->CreateNew->Controls->Add(this->label16);
			this->CreateNew->Controls->Add(this->numericUpDown1);
			this->CreateNew->Controls->Add(this->ButtonAddPlayerString);
			this->CreateNew->Controls->Add(this->label8);
			this->CreateNew->Controls->Add(this->IdTextBox);
			this->CreateNew->Controls->Add(this->handleButton);
			this->CreateNew->Controls->Add(this->label7);
			this->CreateNew->Controls->Add(this->label6);
			this->CreateNew->Controls->Add(this->label2);
			this->CreateNew->Controls->Add(this->label1);
			this->CreateNew->Controls->Add(this->sprint100mBox);
			this->CreateNew->Controls->Add(this->nameBox);
			this->CreateNew->Controls->Add(this->surnameBox);
			this->CreateNew->Controls->Add(this->JumpBox);
			this->CreateNew->Controls->Add(this->pressBox);
			this->CreateNew->Controls->Add(this->spring3kmBox);
			this->CreateNew->Controls->Add(this->label3);
			this->CreateNew->Controls->Add(this->label4);
			this->CreateNew->Controls->Add(this->AddPlayerButton);
			this->CreateNew->Controls->Add(this->label5);
			this->CreateNew->Location = System::Drawing::Point(4, 25);
			this->CreateNew->Name = L"CreateNew";
			this->CreateNew->Padding = System::Windows::Forms::Padding(3);
			this->CreateNew->Size = System::Drawing::Size(342, 547);
			this->CreateNew->TabIndex = 0;
			this->CreateNew->Text = L"Add/Remove";
			this->CreateNew->UseVisualStyleBackColor = true;
			this->CreateNew->Click += gcnew System::EventHandler(this, &MyForm::CreateNew_Click);
			// 
			// ButtonDeletePlayer
			// 
			this->ButtonDeletePlayer->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ButtonDeletePlayer->Location = System::Drawing::Point(79, 477);
			this->ButtonDeletePlayer->Name = L"ButtonDeletePlayer";
			this->ButtonDeletePlayer->Size = System::Drawing::Size(104, 26);
			this->ButtonDeletePlayer->TabIndex = 24;
			this->ButtonDeletePlayer->Text = L"Delete";
			this->ButtonDeletePlayer->UseVisualStyleBackColor = false;
			this->ButtonDeletePlayer->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(16, 458);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(154, 16);
			this->label16->TabIndex = 23;
			this->label16->Text = L"Delete person with the ID";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(19, 477);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(49, 22);
			this->numericUpDown1->TabIndex = 22;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// ButtonAddPlayerString
			// 
			this->ButtonAddPlayerString->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ButtonAddPlayerString->Location = System::Drawing::Point(18, 369);
			this->ButtonAddPlayerString->Name = L"ButtonAddPlayerString";
			this->ButtonAddPlayerString->Size = System::Drawing::Size(137, 28);
			this->ButtonAddPlayerString->TabIndex = 21;
			this->ButtonAddPlayerString->Text = L"Add to table";
			this->ButtonAddPlayerString->UseVisualStyleBackColor = false;
			this->ButtonAddPlayerString->Click += gcnew System::EventHandler(this, &MyForm::buttonForStringAddPerson);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(180, 210);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 16);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Number";
			// 
			// IdTextBox
			// 
			this->IdTextBox->Location = System::Drawing::Point(183, 229);
			this->IdTextBox->Name = L"IdTextBox";
			this->IdTextBox->Size = System::Drawing::Size(127, 22);
			this->IdTextBox->TabIndex = 19;
			// 
			// handleButton
			// 
			this->handleButton->BackColor = System::Drawing::Color::Azure;
			this->handleButton->Location = System::Drawing::Point(17, 341);
			this->handleButton->Name = L"handleButton";
			this->handleButton->Size = System::Drawing::Size(312, 22);
			this->handleButton->TabIndex = 17;
			this->handleButton->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::LightSeaGreen;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Location = System::Drawing::Point(17, 284);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(241, 50);
			this->label7->TabIndex = 18;
			this->label7->Text = L"id surname name hh:mm:ss \r\nhh:mm:ss press {long jump}\r\n27 Genri Osborn 00:10:27 0"
				L"1:11:20 300 7";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(180, 155);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 16);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Jump in long (in miters)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 16);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Press";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(180, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 16);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Time of sprint for 100 m";
			// 
			// sprint100mBox
			// 
			this->sprint100mBox->Location = System::Drawing::Point(183, 119);
			this->sprint100mBox->Name = L"sprint100mBox";
			this->sprint100mBox->Size = System::Drawing::Size(127, 22);
			this->sprint100mBox->TabIndex = 13;
			this->sprint100mBox->TextChanged += gcnew System::EventHandler(this, &MyForm::sprint100mBox_TextChanged);
			// 
			// nameBox
			// 
			this->nameBox->Location = System::Drawing::Point(17, 53);
			this->nameBox->Name = L"nameBox";
			this->nameBox->Size = System::Drawing::Size(127, 22);
			this->nameBox->TabIndex = 10;
			this->nameBox->TextChanged += gcnew System::EventHandler(this, &MyForm::nameBox_TextChanged);
			// 
			// surnameBox
			// 
			this->surnameBox->Location = System::Drawing::Point(183, 53);
			this->surnameBox->Name = L"surnameBox";
			this->surnameBox->Size = System::Drawing::Size(127, 22);
			this->surnameBox->TabIndex = 9;
			this->surnameBox->TextChanged += gcnew System::EventHandler(this, &MyForm::surnameBox_TextChanged);
			// 
			// JumpBox
			// 
			this->JumpBox->Location = System::Drawing::Point(183, 184);
			this->JumpBox->Name = L"JumpBox";
			this->JumpBox->Size = System::Drawing::Size(127, 22);
			this->JumpBox->TabIndex = 5;
			this->JumpBox->TextChanged += gcnew System::EventHandler(this, &MyForm::JumpBox_TextChanged);
			// 
			// pressBox
			// 
			this->pressBox->Location = System::Drawing::Point(17, 184);
			this->pressBox->Name = L"pressBox";
			this->pressBox->Size = System::Drawing::Size(127, 22);
			this->pressBox->TabIndex = 4;
			this->pressBox->TextChanged += gcnew System::EventHandler(this, &MyForm::pressBox_TextChanged);
			// 
			// spring3kmBox
			// 
			this->spring3kmBox->Location = System::Drawing::Point(17, 119);
			this->spring3kmBox->Name = L"spring3kmBox";
			this->spring3kmBox->Size = System::Drawing::Size(127, 22);
			this->spring3kmBox->TabIndex = 2;
			this->spring3kmBox->TextChanged += gcnew System::EventHandler(this, &MyForm::spring3kmBox_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(14, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Time of sprint for 3 km";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(180, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 16);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Surname";
			// 
			// AddPlayerButton
			// 
			this->AddPlayerButton->BackColor = System::Drawing::Color::LightSeaGreen;
			this->AddPlayerButton->Location = System::Drawing::Point(17, 229);
			this->AddPlayerButton->Name = L"AddPlayerButton";
			this->AddPlayerButton->Size = System::Drawing::Size(122, 26);
			this->AddPlayerButton->TabIndex = 6;
			this->AddPlayerButton->Text = L"Add to table";
			this->AddPlayerButton->UseVisualStyleBackColor = false;
			this->AddPlayerButton->Click += gcnew System::EventHandler(this, &MyForm::buttonForAddPerson);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(14, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Name";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->CreateNew);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(1066, 47);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(350, 576);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->pictureBox3);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->Button3KmWithDiviation);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->checkBox3);
			this->tabPage1->Controls->Add(this->ButtonForAvarageRes);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->ButtonOutPutTheBest);
			this->tabPage1->Controls->Add(this->ButtonForBestAndWorths);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->listBoxOfKind);
			this->tabPage1->Controls->Add(this->ButtonWorthWithSelect);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->ButtonSortBy);
			this->tabPage1->Controls->Add(this->checkBox2);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->checkBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(342, 547);
			this->tabPage1->TabIndex = 1;
			this->tabPage1->Text = L"Functionality";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(18, 227);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(179, 97);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 24;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(18, 377);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(127, 97);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 23;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(183, 377);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(102, 98);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 22;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// Button3KmWithDiviation
			// 
			this->Button3KmWithDiviation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Button3KmWithDiviation->Location = System::Drawing::Point(183, 481);
			this->Button3KmWithDiviation->Name = L"Button3KmWithDiviation";
			this->Button3KmWithDiviation->Size = System::Drawing::Size(147, 38);
			this->Button3KmWithDiviation->TabIndex = 16;
			this->Button3KmWithDiviation->Text = L"Sprint for 3km";
			this->Button3KmWithDiviation->UseVisualStyleBackColor = true;
			this->Button3KmWithDiviation->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(203, 252);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(46, 16);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Point:";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(18, 195);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(153, 20);
			this->checkBox3->TabIndex = 15;
			this->checkBox3->Text = L"Deviation from 100 m";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// ButtonForAvarageRes
			// 
			this->ButtonForAvarageRes->Location = System::Drawing::Point(206, 103);
			this->ButtonForAvarageRes->Name = L"ButtonForAvarageRes";
			this->ButtonForAvarageRes->Size = System::Drawing::Size(117, 35);
			this->ButtonForAvarageRes->TabIndex = 4;
			this->ButtonForAvarageRes->Text = L"Avarage result";
			this->ButtonForAvarageRes->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->ButtonForAvarageRes->UseVisualStyleBackColor = true;
			this->ButtonForAvarageRes->Click += gcnew System::EventHandler(this, &MyForm::findAvarage);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(203, 146);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 16);
			this->label9->TabIndex = 5;
			this->label9->Text = L"100 m:";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click_1);
			// 
			// ButtonOutPutTheBest
			// 
			this->ButtonOutPutTheBest->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ButtonOutPutTheBest->Location = System::Drawing::Point(18, 481);
			this->ButtonOutPutTheBest->Name = L"ButtonOutPutTheBest";
			this->ButtonOutPutTheBest->Size = System::Drawing::Size(127, 39);
			this->ButtonOutPutTheBest->TabIndex = 12;
			this->ButtonOutPutTheBest->Text = L"Output the best";
			this->ButtonOutPutTheBest->UseVisualStyleBackColor = true;
			this->ButtonOutPutTheBest->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// ButtonForBestAndWorths
			// 
			this->ButtonForBestAndWorths->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ButtonForBestAndWorths->Location = System::Drawing::Point(18, 330);
			this->ButtonForBestAndWorths->Name = L"ButtonForBestAndWorths";
			this->ButtonForBestAndWorths->Size = System::Drawing::Size(179, 33);
			this->ButtonForBestAndWorths->TabIndex = 11;
			this->ButtonForBestAndWorths->Text = L"Best press & Worth Jump";
			this->ButtonForBestAndWorths->UseVisualStyleBackColor = true;
			this->ButtonForBestAndWorths->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(203, 173);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 16);
			this->label10->TabIndex = 6;
			this->label10->Text = L"3 km:";
			// 
			// listBoxOfKind
			// 
			this->listBoxOfKind->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->listBoxOfKind->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBoxOfKind->FormattingEnabled = true;
			this->listBoxOfKind->ItemHeight = 16;
			this->listBoxOfKind->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Long Jump", L"Press " });
			this->listBoxOfKind->Location = System::Drawing::Point(18, 153);
			this->listBoxOfKind->Name = L"listBoxOfKind";
			this->listBoxOfKind->Size = System::Drawing::Size(110, 36);
			this->listBoxOfKind->TabIndex = 10;
			this->listBoxOfKind->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBoxOfKind_SelectedIndexChanged);
			// 
			// ButtonWorthWithSelect
			// 
			this->ButtonWorthWithSelect->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ButtonWorthWithSelect->Location = System::Drawing::Point(18, 103);
			this->ButtonWorthWithSelect->Name = L"ButtonWorthWithSelect";
			this->ButtonWorthWithSelect->Size = System::Drawing::Size(116, 44);
			this->ButtonWorthWithSelect->TabIndex = 9;
			this->ButtonWorthWithSelect->Text = L"Find the worst result of";
			this->ButtonWorthWithSelect->UseVisualStyleBackColor = true;
			this->ButtonWorthWithSelect->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(203, 202);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 16);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Press:  ";
			// 
			// ButtonSortBy
			// 
			this->ButtonSortBy->Location = System::Drawing::Point(11, 23);
			this->ButtonSortBy->Name = L"ButtonSortBy";
			this->ButtonSortBy->Size = System::Drawing::Size(147, 41);
			this->ButtonSortBy->TabIndex = 0;
			this->ButtonSortBy->Text = L"    Sorting by:                                                                  "
				L"      ";
			this->ButtonSortBy->UseVisualStyleBackColor = true;
			this->ButtonSortBy->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(171, 44);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(69, 20);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Name ";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(203, 227);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(82, 16);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Long jump:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(171, 23);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(119, 20);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Sprint for 100 m";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->ButtonFindPerson);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(342, 547);
			this->tabPage2->TabIndex = 2;
			this->tabPage2->Text = L"Find";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// ButtonFindPerson
			// 
			this->ButtonFindPerson->Location = System::Drawing::Point(23, 77);
			this->ButtonFindPerson->Name = L"ButtonFindPerson";
			this->ButtonFindPerson->Size = System::Drawing::Size(75, 23);
			this->ButtonFindPerson->TabIndex = 2;
			this->ButtonFindPerson->Text = L"Find";
			this->ButtonFindPerson->UseVisualStyleBackColor = true;
			this->ButtonFindPerson->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(20, 30);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(138, 16);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Type ID of sportsman:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(23, 49);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(295, 22);
			this->textBox1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->toolStripContainer1);
			this->tabPage3->Controls->Add(this->EditButton);
			this->tabPage3->Controls->Add(this->EditTextBox);
			this->tabPage3->Controls->Add(this->label15);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(342, 547);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"Edit";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Click += gcnew System::EventHandler(this, &MyForm::tabPage3_Click);
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.BottomToolStripPanel
			// 
			this->toolStripContainer1->BottomToolStripPanel->Click += gcnew System::EventHandler(this, &MyForm::toolStripContainer1_BottomToolStripPanel_Click_1);
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->BackColor = System::Drawing::Color::MediumAquamarine;
			this->toolStripContainer1->ContentPanel->Controls->Add(this->label22);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->label21);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->textBox7);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->textBox2);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->ButtonForAcseedChange);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->label20);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->label19);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->label18);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->label17);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->textBox6);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->textBox5);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->textBox4);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->textBox3);
			this->toolStripContainer1->ContentPanel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(297, 406);
			this->toolStripContainer1->ContentPanel->Load += gcnew System::EventHandler(this, &MyForm::toolStripContainer1_ContentPanel_Load_1);
			this->toolStripContainer1->Location = System::Drawing::Point(25, 92);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->Size = System::Drawing::Size(297, 431);
			this->toolStripContainer1->TabIndex = 0;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->Click += gcnew System::EventHandler(this, &MyForm::toolStripContainer1_TopToolStripPanel_Click_1);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(166, 146);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(44, 16);
			this->label22->TabIndex = 12;
			this->label22->Text = L"Jump";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(17, 146);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(47, 16);
			this->label21->TabIndex = 11;
			this->label21->Text = L"Press";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(169, 165);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(105, 22);
			this->textBox7->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(19, 165);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(105, 22);
			this->textBox2->TabIndex = 9;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// ButtonForAcseedChange
			// 
			this->ButtonForAcseedChange->Location = System::Drawing::Point(20, 215);
			this->ButtonForAcseedChange->Name = L"ButtonForAcseedChange";
			this->ButtonForAcseedChange->Size = System::Drawing::Size(108, 26);
			this->ButtonForAcseedChange->TabIndex = 8;
			this->ButtonForAcseedChange->Text = L"Change";
			this->ButtonForAcseedChange->UseVisualStyleBackColor = true;
			this->ButtonForAcseedChange->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(166, 85);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(47, 16);
			this->label20->TabIndex = 7;
			this->label20->Text = L"100 m";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(21, 85);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(39, 16);
			this->label19->TabIndex = 6;
			this->label19->Text = L"3 km";
			this->label19->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(164, 15);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(68, 16);
			this->label18->TabIndex = 5;
			this->label18->Text = L"Surname";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(21, 15);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(48, 16);
			this->label17->TabIndex = 4;
			this->label17->Text = L"Name";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(165, 104);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(105, 22);
			this->textBox6->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(20, 104);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(105, 22);
			this->textBox5->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(167, 42);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(103, 22);
			this->textBox4->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(20, 42);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(105, 22);
			this->textBox3->TabIndex = 0;
			// 
			// EditButton
			// 
			this->EditButton->Location = System::Drawing::Point(159, 43);
			this->EditButton->Name = L"EditButton";
			this->EditButton->Size = System::Drawing::Size(65, 24);
			this->EditButton->TabIndex = 2;
			this->EditButton->Text = L"Find";
			this->EditButton->UseVisualStyleBackColor = true;
			this->EditButton->Click += gcnew System::EventHandler(this, &MyForm::button11_Click_1);
			// 
			// EditTextBox
			// 
			this->EditTextBox->Location = System::Drawing::Point(25, 43);
			this->EditTextBox->Name = L"EditTextBox";
			this->EditTextBox->Size = System::Drawing::Size(123, 22);
			this->EditTextBox->TabIndex = 1;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::LightGray;
			this->label15->Location = System::Drawing::Point(22, 24);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(55, 16);
			this->label15->TabIndex = 0;
			this->label15->Text = L"Enter id:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(201)), static_cast<System::Int32>(static_cast<System::Byte>(199)));
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->IDCol,
					this->Surname, this->NameColumn, this->Sprint3kmCol, this->SprintFor100Col, this->PressAmountCol, this->LongJumCol, this->totalPointCol,
					this->diviory
			});
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView1->Location = System::Drawing::Point(63, 47);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(985, 620);
			this->dataGridView1->TabIndex = 17;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick_1);
			this->dataGridView1->Leave += gcnew System::EventHandler(this, &MyForm::buttonForStringAddPerson);
			// 
			// IDCol
			// 
			this->IDCol->HeaderText = L"ID";
			this->IDCol->MinimumWidth = 6;
			this->IDCol->Name = L"IDCol";
			// 
			// Surname
			// 
			this->Surname->HeaderText = L"Surname";
			this->Surname->MinimumWidth = 6;
			this->Surname->Name = L"Surname";
			// 
			// NameColumn
			// 
			this->NameColumn->HeaderText = L"Name";
			this->NameColumn->MinimumWidth = 6;
			this->NameColumn->Name = L"NameColumn";
			// 
			// Sprint3kmCol
			// 
			this->Sprint3kmCol->HeaderText = L"Sprint For 3 km";
			this->Sprint3kmCol->MinimumWidth = 6;
			this->Sprint3kmCol->Name = L"Sprint3kmCol";
			// 
			// SprintFor100Col
			// 
			this->SprintFor100Col->HeaderText = L"Sprint For 100 m";
			this->SprintFor100Col->MinimumWidth = 6;
			this->SprintFor100Col->Name = L"SprintFor100Col";
			// 
			// PressAmountCol
			// 
			this->PressAmountCol->HeaderText = L"Press";
			this->PressAmountCol->MinimumWidth = 6;
			this->PressAmountCol->Name = L"PressAmountCol";
			// 
			// LongJumCol
			// 
			this->LongJumCol->HeaderText = L"Long Jump";
			this->LongJumCol->MinimumWidth = 6;
			this->LongJumCol->Name = L"LongJumCol";
			// 
			// totalPointCol
			// 
			this->totalPointCol->HeaderText = L"Points";
			this->totalPointCol->MinimumWidth = 6;
			this->totalPointCol->Name = L"totalPointCol";
			// 
			// diviory
			// 
			this->diviory->HeaderText = L"Beviation from 100 m";
			this->diviory->MinimumWidth = 6;
			this->diviory->Name = L"diviory";
			// 
			// clearButton
			// 
			this->clearButton->BackColor = System::Drawing::Color::LightSeaGreen;
			this->clearButton->Location = System::Drawing::Point(960, 673);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(88, 35);
			this->clearButton->TabIndex = 18;
			this->clearButton->Text = L"Clear";
			this->clearButton->UseVisualStyleBackColor = false;
			this->clearButton->Click += gcnew System::EventHandler(this, &MyForm::clearButton_Click);
			// 
			// buttonUndo
			// 
			this->buttonUndo->BackColor = System::Drawing::Color::LightSeaGreen;
			this->buttonUndo->Location = System::Drawing::Point(867, 673);
			this->buttonUndo->Name = L"buttonUndo";
			this->buttonUndo->Size = System::Drawing::Size(83, 34);
			this->buttonUndo->TabIndex = 19;
			this->buttonUndo->Text = L"Undo";
			this->buttonUndo->UseVisualStyleBackColor = false;
			this->buttonUndo->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// buttonRedo
			// 
			this->buttonRedo->BackColor = System::Drawing::Color::LightSeaGreen;
			this->buttonRedo->Location = System::Drawing::Point(769, 673);
			this->buttonRedo->Name = L"buttonRedo";
			this->buttonRedo->Size = System::Drawing::Size(83, 34);
			this->buttonRedo->TabIndex = 20;
			this->buttonRedo->Text = L"Redo";
			this->buttonRedo->UseVisualStyleBackColor = false;
			this->buttonRedo->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::Left;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(30, 30);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->ToolSave, this->ToolOpenFile,
					this->ToolAddPerson, this->deleteTool, this->toolStripButton4, this->redoTool, this->UndoTool
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(45, 699);
			this->toolStrip1->TabIndex = 21;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::toolStrip1_ItemClicked);
			// 
			// ToolSave
			// 
			this->ToolSave->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ToolSave->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToolSave.Image")));
			this->ToolSave->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolSave->Name = L"ToolSave";
			this->ToolSave->Size = System::Drawing::Size(42, 34);
			this->ToolSave->Text = L"Save";
			this->ToolSave->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click_1);
			// 
			// ToolOpenFile
			// 
			this->ToolOpenFile->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ToolOpenFile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToolOpenFile.Image")));
			this->ToolOpenFile->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolOpenFile->Name = L"ToolOpenFile";
			this->ToolOpenFile->Size = System::Drawing::Size(42, 34);
			this->ToolOpenFile->Text = L"Open file";
			this->ToolOpenFile->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton7_Click);
			// 
			// ToolAddPerson
			// 
			this->ToolAddPerson->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->ToolAddPerson->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripTextBox1 });
			this->ToolAddPerson->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ToolAddPerson.Image")));
			this->ToolAddPerson->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->ToolAddPerson->Name = L"ToolAddPerson";
			this->ToolAddPerson->Size = System::Drawing::Size(42, 34);
			this->ToolAddPerson->Text = L"Add sportsman";
			this->ToolAddPerson->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click_1);
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 27);
			this->toolStripTextBox1->ReadOnlyChanged += gcnew System::EventHandler(this, &MyForm::buttonForStringAddPerson);
			this->toolStripTextBox1->Click += gcnew System::EventHandler(this, &MyForm::toolStripTextBox1_Click_1);
			// 
			// deleteTool
			// 
			this->deleteTool->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->deleteTool->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripTextBox2 });
			this->deleteTool->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deleteTool.Image")));
			this->deleteTool->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->deleteTool->Name = L"deleteTool";
			this->deleteTool->Size = System::Drawing::Size(42, 34);
			this->deleteTool->Text = L"Delete";
			this->deleteTool->Click += gcnew System::EventHandler(this, &MyForm::deleteTool_Click);
			// 
			// toolStripTextBox2
			// 
			this->toolStripTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox2->Name = L"toolStripTextBox2";
			this->toolStripTextBox2->Size = System::Drawing::Size(100, 27);
			this->toolStripTextBox2->ToolTipText = L"dffdfsdfs";
			this->toolStripTextBox2->Leave += gcnew System::EventHandler(this, &MyForm::toolStripTextBox2_Leave);
			this->toolStripTextBox2->Click += gcnew System::EventHandler(this, &MyForm::toolStripTextBox2_Click_2);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(42, 34);
			this->toolStripButton4->Text = L"Q & A";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton4_Click);
			// 
			// redoTool
			// 
			this->redoTool->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->redoTool->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"redoTool.Image")));
			this->redoTool->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->redoTool->Name = L"redoTool";
			this->redoTool->Size = System::Drawing::Size(42, 34);
			this->redoTool->Text = L"Undo";
			this->redoTool->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton5_Click);
			// 
			// UndoTool
			// 
			this->UndoTool->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->UndoTool->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"UndoTool.Image")));
			this->UndoTool->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->UndoTool->Name = L"UndoTool";
			this->UndoTool->Size = System::Drawing::Size(42, 34);
			this->UndoTool->Text = L"Redo";
			this->UndoTool->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton6_Click);
			// 
			// toolTip1
			// 
			this->toolTip1->Tag = L"";
			this->toolTip1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &MyForm::toolTip1_Popup);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(42, 34);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->pictureBox4);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->textBoxSpri3kmGro);
			this->groupBox1->Controls->Add(this->textBoxNumberGroup);
			this->groupBox1->Controls->Add(this->label29);
			this->groupBox1->Controls->Add(this->label24);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label25);
			this->groupBox1->Controls->Add(this->label28);
			this->groupBox1->Controls->Add(this->label26);
			this->groupBox1->Controls->Add(this->label27);
			this->groupBox1->Controls->Add(this->textBoxSprin100mGro);
			this->groupBox1->Controls->Add(this->textBoxPressGroup);
			this->groupBox1->Controls->Add(this->textBoxNameGroup);
			this->groupBox1->Controls->Add(this->textBoxInLongGroup);
			this->groupBox1->Controls->Add(this->textBoxSurnameGroup);
			this->groupBox1->Location = System::Drawing::Point(367, 193);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(438, 272);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Add sportsman";
			this->groupBox1->Visible = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// pictureBox4
			// 
			this->pictureBox4->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.ErrorImage")));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(392, 17);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(25, 24);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 25;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(235, 205);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(55, 16);
			this->label23->TabIndex = 39;
			this->label23->Text = L"Number";
			// 
			// textBoxSpri3kmGro
			// 
			this->textBoxSpri3kmGro->Location = System::Drawing::Point(72, 114);
			this->textBoxSpri3kmGro->Name = L"textBoxSpri3kmGro";
			this->textBoxSpri3kmGro->Size = System::Drawing::Size(127, 22);
			this->textBoxSpri3kmGro->TabIndex = 25;
			// 
			// textBoxNumberGroup
			// 
			this->textBoxNumberGroup->Location = System::Drawing::Point(238, 224);
			this->textBoxNumberGroup->Name = L"textBoxNumberGroup";
			this->textBoxNumberGroup->Size = System::Drawing::Size(127, 22);
			this->textBoxNumberGroup->TabIndex = 38;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(69, 20);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(44, 16);
			this->label29->TabIndex = 33;
			this->label29->Text = L"Name";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(235, 150);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(142, 16);
			this->label24->TabIndex = 37;
			this->label24->Text = L"Jump in long (in miters)";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button1->Location = System::Drawing::Point(72, 224);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(122, 26);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Add to table";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(69, 150);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(42, 16);
			this->label25->TabIndex = 36;
			this->label25->Text = L"Press";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(235, 20);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(61, 16);
			this->label28->TabIndex = 32;
			this->label28->Text = L"Surname";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(235, 85);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(143, 16);
			this->label26->TabIndex = 35;
			this->label26->Text = L"Time of sprint for 100 m";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(69, 85);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(136, 16);
			this->label27->TabIndex = 30;
			this->label27->Text = L"Time of sprint for 3 km";
			// 
			// textBoxSprin100mGro
			// 
			this->textBoxSprin100mGro->Location = System::Drawing::Point(238, 114);
			this->textBoxSprin100mGro->Name = L"textBoxSprin100mGro";
			this->textBoxSprin100mGro->Size = System::Drawing::Size(127, 22);
			this->textBoxSprin100mGro->TabIndex = 34;
			// 
			// textBoxPressGroup
			// 
			this->textBoxPressGroup->Location = System::Drawing::Point(72, 179);
			this->textBoxPressGroup->Name = L"textBoxPressGroup";
			this->textBoxPressGroup->Size = System::Drawing::Size(127, 22);
			this->textBoxPressGroup->TabIndex = 26;
			// 
			// textBoxNameGroup
			// 
			this->textBoxNameGroup->Location = System::Drawing::Point(72, 48);
			this->textBoxNameGroup->Name = L"textBoxNameGroup";
			this->textBoxNameGroup->Size = System::Drawing::Size(127, 22);
			this->textBoxNameGroup->TabIndex = 31;
			// 
			// textBoxInLongGroup
			// 
			this->textBoxInLongGroup->Location = System::Drawing::Point(238, 179);
			this->textBoxInLongGroup->Name = L"textBoxInLongGroup";
			this->textBoxInLongGroup->Size = System::Drawing::Size(127, 22);
			this->textBoxInLongGroup->TabIndex = 27;
			// 
			// textBoxSurnameGroup
			// 
			this->textBoxSurnameGroup->Location = System::Drawing::Point(238, 48);
			this->textBoxSurnameGroup->Name = L"textBoxSurnameGroup";
			this->textBoxSurnameGroup->Size = System::Drawing::Size(127, 22);
			this->textBoxSurnameGroup->TabIndex = 29;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->pictureBox5);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label30);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Location = System::Drawing::Point(367, 193);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(285, 109);
			this->groupBox2->TabIndex = 23;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Delete";
			this->groupBox2->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.ErrorImage")));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(244, 21);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(25, 24);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 40;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button2->Location = System::Drawing::Point(88, 39);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 26);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Delete";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(25, 20);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(154, 16);
			this->label30->TabIndex = 26;
			this->label30->Text = L"Delete person with the ID";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(28, 39);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(49, 22);
			this->numericUpDown2->TabIndex = 25;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(102)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)));
			this->ClientSize = System::Drawing::Size(1463, 727);
			this->ContextMenuStrip = this->contextMenuStrip1;
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->buttonRedo);
			this->Controls->Add(this->buttonUndo);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Goat5%";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->CreateNew->ResumeLayout(false);
			this->CreateNew->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->ContentPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		

#pragma endregion
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {


	}
private: System::Void CreateNew_Click(System::Object^ sender, System::EventArgs^ e) {
		            }
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		            }


	   //Кнопка потірбна для того, що б добавляти спортсмена
	   //в уже створений вектор або в пустий вектор
private: System::Void buttonForAddPerson(System::Object^ sender, System::EventArgs^ e) {

	try
	{

		System::String^ nameBoxText = nameBox->Text;
		std::string name = msclr::interop::marshal_as<std::string>(nameBoxText);

		System::String^ surnameBoxText = surnameBox->Text;
		std::string surname = msclr::interop::marshal_as<std::string>(surnameBoxText);

		System::String^ sprintFor3km = spring3kmBox->Text;
		System::String^ sprintFor100m = sprint100mBox->Text;
		System::String^ pressForAmount = pressBox->Text; // Fix the typo here
		System::String^ LongJumpMeters = JumpBox->Text;
		System::String^ IdFirst = IdTextBox->Text;


		String^ inputD = toolStripTextBox1->Text;

		String^ inputData = handleButton->Text;
		String^ mainString;

		
		if (inputD == "")
			mainString = inputData;
		else
			mainString = inputD;


		mainString = IdFirst + " " + surnameBoxText + " " + nameBoxText + " " + sprintFor3km + " " + sprintFor100m + " " + pressForAmount + " " + LongJumpMeters;

		sportsMan newSportsMan;
		sportsMan* temp;
		std::istringstream iss(msclr::interop::marshal_as<std::string>(mainString));

		// Check if the parsing fails and throw CBasicException with a specific error message
		if (!(iss >> newSportsMan)) {
			throw CIncorrectInput();
		}

		temp = new sportsMan(newSportsMan);

		if(!IsCheckForId(sArray, temp->getId())) {
			throw CIdIsAlreadyExist();
		}

		if (temp->varaficateClass(*temp)) {

			if (chooseVector) {
				sArray.push_back(*temp);
				updateDataGridViewGeneral(dataGridView1, sArray);
			}
			else {
				temp_vector.push_back(*temp);
				updateDataGridViewGeneral(dataGridView1, temp_vector);
			}

			updateDataGridViewGeneral(dataGridView1, sArray);
			findAvarage(sender, e);
		}else
		{
			throw CIncorrectInput();
		}
	}
	catch (CExeption& error) {
		showMessageBoxError(error);
	}
	nameBox->Text = "";
	nameBox->BackColor = Color::Azure;
	surnameBox->Text = "";
	surnameBox->BackColor = Color::Azure;

	spring3kmBox->Text = "";
	spring3kmBox->BackColor = Color::Azure;

	JumpBox->Text = "";
	JumpBox->BackColor = Color::Azure;

	sprint100mBox->Text = "";
	sprint100mBox->BackColor = Color::Azure;

	IdTextBox->Text = "";
	IdTextBox->BackColor = Color::Azure;

	pressBox->Text = "";
	pressBox->BackColor = Color::Azure;
}


private: System::Void toolStripContainer1_ContentPanel_Load(System::Object^ sender, System::EventArgs^ e) {
		            }
private: System::Void toolStripContainer1_TopToolStripPanel_Click(System::Object^ sender, System::EventArgs^ e) {
		            }
private: System::Void toolStripContainer1_BottomToolStripPanel_Click(System::Object^ sender, System::EventArgs^ e) {
		            }
private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		            }
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
		            }
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		            }

					//Кнопка потрібна для того, щоб посортувати учасників за певними критерія такими як БІГ 100 метрів, або за іменем
				private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
					try {
						if (sArray.empty() && temp_vector.empty()) {
							throw CArrayIsEmpty();
						}
						std::vector<sportsMan>* selectedVector = (chooseVector == 0) ? &temp_vector : &sArray;

						bool isSortChecked = checkBox1->Checked || checkBox2->Checked;

						if (isSortChecked) {
							dataGridView1->Rows->Clear();

							if (checkBox1->Checked) {


								sortForSortingBy100m(*selectedVector);


							}
							else if (checkBox2->Checked) {
								selectionSortWithNames(*selectedVector);
							}

							//for (int i = 0; i < rowAmount; i++) {
							//	dataGridView1->Rows->Add(1);
							if (chooseVector)
								updateDataGridViewGeneral(dataGridView1, sArray);
							else
								updateDataGridViewGeneral(dataGridView1, temp_vector);
							//updateDataGridViewGeneralForTemp(dataGridView1);
					//	}
						}
						else {
							throw CChooseTheSoringMethod();
							tabControl1->SelectedTab = tabPage1;
						}
					}
					catch (CExeption& error) {
						showMessageBoxError(error);
					}
					
				}

private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (checkBox1->Checked)
	{
		checkBox1->Checked = FALSE;
	}
	

}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if(checkBox2->Checked)
	{
		checkBox2->Checked = FALSE;
		
	}
}
private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	label7->Show();

	handleButton->BackColor = System::Drawing::Color::LightBlue;

}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void fileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}



		//За допомогою кнопки вираховується середнє значення
		//усіх результатів та також вираховується загальна кількість очків
private: System::Void findAvarage(System::Object^ sender, System::EventArgs^ e) {
	try {
		int resultPress = 0, resultJump = 0;
		int generalAmountSFor100m = 0;
		int generalAmountSFor3km = 0;
		int generalAmountOfPoint = 0;

		if (sArray.size() == 0) {
			throw CArrayIsEmpty();
		}

		for (int i = 0; i < sArray.size(); i++) {

			generalAmountSFor100m += sArray[i].calculateSeconds(sArray[i].get100m());
			generalAmountSFor3km += sArray[i].calculateSeconds(sArray[i].get3km());

			resultJump += sArray[i].getLongJump();
			resultPress += sArray[i].getPress();

			// Accumulate total points
			generalAmountOfPoint += sArray[i].getTotalPoints();
		}

		generalAmountSFor100m = generalAmountSFor100m / sArray.size();
		generalAmountSFor3km = generalAmountSFor3km / sArray.size();

		avarageFor100m = new CTimerCount(convertSecondsToHMS(generalAmountSFor100m));
		avarageFor3km = new CTimerCount(convertSecondsToHMS(generalAmountSFor3km));

		label9->Text = System::String::Concat("100 m: ", System::Convert::ToString(formatTime(*avarageFor100m)));
		label10->Text = System::String::Concat("3 km: ", System::Convert::ToString(formatTime(*avarageFor3km)));

		avarageLongJump = resultJump / sArray.size();
		label12->Text = System::String::Concat("Long jump: ", System::Convert::ToString(avarageLongJump));

		avaragePress = resultPress / sArray.size();
		label11->Text = System::String::Concat("Press: ", System::Convert::ToString(avaragePress));

		generalPoint = generalAmountOfPoint / sArray.size();
		label13->Text = System::String::Concat("Points: ", System::Convert::ToString(generalPoint));
		checkIfExistAvarageValue = TRUE;
	}
	catch (CExeption& error) {
		showMessageBoxError(error);
	}
}
	   void selectionSortTemplate(std::vector<sportsMan>& arr, std::function<bool(const sportsMan&, const sportsMan&)> compare) {

		   int n = arr.size();

		   for (int i = 0; i < n - 1; ++i) {
			   int minIndex = i;
			   for (int j = i + 1; j < n; ++j) {
				   if (compare(arr[j], arr[minIndex])) {
					   minIndex = j;
				   }
			   }

			   std::swap(arr[minIndex], arr[i]);
		   }
	   }

	   inline void updateDataGridViewGeneral(System::Windows::Forms::DataGridView^ dataGridView, std::vector<sportsMan>& man);

		inline void updateDataGridViewGeneralForTemp(System::Windows::Forms::DataGridView^ dataGridView);

	public:
	   inline std::vector<sportsMan> identifyBestResults(const std::vector<sportsMan>& sportsmen);

	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	// Open a SaveFileDialog to choose a file for saving
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Text Files|*.txt|All Files|*.*";
	saveFileDialog1->Title = "Save Sportsman Data File";

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ fileName = saveFileDialog1->FileName;

		IO::StreamWriter^ fileWriter = gcnew IO::StreamWriter(fileName);

		std::vector<sportsMan> selectedVector = (chooseVector == 0) ? temp_vector : sArray;
		
		for (int i = 0; i < selectedVector.size(); i++) {
			std::string name = selectedVector[i].getName();
			std::string surname = selectedVector[i].getSurname();
			System::String^ get3kmstring = selectedVector[i].formatTime(selectedVector[i].get3km());
			System::String^ get100mstring = selectedVector[i].formatTime(selectedVector[i].get100m());

			fileWriter->WriteLine(String::Format("{0} {1} {2} {3} {4} {5} {6}", selectedVector[i].getId(), 
				gcnew String(surname.c_str()), gcnew String(name.c_str()), get3kmstring, get100mstring, 
				 selectedVector[i].getPress(), selectedVector[i].getLongJump()));
		}

		fileWriter->Close();
		
		MessageBox::Show("Data saved successfully", "Save Confirmation", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

	   //Кнопка для можливості додавання спортсмена за допомогою textBox
private: System::Void buttonForStringAddPerson(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ inputD = toolStripTextBox1->Text;

        String^ inputData = handleButton->Text;
		String^ mainString;

		if(inputD == "")
			mainString = inputData;
		else
			mainString = inputD;

        sportsMan newSportsMan;
		sportsMan* temp;
        std::istringstream iss(msclr::interop::marshal_as<std::string>(mainString));

        if (!(iss >> newSportsMan)) {
			throw CIncorrectInput();
        }

        temp = new sportsMan(newSportsMan);
		if (!IsCheckForId(sArray, temp->getId())) {
			throw CIdIsAlreadyExist();
		}
		
		if (temp->varaficateClass(*temp)) {
			if (chooseVector) {
				sArray.push_back(*temp);
				updateDataGridViewGeneral(dataGridView1, sArray);
			}
			else {
				temp_vector.push_back(*temp);
				updateDataGridViewGeneral(dataGridView1, temp_vector);
			}
			findAvarage(sender, e);
		}
		else
			throw CIncorrectInput();

    }
	catch (CExeption& error) {
		showMessageBoxError(error);
    }

    handleButton->Text = "";
	handleButton->BackColor = Color::Azure;
	toolStripTextBox1->Text = "";
	toolStripTextBox1->BackColor = Color::Azure;
}
private: System::Void openTxtFileWithToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
	openFileDialog1->Filter = "Text Files|*.txt|All Files|*.*";
	openFileDialog1->Title = "Select a Sportsman Data File";
	try {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ fileName = openFileDialog1->FileName;
			IO::StreamReader^ fileReader = gcnew IO::StreamReader(fileName);

			if (fileReader->EndOfStream) {
				throw CEmptyFile();
				
			}

			sArray.clear();
			while (!fileReader->EndOfStream) {
				// Read the selected file

				sportsMan newSportsMan;
				sportsMan* temp;
				// Read a line from the file
				String^ inputData = fileReader->ReadLine();


				std::istringstream iss(msclr::interop::marshal_as<std::string>(inputData));
				if(!(iss >> newSportsMan))
				{
					throw CIncorrectInputFromFile();
				}


				temp = new sportsMan(newSportsMan);
				if(!temp->varaficateClass(*temp))
				{
					throw CIncorrectInputFromFile();
				}
				
				sArray.push_back(*temp);
			}
			fileReader->Close();


			updateDataGridViewGeneral(dataGridView1, sArray);
			findAvarage(sender, e);
		}
	}
	catch (CExeption& error) {
		showMessageBoxError(error);
		sArray.clear();
	}


}

		//Знайти найгірші за критерієм елементи. Стрибок або довгий стрибок
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//std::vector<sportsMan> selectedVector = (chooseVector == 0) ? temp_vector : sArray;
	try {
		if(sArray.empty())
		{
			throw CArrayIsEmpty();
		}
		if(checkIfExistAvarageValue == FALSE)
		{
			throw CDontExitAvarage();
		}
		if(listBoxOfKind->SelectedIndex == -1)
		{
			throw CChooseTypeOfWorths();
		}

		temp_vector.clear();


		if (listBoxOfKind->SelectedIndex == 0)
			findWorthst(sArray, temp_vector, avarageLongJump, &sportsMan::getLongJump);
		if (listBoxOfKind->SelectedIndex == 1)
			findWorthst(sArray, temp_vector, avaragePress, &sportsMan::getPress);

		chooseVector = FALSE;
		if (checkBox3->Checked)
		{
			for (int i = 0; i < temp_vector.size(); i++)
			{
				temp_vector[i].setDivision(*avarageFor100m);
			}
		}
		updateDataGridViewGeneral(dataGridView1, temp_vector);
		checkBox3->Checked = FALSE;
		listBoxOfKind->SelectedIndex = NULL;
		listBoxOfKind->SelectedIndex = -1;
	}
	catch (CExeption& error) {
		showMessageBoxError(error);
	}
}
private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int rowCount = dataGridView1->Rows->Count;

	for (int i = rowCount - 2; i >= 0; i--)
	{
		dataGridView1->Rows->RemoveAt(i);
	}
}

		//кнопка для того, щоб повернутись до початкового вектора
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	clearButton_Click(sender, e);
	updateDataGridViewGeneral(dataGridView1, sArray);
	chooseVector = TRUE;
}

		//Кнопка для того, що вивести найкращих
		//учасників з пресом та найгріших учасників з Стрибком в дожину

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if(!checkIfExistAvarageValue)
		{
			throw CDontExitAvarage();
		}
		temp_vector.clear();

		for (int i = 0; i < sArray.size(); i++) {


			if (sArray[i].getPress() > avaragePress) {
				temp_vector.push_back(sArray[i]);
			}
		}
		bool check = TRUE;
		for (int i = 0; i < sArray.size(); i++) {
			check = TRUE;

			for(int j =0; j < temp_vector.size(); j++)
			{
				if(sArray[i].getId() == temp_vector[j].getId())
				{
					check = FALSE;
					break;
				}
			}
			double tempValue = sArray[i].getLongJump();
			if(check == TRUE && tempValue < avarageLongJump)
			{
				temp_vector.push_back(sArray[i]);
			}
			
		}

		chooseVector = FALSE;
		clearButton_Click(sender, e);

		//updateDataGridViewGeneralForTemp(dataGridView1);
		updateDataGridViewGeneral(dataGridView1, temp_vector);
	}
	catch (CExeption& error) {
		showMessageBoxError(error);
	}
}

	//Кнопка, щоб повернутись до модифікованого вектора
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	clearButton_Click(sender, e);
	updateDataGridViewGeneral(dataGridView1, temp_vector);
	chooseVector = FALSE;
}

		//кнопка потрібна для того, щоб вивести найкращих спортсменів за балами
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if(!checkIfExistAvarageValue)
		{
			throw CDontExitAvarage();
		}
		temp_vector.clear();

		for (int i = 0; i < sArray.size(); i++)
		{
			if (sArray[i].getTotalPoints() > generalPoint)
				temp_vector.push_back(sArray[i]);
		}

		clearButton_Click(sender, e);
		updateDataGridViewGeneral(dataGridView1, temp_vector);
		chooseVector = FALSE;
	}
	catch (CExeption& error) {
		showMessageBoxError(error);
	}
}


		//Кнопка для того, щоб вивести вектор спортсменів які
		//пробігли з відхиленням ±7,359% від середнього
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if(checkIfExistAvarageValue == FALSE)
		{
			throw CDontExitAvarage();
		}
		temp_vector.clear();

		chooseVector = FALSE;

		double deviation = 0.07359;  // 7.359%


		for (int i = 0; i < sArray.size(); i++)
		{
			CTimerCount timer = *sArray[i].for3km;

			CTimerCount lowerBound = *avarageFor3km - (*avarageFor3km * deviation);
			CTimerCount upperBound = *avarageFor3km + (*avarageFor3km * deviation);

			if (timer >= lowerBound && timer <= upperBound) {
				temp_vector.push_back(sArray[i]);
			}

		}
		clearButton_Click(sender, e);
		updateDataGridViewGeneral(dataGridView1, temp_vector);
	}
	catch (CExeption& error) {
		showMessageBoxError(error);
	}
}

		//Кнопка потрібна для того, щоб знайти певний об'єкт в векторі значень
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	//imageList1->HandleCreated
	String^ inputData = textBox1->Text;


	try {
		// Convert the String^ to int
		int id = System::Convert::ToInt32(inputData);

		temp_vector.clear();
		bool idFound = false;
		for(int i =0; i < sArray.size(); i++)
		{
			if (id == sArray[i].getId())
			{
				temp_vector.push_back(sArray[i]);
				idFound = true;
			}
		}

		if (!idFound) {
			throw CIdIsNotFound();
		}

		updateDataGridViewGeneral(dataGridView1, temp_vector);
		chooseVector = FALSE;

		// Example: Display the ID in a MessageBox
		MessageBox::Show("Entered ID: " + id.ToString(), "ID Conversion", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (CExeption& error) {
		showMessageBoxError(error);
	}
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellBeginEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellCancelEventArgs^ e) {
	dataGridView1->BeginEdit(true);
}
private: System::Void dataGridView1_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	dataGridView1->EndEdit();

}
private: System::Void toolStripButton1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	saveAsToolStripMenuItem_Click(sender, e);

}
private: System::Void toolTip1_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}

		//Кнопка для видалення учасника з вектора
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	

	try {
		if (sArray.empty()) {
			throw CArrayIsEmpty();
		}
		int deleteId = Convert::ToInt32(numericUpDown1->Value);

		bool idFound = false;
		for (int i = 0; i < sArray.size(); i++) {
			if (deleteId == sArray[i].getId()) {
				// Erase the element at index i
				sArray.erase(sArray.begin() + i);
				idFound = true;
				break; // Exit the loop once the element is erased
			}
		}


		if (!idFound) {
			// Throw a custom exception if the ID is not foundt
			throw CIdIsNotFound();
		}
		if(!sArray.empty())
		{
			findAvarage(sender, e);
		}
		updateDataGridViewGeneral(dataGridView1, sArray);

		// Example: Display the ID in a MessageBox
		MessageBox::Show("Entered ID: " + deleteId.ToString(), "ID Conversion", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (CExeption& error) {
		showMessageBoxError(error);
	}


}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	button9_Click(sender, e);
}
private: System::Void sortToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void toolStripTextBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	buttonForStringAddPerson(sender, e);
}
private: System::Void toolStripButton2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	// Create an instance of the Ask form
	addToolStripMenuItem_Click(sender, e);

}
private: System::Void byThe100MToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if(checkBox2->Checked)
	{
		checkBox2->Checked = FALSE;
	}
	checkBox1->Checked = TRUE;
	button1_Click_1(sender, e);

}
private: System::Void byTheNameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if(checkBox1->Checked)
	{
		checkBox1->Checked = FALSE;
	}
	checkBox2->Checked = TRUE;
	button1_Click_1(sender, e);
}
private: System::Void toolStripTextBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	handleButton->Text = toolStripTextBox2->Text;
}
private: System::Void addToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBox1->Show();
	groupBox2->Hide();
}
private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
	button5_Click(sender, e);
}
private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	button6_Click(sender, e);
}
private: System::Void topPlayerToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button8_Click(sender, e);
}
private: System::Void find7359DeviationPlayersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button9_Click(sender, e);
}
private: System::Void bestPressWorthJumpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button7_Click(sender, e);
}
private: System::Void listBoxOfKind_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
}

	//кнопка потрібна для того, щоб замінити певні значення об'єкту
private: System::Void button11_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ inputData = EditTextBox->Text;


	try {
		// Convert the String^ to int
		IdForChange = System::Convert::ToInt32(inputData);

		bool idFound = false;
		int i = 0;
		for (i = 0; i < sArray.size(); i++)
		{
			if (IdForChange == sArray[i].getId())
			{
				idFound = true;
				indexForChange = i;
				break;
			}
		}

		if (!idFound) {
			// Throw a custom exception if the ID is not foundt
			throw CIdIsNotFound();

		}
		toolStripContainer1->Show();

		textBox3->Text = gcnew String(sArray[i].getName().c_str());
		textBox4->Text = gcnew String(sArray[i].getSurname().c_str());
		textBox5->Text = sArray[i].formatTime(sArray[i].get3km());
		textBox6->Text = sArray[i].formatTime(sArray[i].get100m());
		textBox2->Text = sArray[i].getPress().ToString();  
		textBox7->Text = sArray[i].getLongJump().ToString();

	}
	catch (CExeption& error) {
		showMessageBoxError(error);
	}

}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripContainer1_ContentPanel_Load_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		System::String^ nameBoxText = textBox3->Text;
		std::string name = msclr::interop::marshal_as<std::string>(nameBoxText);

		System::String^ surnameBoxText = textBox4->Text;
		std::string surname = msclr::interop::marshal_as<std::string>(surnameBoxText);

		System::String^ sprintFor3km = textBox5->Text;
		System::String^ sprintFor100m = textBox6->Text;
		System::String^ pressForAmount = textBox2->Text;
		System::String^ LongJumpMeters = textBox7->Text;
		String^ ID = IdForChange.ToString();

		String^ mainString;

		mainString = ID + " " + surnameBoxText + " " + nameBoxText + " " + sprintFor3km + " " + sprintFor100m + " " + pressForAmount + " " + textBox7->Text;

		sportsMan newSportsMan;
		sportsMan* temp;
		std::istringstream iss(msclr::interop::marshal_as<std::string>(mainString));

		// Check if the parsing fails and throw CBasicException with a specific error message
		if (!(iss >> newSportsMan)) 
		{
			throw CIncorrectInput();
		}

		temp = new sportsMan(newSportsMan);
		if (!temp->varaficateClass(*temp))
			throw CIncorrectInput();
		if(!temp->isValidTime(*temp->for100m) && !temp->isValidTime(*temp->for3km))
		{
			throw CInvalidTimeData();
		}

		sArray[indexForChange] = *temp;
		findAvarage(sender, e);
		updateDataGridViewGeneral(dataGridView1, sArray);
	}
	catch (CExeption& error) {
		showMessageBoxError(error);
	}

}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void notifyIcon1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ filePath = "D:\\oopKurs\\readMe.txt";
	try {
		// Read the contents of the text file
		IO::StreamReader^ sr = gcnew IO::StreamReader(filePath);
		String^ noteText = sr->ReadToEnd();
		sr->Close();

		// Check if the note is not empty
		if (!String::IsNullOrEmpty(noteText)) {
			// Display the information in a MessageBox
			MessageBox::Show(noteText, "Text Note Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			// Display a message if the note is empty
			MessageBox::Show("The text note is empty.", "Empty Note", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ ex) {
		// Display an error message if there's an issue reading the file
		MessageBox::Show("Error reading the file: " + ex->Message, "File Reading Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void toolStripContainer2_TopToolStripPanel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripButton7_Click(System::Object^ sender, System::EventArgs^ e) {
	openTxtFileWithToolStripMenuItem_Click(sender, e);
}
private: System::Void toolStripButton8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripTextBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void toolStripTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void toolStripTextBox2_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void toolStripTextBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripTextBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripTextBox2_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	button8_Click(sender, e);
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	button7_Click(sender, e);
}
private: System::Void toolStripContainer1_TopToolStripPanel_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripContainer1_BottomToolStripPanel_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	openTxtFileWithToolStripMenuItem_Click(sender, e);
}
private: System::Void longJumpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	listBoxOfKind->SelectedIndex = 0;
	button4_Click(sender, e);
	listBoxOfKind->SelectedIndex = -1;
}
private: System::Void pressToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	listBoxOfKind->SelectedIndex = 1;
	button4_Click(sender, e);
	listBoxOfKind->SelectedIndex = -1;
}

private: System::Void undoToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	button5_Click(sender, e);
}
private: System::Void redoToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	button6_Click(sender, e);
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void toolStripContainer2_ContentPanel_Load(System::Object^ sender, System::EventArgs^ e) {
	//toolStripContainer2->Show();
}
private: System::Void textBox11_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripContainer2_TopToolStripPanel_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBox1->Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	nameBox->Text = textBoxNameGroup->Text;
	surnameBox->Text = textBoxSurnameGroup->Text;
	spring3kmBox->Text = textBoxSpri3kmGro->Text;
	sprint100mBox->Text = textBoxSprin100mGro->Text;
	pressBox->Text = textBoxPressGroup->Text;
	JumpBox->Text = textBoxInLongGroup->Text;
	IdTextBox->Text = textBoxNumberGroup->Text;
	buttonForAddPerson(sender, e);

	nameBox->Text = "";
	surnameBox->Text = "";
	spring3kmBox->Text = "";
	sprint100mBox->Text = "";
	pressBox->Text = "";
	JumpBox->Text = "";
	IdTextBox->Text = "";


	textBoxNameGroup->Text = "";
	textBoxSurnameGroup->Text = "";
	textBoxSpri3kmGro->Text = "";
	textBoxSprin100mGro->Text = "";
	textBoxPressGroup->Text = "";
	textBoxInLongGroup->Text = "";
	textBoxNumberGroup->Text = "";

	groupBox1->Hide();
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	numericUpDown1->Value = numericUpDown2->Value;
	button11_Click(sender, e);
	groupBox2->Hide();
}
private: System::Void deleteTool_Click(System::Object^ sender, System::EventArgs^ e) {
	deleteToolStripMenuItem_Click(sender, e);
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBox2->Hide();
}
private: System::Void deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	groupBox2->Show();
	groupBox1->Hide();
}
private: System::Void nameBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	nameBox->BackColor = System::Drawing::Color::LightBlue;
}
private: System::Void surnameBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	surnameBox->BackColor = System::Drawing::Color::LightBlue;
}
private: System::Void spring3kmBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	spring3kmBox->BackColor = System::Drawing::Color::LightBlue;
}
private: System::Void sprint100mBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	sprint100mBox->BackColor = System::Drawing::Color::LightBlue;
}
private: System::Void pressBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	pressBox->BackColor = System::Drawing::Color::LightBlue;
}
private: System::Void JumpBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	JumpBox->BackColor = System::Drawing::Color::LightBlue;
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
}; }
