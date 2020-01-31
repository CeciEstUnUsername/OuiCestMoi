#include "eleve.h"
#include <conio.h>

Eleve::Eleve() {
	codeEleve = "";
	nom = "";
	prenom = "";
	lActivite = NULL;
}

Eleve::Eleve(string aCodeEleve, string aNom, string aPrenom) {
	codeEleve = aCodeEleve;
	nom = aNom;
	prenom = aPrenom;
	lActivite = NULL;
}

string Eleve::getCodeEleve() const {
	return codeEleve;
}

string Eleve::getNom() const {
	return nom;
}

string Eleve::getPrenom() const {
	return prenom;
}

void Eleve::InscrireEleve(string aCodeEleve, string aNom, string aPrenom) {
	codeEleve = aCodeEleve;
	nom = aNom;
	prenom = aPrenom;
}

void Eleve::InscrireAUneActivite(Activite* aActivite) {
	lActivite = aActivite;
}

Activite* Eleve::getActivite() const {
	return lActivite;
}