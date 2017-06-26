# include "gtest/gtest.h"
#include "../src/vehicule.h"
#include "../src/moto.h"
#include "../src/voiture.h"
#include "../src/concession.h"
using namespace std;


TEST(TestVehicule, changerPrix) {
	Vehicule monVehicule ("Volkswagen", "Passat", 35000, "rouge", "metal", "brillant");
	EXPECT_EQ ("Volkswagen Passat. 35000.000000\x80. rouge metal brillant. \n", monVehicule.description());
	monVehicule.changerPrix(25000);
	EXPECT_EQ ("Volkswagen Passat. 25000.000000\x80. rouge metal brillant. \n", monVehicule.description());
}

TEST(TestVehicule, ameliorerCarrosserie1) {
	Vehicule monVehicule ("Volkswagen", "Passat", 100, "rouge", "metal", "brillant");
	EXPECT_EQ ("Volkswagen Passat. 100.000000\x80. rouge metal brillant. \n", monVehicule.description());
	monVehicule.ameliorerCarrosserie();
	EXPECT_EQ ("Volkswagen Passat. 200.000000\x80. rouge Fibre Carbone Perlee. \n", monVehicule.description());
}

TEST(TestVehicule, ameliorerCarrosserie2) {
	Vehicule monVehicule ("Volkswagen", "Passat", 100, "rouge", "metal", "Perlee");
	EXPECT_EQ ("Volkswagen Passat. 100.000000\x80. rouge metal Perlee. \n", monVehicule.description());
	monVehicule.ameliorerCarrosserie();
	EXPECT_EQ ("Volkswagen Passat. 150.000000\x80. rouge Fibre Carbone Perlee. \n", monVehicule.description());
}

TEST(TestVehicule, ameliorerCarrosserie3) {
	Vehicule monVehicule ("Volkswagen", "Passat", 100, "rouge", "Fibre Carbone", "mat");
	EXPECT_EQ ("Volkswagen Passat. 100.000000\x80. rouge Fibre Carbone mat. \n", monVehicule.description());
	monVehicule.ameliorerCarrosserie();
	EXPECT_EQ ("Volkswagen Passat. 150.000000\x80. rouge Fibre Carbone Perlee. \n", monVehicule.description());
}

TEST(TestMoto, description) {
	Moto maMoto ("Harley", "Davidson", 10000, "noire", "fer", "chrome", 1000);
	EXPECT_EQ ("Moto Harley Davidson. 10000.000000\x80. noire fer chrome. \nCylindree1000cm3\n", maMoto.description());
}

TEST(TestVoiture, description) {
	Voiture maVoiture ("Renault", "Megane", 20000, "bleue", "metal", "brillant", "berline");
	EXPECT_EQ ("Voiture Renault Megane. 20000.000000\x80. bleue metal brillant. \nType:berline\n", maVoiture.description());
}

TEST(TestConcession, ajoutVehicules) {
	Concession maConcession("Renault");
	shared_ptr<Vehicule> monVehicule = make_shared<Vehicule> ("Volkswagen", "Passat", 35000, "rouge", "metal", "brillant");
	shared_ptr<Voiture> maVoiture = make_shared<Voiture> ("Renault", "Megane", 20000, "bleue", "metal", "brillant", "berline");
	shared_ptr<Moto> maMoto = make_shared<Moto> ("Harley", "Davidson", 10000, "noire", "fer", "chrome", 1000);
	maConcession.ajouterVehicule(monVehicule);
	maConcession.ajouterVehicule(maMoto);
	maConcession.ajouterVehicule(maVoiture);
	EXPECT_EQ ("Renault", maConcession.getNom());
	EXPECT_EQ (65000, maConcession.calculerValeurStock());
	EXPECT_EQ ("Volkswagen Passat. 35000.000000\x80. rouge metal brillant. \nHarley Davidson. 10000.000000\x80. noire fer chrome. \nRenault Megane. 20000.000000\x80. bleue metal brillant. \n",maConcession.inventaire());
	cout<<maConcession.inventaire()<<endl;
	maConcession.trierVehicules();
	cout<<maConcession.inventaire()<<endl;
}

