#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
using namespace std;

class Heure_Ration
{
public:
	Heure_Ration();
	~Heure_Ration();

	//RecupererHeure récupère l'heure du système
	//Paramètres d'entrée : int *heures, *minutes contenant respectivement l'heure et les minutes de l'heure courante
	//Retourne true si l'heure est récupéré
	bool RecupererHeure(int *heures, int *minutes);

	//ComparerHeure compare l'heure du fichier .txt avec l'heure courante
	// int *heures, *minutes contenant respectivement l'heure et les minutes de l'heure courante et int *heuresLoc, *minutesLoc contenant l'heure et les minutes de l'heure locale
	// retourne true si les deux heures correspondent sinon retourne false
	bool ComparerHeure(int *heuresSys, int *minutesSys, int *heuresLoc, int *minutesLoc);
	
};

