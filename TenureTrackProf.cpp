//============================================================================
// Author		: Zhenia Steger
// College		: California State University San Marcos
// Purpose		: The purpose of this project is to show how different classes
//					interact with each other. Using three classes with one parent
//					and two children, the children can access the parents'
//					atributes.
// ============================================================================
#include "TenureTrackProf.h"

TenureTrackProf::TenureTrackProf()
{
	rank = 'Z';
	YearOfExp = 0;
}
TenureTrackProf::TenureTrackProf(char rankIn, int ExpIn)
{
	rank = rankIn;
	YearOfExp = ExpIn;
}

void TenureTrackProf::setRank(char rankIn) { rank = rankIn; }

char TenureTrackProf::getRank() { return rank; }

void TenureTrackProf::setExp(int ExpIn) { YearOfExp = ExpIn; }

int TenureTrackProf::getExp() { return YearOfExp; }


void TenureTrackProf::print() const
{
	cout << endl;
	cout << "===Tenured Professor===" << endl;
	cout << "Name: " << name << endl;
	cout << "Email: " << email << endl;
	cout << "Faculty ID: " << facultyId << endl;
	cout << "Rank: ";
	if(rank == 'A') cout << "Assistant" << endl;
	if(rank == 'S') cout << "Associate" << endl;
	if(rank == 'F') cout << "Full" << endl;

	cout << "Years of experience: " << YearOfExp << endl;
	cout << "Salary: " << endl;
	//cout << endl;
}

float TenureTrackProf::findSalary() const
{
	float sal;
	if(rank == 'A')
	{
		sal = 65000 + (1500 * YearOfExp);
	}
	else if(rank == 'S')
	{
		sal = 80000 + (1500 * YearOfExp);
	}
	else if(rank == 'F')
	{
		sal = 90000 + (1500 * YearOfExp);
	}
	else sal = 0;
	return sal;
}