
/*
 * felin_template.h
 *
 *  Created on: 29 mai 2017
 *      Author: irac1
 */

#ifndef FELIN_TEMPLATE_H_
#define FELIN_TEMPLATE_H_

// ajout commentaire pour Git

#include <iostream>

template <typename T>
class Felin
{
protected:
	std::string m_nom;
	std::string m_espece;
	T m_age;

public:
	Felin (std::string nom, std::string espece, T age);
	std::string seNourrir();
	std::string sePresenter();
};

template <typename T>
Felin<T>::Felin (std::string nom, std::string espece, T age):
	m_nom(nom), m_espece(espece), m_age(age) {
}

template <typename T>
std::string Felin<T>::seNourrir() {
	return "Je mange de la viande";
}

template <typename T>
std::string Felin<T>::sePresenter() {
	std::string s = "Je suis " + m_nom + ", j'ai " + std::to_string(m_age) + " ans et je suis un " + m_espece +". ";
	return s;
}

template <>
std::string Felin<std::string>::sePresenter() {
	std::string s = "Je suis " + m_nom + ", j'ai " + m_age + " ans et je suis un " + m_espece +". ";
	return s;
}

#endif /* FELIN_TEMPLATE_H_ */
