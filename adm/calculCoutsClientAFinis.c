#include "Header.h"



Couts calculCoutsClientAFinis(Couts couts, Client* pPart) {

	char status = pPart->statut;
	int coutsParHeureSystem, coutsParHeureStation;

	rechercheCoutsParHeureSystem(status, &coutsParHeureSystem, &coutsParHeureStation);

	int coutsTemps = calculCoutsEnFonctionTemps(coutsParHeureSystem, pPart->tempsPasseSystem);

	(status == 'O') ? (couts.coutsSystemOrdinaire += coutsTemps) : (couts.coutsSystemPrioritaire += coutsTemps);
	
	coutsTemps = calculCoutsEnFonctionTemps(coutsParHeureStation, pPart->tempsRestantStation);  // probl�me tempsRestantStation = pas celui pass� ! ?

	(status == 'O') ? (couts.coutsStationOrdinaire += coutsTemps) : (couts.coutsStationsPrioritaire += coutsTemps);
	
	return couts;
}