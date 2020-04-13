/**
*Bolig.h, deklerasjonsklassen
*@author: Abdisalan M. Husein, Mahamed Hassan Said, Elias Touil, NTNU Gj�vik
*@file: Bolig.h.
*
*/




#ifndef __BOLIG_H
#define __BOLIG_H
#include <string>
#include <iostream>
#include <fstream>
#include "enum.h"
#include <string>


class Bolig {
private:
	int oppdragsNr,					// et unikt oppdrags-/bolignummer
		innlagtDato,				// Inlagt dato i systemet
		byggeaar,
		bruttoAreal,
		antallSoverom,
		angittPris;

	std::string navnsaksb,			// Navnet p� interne saksbehandleren hos eiendomsfirmaet.
		navnEier,					// Navnet p� n�v�rende eir
		gateAdresse,				// gate + nr
		postAdresse,				// postnumber + sted
		boligBeskriv;				//		LATER
	Boligtype boligType;

public:
	Bolig();
	Bolig(const int nr) { oppdragsNr = nr; };
	int		hentID() { return oppdragsNr; }
	void	lesData();
	void	skrivData() const;
	void	skrivTilFil(std::ofstream & ut);
	//void nyOppdrag();	
	void lesFraFil(std::ifstream& inn);

};

#endif