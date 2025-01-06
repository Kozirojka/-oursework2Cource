#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CourseWork::MyForm form;
	Application::Run(% form);
}

void CourseWork::MyForm::updateDataGridViewGeneral(System::Windows::Forms::DataGridView^ dataGridView,
	std::vector<sportsMan>& man)
{
	dataGridView1->Rows->Clear();
	rowAmount = 0;
	int i = 0;
	for (rowAmount; rowAmount < man.size(); rowAmount++) {
		dataGridView1->Rows->Add(1);


		dataGridView->Rows[rowAmount]->Cells[0]->Value = man[i].getId();
		dataGridView->Rows[rowAmount]->Cells[1]->Value = gcnew System::String(man[i].getSurname().c_str());
		dataGridView->Rows[rowAmount]->Cells[2]->Value = gcnew System::String(man[i].getName().c_str());
		dataGridView->Rows[rowAmount]->Cells[3]->Value = man[i].formatTime(man[i].get3km());
		dataGridView->Rows[rowAmount]->Cells[4]->Value = man[i].formatTime(man[i].get100m());
		dataGridView->Rows[rowAmount]->Cells[5]->Value = man[i].getPress();
		dataGridView->Rows[rowAmount]->Cells[6]->Value = man[i].getLongJump();
		dataGridView->Rows[rowAmount]->Cells[7]->Value = man[i].getTotalPoints();

		if(checkBox3->Checked)
		{
			dataGridView->Rows[rowAmount]->Cells[8]->Value = man[i].formatTime(man[i].getDivision());
		}else
			dataGridView->Rows[rowAmount]->Cells[8]->Value = "--:--:--";

		i++;
	}
}

void CourseWork::MyForm::updateDataGridViewGeneralForTemp(System::Windows::Forms::DataGridView^ dataGridView)
{
	dataGridView1->Rows->Clear();
	rowAmount = 0;
	int i = 0;
	for (rowAmount; rowAmount < temp_vector.size(); rowAmount++) {
		dataGridView1->Rows->Add(1);
		dataGridView->Rows[rowAmount]->Cells[0]->Value = temp_vector[i].getId();
		dataGridView->Rows[rowAmount]->Cells[1]->Value = gcnew System::String(temp_vector[i].getSurname().c_str());
		dataGridView->Rows[rowAmount]->Cells[2]->Value = gcnew System::String(temp_vector[i].getName().c_str());
		dataGridView->Rows[rowAmount]->Cells[3]->Value = temp_vector[i].formatTime(temp_vector[i].get3km());
		dataGridView->Rows[rowAmount]->Cells[4]->Value = temp_vector[i].formatTime(temp_vector[i].get100m());
		dataGridView->Rows[rowAmount]->Cells[5]->Value = temp_vector[i].getPress();
		dataGridView->Rows[rowAmount]->Cells[6]->Value = temp_vector[i].getLongJump();
		dataGridView->Rows[rowAmount]->Cells[7]->Value = temp_vector[i].getTotalPoints();

		if (checkBox3->Checked)
		{
			dataGridView->Rows[rowAmount]->Cells[8]->Value = temp_vector[i].formatTime(temp_vector[i].getDivision());
		}
		else
			dataGridView->Rows[rowAmount]->Cells[8]->Value = "--:--:--";

		i++;
	}
}

std::vector<sportsMan> CourseWork::MyForm::identifyBestResults(const std::vector<sportsMan>& sportsmen)
{
		 

	// Calculate the acceptable deviation
	double deviation = 0.07359;  // 7.359%


	std::vector<sportsMan> bestResult;
	for(int i = 0; i < sportsmen.size(); i++)
	{
		CTimerCount timer = *sportsmen[i].for3km;

		CTimerCount lowerBound = *avarageFor3km - (*avarageFor3km * deviation);
		CTimerCount upperBound = *avarageFor3km + (*avarageFor3km * deviation);

		if (timer >= lowerBound && timer <= upperBound) {
			bestResult.push_back(sportsmen[i]);
		}
	}
	return bestResult;
}
