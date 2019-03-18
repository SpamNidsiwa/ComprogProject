#ifndef TITI_H
#define TITI_H
#include <iostream>
using namespace std;
struct Hero_stat{
int Strange;
int Agility;
int intelligence;
int lux;
};

void input_stat(){
Hero_stat Martial_art;
Hero_stat Jajamaru;
Hero_stat Demon;

Martial_art.Strange = 5;
Martial_art.Agility = 2;
Martial_art.intelligence = 1;
Martial_art.lux = 4;

Jajamaru.Strange = 3;
Jajamaru.Agility = 3;
Jajamaru.intelligence = 3;
Jajamaru.lux = 3;

Demon.Strange = 9;
Demon.Agility = 2;
Demon.intelligence = 1;
Demon.lux = 0;
}

void Convert_stat(string name, int str, int agi, int intel, int lux ){
   //ค่อยคิดต่อ
}


#endif // TITI_H
