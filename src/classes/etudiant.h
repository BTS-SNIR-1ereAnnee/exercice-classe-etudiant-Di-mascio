#include <iostream>
#include <string>

using namespace std;

class etudiant
{
	public:
		etudiant();

		void getEtudiant();
		void setEtudiant(string nom);
		float getNote1();
		float setNote1(float note);
		float getNote2();
		float setNote2(float note);
		float getMoyenne();
		float setMoyenne(float note1, float note2);

	private:
		string m_nom;
		float m_note1;
		float m_note2;
		float m_moyenne;
};