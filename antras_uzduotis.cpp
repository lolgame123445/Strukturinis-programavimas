//
// Created by kulka on 9/17/2026.
//

#include "antras_uzduotis.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string pav[100], savin[100], arena[100];
    int mt[100], viet[100];
    pav[1]= "Vilniaus statyba"; pav[2] = "Kauno Drobe"; pav[3] = "Klaipedos Neptunas";
    mt[1] = 1964; mt[2] = 1938; mt[3] = 1964;
    savin[1] = "Antanas Paulauskas"; savin[2] = "P. Gedzius/Gediminas Budnikas"; savin[3] = "Gediminas Petrauskas";
    arena[1] =  "Twinsbet Arena"; arena[2] = "Sporto sale Kausta"; arena[3] = "Svyturio arena";
    viet[1] = 10000; viet[2] = 500; viet[3] = 6200;
    string x;
    cout << "prasome pasirinkti kluba:Vilniaus Statyba, Kauno Drobe,Klaipedos Neptunas";
    getline(cin,x);
    if (x == "Vilniaus Statyba")
    {
        cout << pav[1] << " " << mt[1] << " " << savin[1] << " " << arena[1]<< " " << viet[1]<< endl;
    }
    if (x== "Kauno Drobė")
    {
        cout << pav[2] << " " << mt[2] << " " << savin[2] << " " << arena[2]<< " " << viet[2]<< endl;
    }
    if (x== "Klaipėdos Neptūnas")
    {
        cout << pav[3] << " " << mt[3] << " " << savin[3] << " " << arena[3]<< " " << viet[3]<< endl;
    }







}
