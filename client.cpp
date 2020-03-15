//============================================================================
// Author		: Zhenia Steger
// College		: California State University San Marcos
// Purpose		: The purpose of this project is to show how different classes
//					interact with each other. Using three classes with one parent
//					and two children, the children can access the parents'
//					atributes.
// ============================================================================
#include "CompSciProfessor.h"
#include "TenureTrackProf.cpp"
#include "AdjunctProf.cpp"
#include <iostream>

using namespace std;

int main()
{
	float salary;
	AdjunctProf adjP1;
	adjP1.setName("Adam Smith");
	adjP1.setFacId(12345);
	adjP1.setDegree('M');
	adjP1.setCourses(1);
	adjP1.setNoOfTA(2);
	salary = adjP1.findSalary();
	adjP1.print();
	cout << salary << endl;
	TenureTrackProf tenureP1;
	tenureP1.setName("Jim Anderson");
	tenureP1.setFacId(54321);
	tenureP1.setRank('S');
	tenureP1.setExp(8);
	salary = tenureP1.findSalary();
	tenureP1.print();
	cout << salary << endl;
}