#include <iostream>
#include <string>

using namespace std;

class etudiant
{
	public:
		etudiant();

		void getEtudiant();
		void setEtudiant(string nom);
		float getNote();
		float setNote(float note);
		float getMoyenne();
		float setMoyenne(float note1, float note2);

	private:
		string m_nom;
		float m_note;
		float m_moyenne;
		float stock;
};