#include "Header.h"


Couts lib�rerClientStation(Station* pStation, Couts couts) {
	
	Client* pPart = pStation->pClient;

	couts = calculCoutsClientAFinis(couts, pPart);

	pStation->pClient = NULL;
	free(pPart);
	return couts;
}