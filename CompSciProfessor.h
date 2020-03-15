//============================================================================
// Author		: Zhenia Steger
// College		: California State University San Marcos
// Purpose		: The purpose of this project is to show how different classes
//					interact with each other. Using three classes with one parent
//					and two children, the children can access the parents'
//					atributes.
// ============================================================================
#ifndef CompSciProfessor_H
#define CompSciProfessor_H
#include <iostream>

using namespace std;

class CompSciProfessor
{
		protected:
			string name;
			string email;
			long facultyId;
			float salary;
		public:
			CompSciProfessor();
			CompSciProfessor(string nameIn, string emailIn, long facIdIn);

			void setName(string nameIn);
			string getName();
			void setEmail(string emailIn);
			string getEmail();
			void setFacId(long facIdIn);
			long getFacId();
};
#endif