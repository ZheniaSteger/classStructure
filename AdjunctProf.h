//============================================================================
// Author		: Zhenia Steger
// College		: California State University San Marcos
// Purpose		: The purpose of this project is to show how different classes
//					interact with each other. Using three classes with one parent
//					and two children, the children can access the parents'
//					atributes.
// ============================================================================
#ifndef AdjunctProf_H
#define AdjunctProf_H
#include "CompSciProfessor.h"
#include <iostream>

using namespace std;

class AdjunctProf : public CompSciProfessor
{
	protected:
		char degree;
		int NoOfTA;
	public:
		int NoOfCourses;
		AdjunctProf();
		AdjunctProf(char D, int taIn, int couIn);

		void setDegree(char D);
		char getDegree();
		void setNoOfTA(int taIn);
		int getNoOfTA();
		void setCourses(int couIn);
		int getCources();

		void print() const;
		float findSalary() const;
};
#endif