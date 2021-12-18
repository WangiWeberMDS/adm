#include "Header.h"

Station* initStations(int nbStation) {
	int iStation = 0;
	Station* pPrec = NULL;
	Station* pDebutStations = NULL;
	bool continuer = true;

	while (iStation < nbStation && continuer) {
		Station* pNouv = malloc(sizeof(Station));
		continuer = pNouv != NULL; 
		if (continuer) {
			pNouv->pClient = NULL;
			pNouv->tempsInoccup�e = 0;
			if (pDebutStations == NULL) {
				pDebutStations = pNouv;
			}
			else {
				pPrec->pSuivStation = pNouv;
			}
			pPrec = pNouv;
			pNouv->pSuivStation = NULL;
		}
		else {
			printf("Plus d'espace m�moire -> cr�ation Station !");
			exit(EXIT_FAILURE);
		}
		iStation++;
	}


	return pDebutStations;
}