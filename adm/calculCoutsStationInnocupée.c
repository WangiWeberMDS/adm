#include "Header.h"



int calculCoutsStationInoccup�e(Station* pDebutStation) {
	int couts, coutsParHeure = 18;

	Station* pStation = &pDebutStation;
	while (pStation != NULL) {
		couts += calculCoutEnFonctionTemps(coutsParHeure, pStation->tempsInoccup�e);

		pStation = pStation->pSuivStation;
	}

	return couts;
}