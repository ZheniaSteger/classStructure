//============================================================================
// Author		: Zhenia Steger
// College		: California State University San Marcos
// Purpose		: The purpose of this project is to show how different classes
//					interact with each other. Using three classes with one parent
//					and two children, the children can access the parents'
//					atributes.
// ============================================================================
#ifndef TenureTrackProf_H
#define TenureTrackProf_H
#include "CompSciProfessor.h"
#include <iostream>

using namespace std;

class TenureTrackProf : public CompSciProfessor
{
	protected:
		char rank;
		int YearOfExp;
	public:
		TenureTrackProf();
		TenureTrackProf(char rankIn, int ExpIn);

		void setRank(char rankIn);
		char getRank();
		void setExp(int ExpIn);
		int getExp();

		void print() const;
		float findSalary() const;
};
#endif