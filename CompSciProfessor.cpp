//============================================================================
// Author		: Zhenia Steger
// College		: California State University San Marcos
// Purpose		: The purpose of this project is to show how different classes
//					interact with each other. Using three classes with one parent
//					and two children, the children can access the parents'
//					atributes.
// ============================================================================
#include "CompSciProfessor.h"

CompSciProfessor::CompSciProfessor()
{
	name = "?";
	email = "?";
	facultyId = 0;
	salary = 0;
}

CompSciProfessor::CompSciProfessor(string nameIn, string emailIn, long facIdIn)
{
	name = nameIn;
	email = emailIn;
	facultyId = facIdIn;
}

void CompSciProfessor::setName(string nameIn) { name = nameIn; }

string CompSciProfessor::getName() { return name; }

void CompSciProfessor::setEmail(string emailIn) { email = emailIn; }

string CompSciProfessor::getEmail() { return email; }

void CompSciProfessor::setFacId(long facIdIn) { facultyId = facIdIn; }

long CompSciProfessor::getFacId() { return facultyId; }