#include <iostream>
#include <string>
#include "etudiant.h"

using namespace std;

int main() 
{
	etudiant etudiant1;
	string nom;
	float note = 0, stock=0;
	cout << "entrez le nom de l'etudiant : " << endl;
	cin >> nom;
	etudiant1.setEtudiant(nom);
	cout << "entrez une note sur 20 : " << endl;
	cin >> note;
	etudiant1.setNote1(note);
	cout << "entrez une note sur 10 : " << endl;
	cin >> note;
	etudiant1.setNote2(note);
}