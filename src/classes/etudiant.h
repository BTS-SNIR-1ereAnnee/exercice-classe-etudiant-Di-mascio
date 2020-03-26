#include <iostream>
#include <string>

using namespace std;

class etudiant
{
	public:
		etudiant();

		void getEtudiant();
		void setEtudiant(string nom);
		int getNote1();
		int setNote1(int note);
		int getNote2();
		int setNote2(int note);
		void Moyenne();

	private:
		string m_nom;
		int m_note1;
		int m_note2;
};