//============================================================================
// Author		: Zhenia Steger
// College		: California State University San Marcos
// Purpose		: The purpose of this project is to show how different classes
//					interact with each other. Using three classes with one parent
//					and two children, the children can access the parents'
//					atributes.
// ============================================================================
#include "AdjunctProf.h"

AdjunctProf::AdjunctProf()
{
	degree = 'Z';
	NoOfTA = 0;
	NoOfCourses = 0;
}

AdjunctProf::AdjunctProf(char D, int taIn, int couIn)
{
	degree = D;
	NoOfTA = taIn;
	NoOfCourses = couIn;
}

void AdjunctProf::setDegree(char D) { degree = D; }

char AdjunctProf::getDegree() { return degree; }

void AdjunctProf::setNoOfTA(int taIn) { NoOfTA = taIn; }

int AdjunctProf::getNoOfTA() { return NoOfTA; }

void AdjunctProf::setCourses(int couIn) { NoOfCourses = couIn; }

int AdjunctProf::getCources() { return NoOfCourses; }

void AdjunctProf::print() const
{
	cout << endl;
	cout << "===Adjunct Professor===" << endl;
	cout << "Name: " << name << endl;
	cout << "Email: " << email << endl;
	cout << "Faculty ID: " << facultyId << endl;
	cout << "Degree: ";
	if(degree == 'B') cout << "Bachelors" << endl;
	if(degree == 'M') cout << "Masters" << endl;
	if(degree == 'P') cout << "PhD" << endl;
	cout << "Number of TAs: " << NoOfTA << endl;
	cout << "Nuber of Cources: " << NoOfCourses << endl;
	cout << "Salary: " << endl;
}

float AdjunctProf::findSalary() const
{
	float sal;
	if(degree == 'B')
	{
		sal = (NoOfTA * 1500) + (NoOfCourses * 3000);
	}
	if(degree == 'M')
	{
		sal = (NoOfTA * 2000) + (NoOfCourses * 4000);
	}
	if(degree == 'P')
	{
		sal = (NoOfTA * 2500) + (NoOfCourses * 5000);
	}
	return sal;
}