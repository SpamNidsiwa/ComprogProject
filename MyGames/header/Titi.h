#ifndef TITI_H
#define TITI_H
#include <iostream>
#include <cstdlib>

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

int exp_cal(int numbermonster){
    int exp =0;
    if(numbermonster == 1){
        exp = 10; return exp;
    }
    if(numbermonster == 2){
        exp = 15; return exp;
    }
    if(numbermonster == 3){
        exp = 20; return exp;
    }
    if(numbermonster == 4){
        exp = 25; return exp;
    }
}

char monster_phase(){
    int monsterchoice = rand()%3+1;
    char Choice[3] = {"hammer","Scissors","Paper"}
    return Choice[monsterchoice];
}

char player_phase(){
    char Choice[3] = {"hammer","Scissors","Paper"}
    int playerchoice;
    cout << "Please select your attack\n";
    cout << "Your choice 1.hammer 2.Scissors 3.paper \n";
    cin >> playerchoice;
    return Choice[playerchoice];
}

void action_phase (char monsterchoosed ,char playerchoosed ){
    int phase = 0; //0=player 1=monster
    if(phase == 0){
        phase = 1 ;
        if(playerchoosed == "hammer" && monsterchoosed == "Scissors"){
            //แก้atkในภายหลัง
        }
        if(playerchoosed == "Scissors" && monsterchoosed == "paper"){
            //แก้atkในภายหลัง
        }
        if(playerchoosed == "paper" && monsterchoosed == "hammer"){
            //แก้atkในภายหลัง
        }
        if(playerchoosed == "paper" && monsterchoosed == "paper"){
            //แก้atkในภายหลัง
        }
        if(playerchoosed == "hammer" && monsterchoosed == "hammer"){
            //แก้atkในภายหลัง
        }
        if(playerchoosed == "Scissors" && monsterchoosed == "Scissors"){
            //แก้atkในภายหลัง
        }
        else{
            //แก้atkในภายหลัง
        }
    }
    if(phase == 1){
        phase = 0;
        if(playerchoosed == "Scissors" && monsterchoosed == "hammer"){
            //แก้atkในภายหลัง
        }
        if(playerchoosed == "hammer" && monsterchoosed == "paper"){
            //แก้atkในภายหลัง
        }
        if(playerchoosed == "paper" && monsterchoosed == "Scissors"){
            //แก้atkในภายหลัง
        }
        if(playerchoosed == "paper" && monsterchoosed == "paper"){
            //แก้atkในภายหลัง
        }
        if(playerchoosed == "hammer" && monsterchoosed == "hammer"){
            //แก้atkในภายหลัง
        }
        if(playerchoosed == "Scissors" && monsterchoosed == "Scissors"){
            //แก้atkในภายหลัง
        }
        else{
            //แก้atkในภายหลัง
        }
    }
}

#endif // TITI_H