TEST(TestVehicule, operatorequal) {
	shared_ptr<Vehicule> monVehicule1 = make_shared<Vehicule> ("Volkswagen", "Passat", 35000, "rouge", "metal", "brillant");
	shared_ptr<Vehicule> monVehicule2 = make_shared<Vehicule> ("Volkswagen", "Passat", 35000, "rouge", "metal", "brillant");

	shared_ptr<Voiture> maVoiture1 = make_shared<Voiture> ("Renault", "Megane", 20000, "bleue", "metal", "brillant", "berline");
	shared_ptr<Voiture> maVoiture2 = make_shared<Voiture> ("Renault", "Megane", 20000, "bleue", "metal", "brillant", "berline");

	shared_ptr<Moto> maMoto1 = make_shared<Moto> ("Harley", "Davidson", 10000, "noire", "fer", "chrome", 1000);
	shared_ptr<Moto> maMoto2= make_shared<Moto> ("Harley", "Davidson", 10000, "noire", "fer", "chrome", 1000);

	EXPECT_TRUE (*monVehicule1==*monVehicule2);
	EXPECT_TRUE (*maVoiture1==*maVoiture2);
	EXPECT_TRUE (*maMoto1==*maMoto2);
	EXPECT_FALSE (*monVehicule1!=*monVehicule2);
	EXPECT_FALSE (*maVoiture1!=*maVoiture2);
	EXPECT_FALSE (*maMoto1!=*maMoto2);
	EXPECT_FALSE (*maVoiture1==*maMoto1);
	EXPECT_TRUE (*maVoiture1!=*maMoto1);
}

TEST(TestVehicule, operatorinferior) {
	shared_ptr<Vehicule> monVehicule = make_shared<Vehicule> ("Volkswagen", "Passat", 35000, "rouge", "metal", "brillant");
	shared_ptr<Voiture> maVoiture = make_shared<Voiture> ("Renault", "Megane", 20000, "bleue", "metal", "brillant", "berline");
	shared_ptr<Moto> maMoto = make_shared<Moto> ("Harley", "Davidson", 10000, "noire", "fer", "chrome", 1000);
	EXPECT_TRUE (*maVoiture<*monVehicule);
	EXPECT_TRUE (*maMoto<*maVoiture);
	EXPECT_FALSE (*monVehicule<*maMoto);
}

TEST(TestConcession, nbuniquevehicules) {
	shared_ptr<Vehicule> monVehicule1 = make_shared<Vehicule> ("Volkswagen", "Passat", 35000, "rouge", "metal", "brillant");
	shared_ptr<Vehicule> monVehicule2 = make_shared<Vehicule> ("Volkswagen", "Passat", 35000, "rouge", "metal", "brillant");

	shared_ptr<Voiture> maVoiture1 = make_shared<Voiture> ("Renault", "Megane", 20000, "bleue", "metal", "brillant", "berline");
	shared_ptr<Voiture> maVoiture2 = make_shared<Voiture> ("Renault", "Megane", 20000, "bleue", "metal", "brillant", "berline");

	shared_ptr<Moto> maMoto1 = make_shared<Moto> ("Harley", "Davidson", 10000, "noire", "fer", "chrome", 1000);
	shared_ptr<Moto> maMoto2= make_shared<Moto> ("Harley", "Davidson", 10000, "noire", "fer", "chrome", 1000);

	Concession maConcession("Renault");
	maConcession.ajouterVehicule(monVehicule1);
	maConcession.ajouterVehicule(maMoto1);
	maConcession.ajouterVehicule(maVoiture1);
	maConcession.ajouterVehicule(monVehicule2);
	maConcession.ajouterVehicule(maMoto2);
	maConcession.ajouterVehicule(maVoiture2);

	EXPECT_EQ (3, maConcession.nbDifferentVehicules());

}

TEST(TestConcession, achatVehicules) {
	Concession maConcession("Renault");
	EXPECT_EQ (100000, maConcession.getTresorerie());
	shared_ptr<Vehicule> monVehicule = make_shared<Vehicule> ("Volkswagen", "Passat", 35000, "rouge", "metal", "brillant");
	shared_ptr<Voiture> maVoiture = make_shared<Voiture> ("Renault", "Megane", 20000, "bleue", "metal", "brillant", "berline");
	shared_ptr<Moto> maMoto = make_shared<Moto> ("Harley", "Davidson", 10000, "noire", "fer", "chrome", 1000);
	maConcession.acheter (maVoiture);
	EXPECT_EQ (84000, maConcession.getTresorerie());
	EXPECT_EQ (20000, maConcession.calculerValeurStock());
	EXPECT_EQ ("Renault Megane. 20000.000000\x80. bleue metal brillant. \n",maConcession.inventaire());
	maConcession.acheter (maMoto);
	EXPECT_EQ (76000, maConcession.getTresorerie());
	EXPECT_EQ (30000, maConcession.calculerValeurStock());
	EXPECT_EQ ("Renault Megane. 20000.000000\x80. bleue metal brillant. \nHarley Davidson. 10000.000000\x80. noire fer chrome. \n",maConcession.inventaire());
}

