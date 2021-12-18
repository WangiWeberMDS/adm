#include "Header.h"


int genererDuree(int* xn, int a,int c, int m) {
	int dur�e;

	(*xn) = nombreAl�atoire(m, a, c, *xn);

	double u1 = (*xn) / m;
	

	if (u1 < 0.38) //r=24
		dur�e = 1;
	else {
		if (u1 < 0.67) dur�e = 2; //r=18
		else {
			if (u1 < 0.85) dur�e = 3; //r=11
			else {
				if (u1 < 0.92) dur�e = 4;
				else {
					if (u1 < 0.97) dur�e = 5;
					else dur�e = 6;
				}
			}
		}
	}

	return dur�e;	
}