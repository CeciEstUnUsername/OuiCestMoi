#include "activite.h"

Activite::Activite() {
	codeActivite = "";
	titre = "";
	responsable = "";
}

Activite::Activite(string aCodeActivite, string aTitre, string aResponsable) {
	codeActivite = aCodeActivite;
	titre = aTitre;
	responsable = aResponsable;
}

void Activite::InitialiserActivite(string aCode, string aTitre) {
	codeActivite = aCode;
	titre = aTitre;
}

void Activite::AssignerResponsable(string aResponsable) {
	responsable = aResponsable;
}

string Activite::getCodeActivite() const {
	return codeActivite;
}

string Activite::getTitre() const {
	return titre;
}

string Activite::getResponsable() const {
	return responsable;
}