#include "Header.h"



Couts calculCoutsClientAFinis(Couts couts, Client* pPart) {

	char status = pPart->statut;
	int coutsParHeureSystem, coutsParHeureStation;

	rechercheCoutsParHeure(status, &coutsParHeureSystem, &coutsParHeureStation);

	int coutsTemps = calculEnFonctionTemps(coutsParHeureSystem, pPart->tempsPasseSystem);

	if (status == 'O')  (couts.coutsSystemOrdinaire += coutsTemps); 
	else (couts.coutsSystemPrioritaire += coutsTemps);
	
	coutsTemps = calculEnFonctionTemps(coutsParHeureStation, pPart->tempsRestantStation);  // probl�me tempsRestantStation = pas celui pass� ! ?

	if (status == 'O') (couts.coutsStationOrdinaire += coutsTemps);
	else (couts.coutsStationsPrioritaire += coutsTemps);
	
	return couts;
}