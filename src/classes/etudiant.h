#include <iostream>

class etudiant
{
	public:
		etudiant();

		void getEtudiant();
		void setEtudiant();
		float getNote();
		float setNote();
		float getMoyenne();
		float setMoyenne();

	private:
		char m_etudiant[20];
		float m_note;
		float m_moyenne;
};