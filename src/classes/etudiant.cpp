#include <iostream>
#include <string>
#include "etudiant.h"

using namespace std;

etudiant::etudiant()
{

}

void etudiant::getEtudiant()
{
	
}

void etudiant::setEtudiant(string nom)
{
	m_nom = nom;
	cout << m_nom << endl;
}

float etudiant::getNote1()
{	
	return m_note1;
}

float etudiant::setNote1(float note)
{
	m_note1=note;
	cout << m_note1 << endl;
}

float etudiant::getNote2()
{	
	return m_note2;
}

float etudiant::setNote2(float note)
{
	m_note2=note;
	cout << m_note2 << endl;
}

float etudiant::getMoyenne()
{
	return m_moyenne;
}

float etudiant::setMoyenne(float note1, float note2)
{

}