TEST(TestConcession, venteVehicules) {
	Concession maConcession("Renault");
	EXPECT_EQ (100000, maConcession.getTresorerie());
	shared_ptr<Vehicule> monVehicule = make_shared<Vehicule> ("Volkswagen", "Passat", 35000, "rouge", "metal", "brillant");
	shared_ptr<Voiture> maVoiture = make_shared<Voiture> ("Renault", "Megane", 20000, "bleue", "metal", "brillant", "berline");
	shared_ptr<Moto> maMoto = make_shared<Moto> ("Harley", "Davidson", 10000, "noire", "fer", "chrome", 1000);
	maConcession.acheter (maVoiture);
	maConcession.acheter (maMoto);
	EXPECT_EQ (76000, maConcession.getTresorerie());
	EXPECT_EQ (30000, maConcession.calculerValeurStock());
	EXPECT_EQ ("Renault Megane. 20000.000000\x80. bleue metal brillant. \nHarley Davidson. 10000.000000\x80. noire fer chrome. \n",maConcession.inventaire());
	maConcession.vendre(0);
	EXPECT_EQ (96000, maConcession.getTresorerie());
	EXPECT_EQ (10000, maConcession.calculerValeurStock());
	maConcession.vendre(0);
	EXPECT_EQ (106000, maConcession.getTresorerie());
	EXPECT_EQ (0, maConcession.calculerValeurStock());

}

TEST(TestConcession, promoVehicules) {
	Concession maConcession("Renault");
	EXPECT_EQ (100000, maConcession.getTresorerie());
	shared_ptr<Vehicule> monVehicule = make_shared<Vehicule> ("Volkswagen", "Passat", 35000, "rouge", "metal", "brillant");
	shared_ptr<Voiture> maVoiture = make_shared<Voiture> ("Renault", "Megane", 20000, "bleue", "metal", "brillant", "berline");
	shared_ptr<Moto> maMoto = make_shared<Moto> ("Harley", "Davidson", 10000, "noire", "fer", "chrome", 1000);
	maConcession.acheter (maVoiture);
	maConcession.acheter (maMoto);
	maConcession.changerPrix(-0.2);
	EXPECT_EQ (76000, maConcession.getTresorerie());
	EXPECT_EQ (24000, maConcession.calculerValeurStock());
	EXPECT_EQ ("Renault Megane. 16000.000000\x80. bleue metal brillant. \nHarley Davidson. 8000.000000\x80. noire fer chrome. \n",maConcession.inventaire());
}

TEST(TestConcession, liquiderMarque) {
	Concession maConcession("Renault");
	EXPECT_EQ (100000, maConcession.getTresorerie());
	shared_ptr<Vehicule> monVehicule = make_shared<Vehicule> ("Volkswagen", "Passat", 35000, "rouge", "metal", "brillant");
	shared_ptr<Voiture> maVoiture = make_shared<Voiture> ("Renault", "Megane", 20000, "bleue", "metal", "brillant", "berline");
	shared_ptr<Voiture> maVoiture2 = make_shared<Voiture> ("Volkswagen", "Golf", 20000, "rouge", "metal", "brillant", "coupé");
	shared_ptr<Moto> maMoto = make_shared<Moto> ("Harley", "Davidson", 10000, "noire", "fer", "chrome", 1000);
	maConcession.acheter(monVehicule);
	maConcession.acheter(maMoto);
	maConcession.acheter(maVoiture);
	maConcession.acheter(maVoiture2);
	EXPECT_EQ (32000, maConcession.getTresorerie());
	EXPECT_EQ (85000, maConcession.calculerValeurStock());
	EXPECT_EQ ("Volkswagen Passat. 35000.000000\x80. rouge metal brillant. \nHarley Davidson. 10000.000000\x80. noire fer chrome. \nRenault Megane. 20000.000000\x80. bleue metal brillant. \nVolkswagen Golf. 20000.000000\x80. rouge metal brillant. \n",maConcession.inventaire());
	maConcession.liquidationMarque("Volkswagen");
	EXPECT_EQ (87000, maConcession.getTresorerie());
	EXPECT_EQ (30000, maConcession.calculerValeurStock());
	EXPECT_EQ ("Harley Davidson. 10000.000000\x80. noire fer chrome. \nRenault Megane. 20000.000000\x80. bleue metal brillant. \n",maConcession.inventaire());

}
