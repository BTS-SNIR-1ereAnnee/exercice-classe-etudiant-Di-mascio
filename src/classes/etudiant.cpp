#include <iostream>
#include <string>
#include "etudiant.h"

using namespace std;

etudiant::etudiant()
{
	m_nom = "test";
	m_note1=15;
	m_note2=10;
}

void etudiant::getEtudiant()
{
	
}

void etudiant::setEtudiant(string nom)
{
	m_nom = nom;
}

int etudiant::getNote1()
{	
	return m_note1;
}

int etudiant::setNote1(int note)
{
	m_note1=note;
}

int etudiant::getNote2()
{	
	return m_note2;
}

int etudiant::setNote2(int note)
{
	m_note2=note;
}

void etudiant::Moyenne()
{
	float moyenne;
	moyenne = m_note1+(m_note2*2);
	moyenne = moyenne/2;
	cout << "votre moyenne est de " << moyenne << endl;
}