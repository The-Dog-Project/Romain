#include "HeureSys.h"

Heure_Ration::Heure_Ration()
{
}

Heure_Ration::~Heure_Ration()
{
}

bool Heure_Ration::RecupererHeure(int *heures, int *minutes)
{
	time_t t;
	time(&t); // t contient la date et l'heure courante
	struct tm *newTime1;
	newTime1 = localtime(&t);
	*heures = newTime1->tm_hour;		// Les heures sont dans "heures"
	*minutes = newTime1->tm_min;		// Les minutes sont dans "minutes"
	//*secondes = newTime1->tm_sec;		// Les secondes sont dans "secondes"
	*h = *heures;
	return true;

}

bool Heure_Ration::ComparerHeure(int *heuresSys, int *minutesSys, int *heuresLoc, int *minutesLoc)
{
	if (*heuresLoc == *heuresSys)
		if (*minutesSys == *minutesLoc)
			return true;
}
