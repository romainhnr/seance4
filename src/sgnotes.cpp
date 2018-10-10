#include <iostream>
#include <vector>
#include <string>
#include <fstream>
//#include "etudiants.h"
using namespace std;

class etudiants{
	public:
		string nom;
		int note;
};

int main(){
	vector<etudiants> etudiant;
	string tmp_name;
	int tmp_note;
	
	ofstream f_notes;
	f_notes.open("notes.txt");

	for(int i = 0;i<3;i++){
		cout << "Entrez le nom d'un étudiant" << endl;
		cin >> tmp_name;
		cout << "Entrez la note de cet étudiant" << endl;
		cin >> tmp_note;
		etudiant.push_back(etudiants());
		etudiant[i].nom = tmp_name;
		etudiant[i].note = tmp_note;
		//ecrire le nom et le préom de l'étudiant dans un fichier
		f_notes << etudiant[i].nom << "		" << etudiant[i].note << endl; 
	}
	f_notes.close();
	cout << "La liste des étudiants avec leurs notes :" << endl;
	for(int i = 0; i<etudiant.size(); i++){
		cout << etudiant[i].nom << "	" << etudiant[i].note << endl;
	}
//rechercher d'un étudiant dans la liste
cout << "Entrez le nom de l'étudiant que vous cherchez" << endl;
cin >> tmp_name;
	for(int i = 0; i<etudiant.size(); i++){
	if (tmp_name == etudiant[i].nom){
	cout << "La note de l'étudiant " << etudiant[i].nom << " est de " << etudiant[i].note << endl;
	}
}
//gérer la persistence des notes
	
	ofstream fichier_notes;
	fichier_notes.open("file.txt");
	fichier_notes<<"EPSI";
	fichier_notes.close();

return 0;
}
