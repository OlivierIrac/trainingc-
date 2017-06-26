/*
 * appartement.h
 *
 *  Created on: 29 mai 2017
 *      Author: irac1
 */

#ifndef APPARTEMENT_H_
#define APPARTEMENT_H_

#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
#include <memory>

#include "canape.h"


class Appartement
{
	int m_nombrePieces;
	int m_superficie;
	std::string m_couleurMur;
	std::string m_typeSol;
//	std::shared_ptr<Canape> m_canapeSalon;
	std::array <std::unique_ptr<Canape>, 5> m_canapes;

	public:
	Appartement (int pieces, int sup, std::string couleur, std::string sol, std::array<std::unique_ptr<Canape>,5> canape);
	Appartement (Appartement const& appartToCopy);
	void description();
	void repeindre(std::string nouvelleCouleur);
	int getNombreCanapes();
	void setNombrePieces(int nombrePieces);
};

class AppartementException : public std::exception {
private:
	int m_numero;
	std::string m_message;
	std::string m_criticite;
public:
	AppartementException (int no, std::string msg, std::string critic) throw():
		m_numero(no), m_message(msg), m_criticite(critic) {
	}
	virtual const char* what() const throw(){
		std::string s= m_criticite+"Error #"+std::to_string(m_numero)+" : "+m_message;
		return s.c_str();
	}
};


#endif /* APPARTEMENT_H_ */
