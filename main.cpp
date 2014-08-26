/*
 * main.cpp
 *
 *  Created on: 23 Aug 2014
 *      Author: sander
 */
#include <iostream>
#include <string.h>
#define NAAMLEN 20

using namespace std;

class student{
public:
	char naam[NAAMLEN];
	int leeftijd;
	int cijfer;

public:
	void readpersoon(char *naam, int *leeftijd, int *cijfer){

		strncpy(this->naam,naam,NAAMLEN);
		this->leeftijd=*leeftijd;
		this->cijfer=*cijfer;
	}
	void givepersoon(char *naam, int *leeftijd, int *cijfer){
		strncpy(naam,this->naam,NAAMLEN);
		*leeftijd=this->leeftijd;
		*cijfer=this->cijfer;
	}

};

int main(void){
	student p;
	char n[NAAMLEN];
	int l,c;
	char tempn[NAAMLEN];
	int templ, tempc;

	cout<<"naam :"; cin>>n;
	cout<<"leeftijd :"; cin>>l;
	cout<<"cijfer :"; cin>>c;

	p.readpersoon(n,&l,&c);
	p.givepersoon(tempn,&templ,&tempc);
	cout<<"opgevraagde naam :"			<<tempn<<endl;
	cout<<"opgevraagde leeftijd :"		<<templ<<endl;
	cout<<"opgevraagde cijfer :"		<<tempc<<endl;
	cout<<endl;
	cout<<"opgevraagde naam2 :"			<<p.naam<<endl;
	cout<<"opgevraagde leeftijd2 :"		<<p.leeftijd<<endl;
	cout<<"opgevraagde cijfer2 :"		<<p.cijfer<<endl;


}




