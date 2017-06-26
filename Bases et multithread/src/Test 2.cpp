//============================================================================
// Name        : Test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <mutex>

using namespace std;

string randWord(int nbLetters)
{
	string s="";
	for (int i=0; i<nbLetters; i++)
	s+= rand() % 26 + 'A';
	return s;
}

#define randomWordsArraySize 25
void randWordArray(array <string,randomWordsArraySize>& wordArray)
{
	for (int i=0; i<randomWordsArraySize; i++)
		wordArray[i]=randWord(7);
}


void checkRandWordVsDico(std::string threadid){
	int i=0;
	#define dictionnarySize 5
	array <string,dictionnarySize> dictionnary= {"BURNES", "LAPEES", "MISEES", "SUITES", "PUISEE"};
	bool notfound=true;
	while(notfound){
		string word=randWord(6);
		i++;

		for (string dictionnaryWord : dictionnary){
			if (word==dictionnaryWord) {
				cout << "Thread " << threadid << " Iteration : " << i << " " << word << endl;
				notfound=false;
			}
		}
	}
}

class GrosCalcul{
protected:
	int sum=0;
	std::mutex m;
public:
	void grosseAddition();
};

void GrosCalcul::grosseAddition(){
	m.lock();
	for (int i=0; i<100000 ; i++)
		sum++;
	cout << sum << endl;
	m.unlock();
}

int main()
{
	srand(time(0));

	// Exo multithread
//	thread t1 (checkRandWordVsDico, "1");
//	thread t2 (checkRandWordVsDico, "2");
//	thread t3 (checkRandWordVsDico, "3");
//	thread t4 (checkRandWordVsDico, "4");
	//checkRandWordVsDico("2");

//	t1.join();
//	t2.join();
//	t3.join();
//	t4.join();
	GrosCalcul monCalcul;
	int i=10;
while(i--){
	thread t1 (&GrosCalcul::grosseAddition,&monCalcul);
	thread t2 (&GrosCalcul::grosseAddition,&monCalcul);
	thread t3 (&GrosCalcul::grosseAddition,&monCalcul);
	t1.join();
	t2.join();
	t3.join();
}

	return 0;
}


/* Exo 2
 * 	string input;
	cin >> input;
	for (int i=0; i<=stoi(input); i++)
		cout << i << " ";
	for (int i=-5; i<=stoi(input)+5; i++)
		cout << i << " ";


	string s="";
	for (int j=0; j<10 ; j++)
	{
		for (int i=0; i<10 ; i++)
			s+="*";
		s+="\n";
	}
	cout << s;

	string s="";
	for (int j=0; j<10 ; j++)
	{
		for (int i=0; i<5-j ; i++)
			s+=" ";
		for (int i=0; i<j*2 ; i++)
		s+="*";
		s+="\n";
	}
	cout << s;
	}

		string input;
	cin >> input;
	int x = stoi (input);

	cin >> input;
	int y = stoi (input);

	for (int i=0; i<=y ; i+=x)
		cout << i << endl;

		string input;
	cin >> input;
	int x = stoi (input);

	cin >> input;
	int y = stoi (input);

	int i=0;
	while (1)
	{
		cout << i << endl;
		i+=x;
		if (i>y) break;
	}


 */

/* Exo 1
	string hello="Hello";
	string world="World";
	int year(2017);
	string phrase="";
	string nombreEnCaracteres="42";
	int a=13;
	int b=5;
	char A='a';
	char B='b';
	char C;
	string* pWorld= &world;
	string** ppWorld=&pWorld;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	cout << hello << " " << world << endl;
	cout << year << endl;
	phrase=hello+" "+world+to_string(year);
	cout << phrase<<endl;
	cout << year + stoi(nombreEnCaracteres)<<endl;
	cout << to_string(year)+nombreEnCaracteres<<endl;
	cout << a/b<<endl;
	cout << (double(a)/double(b))<<endl;
	cout << A<< B<<endl;
	C=A;
	A=B;
	B=C;
	cout << A<<B<<endl;
	cout << ppWorld << pWorld << *pWorld;
	return 0;

	*/


/* Exo 3
  int soustraction (int a, int b)
{
	return a-b;
}
  	int x=15;
	int y=3;
	cout << soustraction (x,y);

	*/

/*Exo array
void readArray (array<string,6> arr)
{
for (string mot : arr)
		cout << mot << " ";
}

int main() {
	array <string,6> mots={"olivier", "irac", "est", "en", "formation", "\n"};
	readArray (mots);
	}
*/

