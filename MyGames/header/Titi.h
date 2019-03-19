#ifndef TITI_H
#define TITI_H
#include <iostream>
#include <cstdlib>

using namespace std;
struct Hero_stat{
int Strange;
int Agility;
int intelligence;
int luk;
};

void input_stat(){
Hero_stat Martial_art;
Hero_stat Jajamaru;
Hero_stat Demon;

Martial_art.Strange = 5;
Martial_art.Agility = 2;
Martial_art.intelligence = 1;
Martial_art.luk = 4;

Jajamaru.Strange = 3;
Jajamaru.Agility = 3;
Jajamaru.intelligence = 3;
Jajamaru.luk = 3;

Demon.Strange = 9;
Demon.Agility = 2;
Demon.intelligence = 1;
Demon.luk = 0;
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

string monster_phase(){
    int monsterchoice = rand()%3;
    string Choice[3] = {"hammer","Scissors","Paper"};
    string test = Choice[monsterchoice];
    cout << test << "\n";
    return test;
}

string player_phase(){
    string Choice[3] = {"hammer","Scissors","Paper"};
    int playerchoice;
    cout << "Please select your attack\n";
    cout << "Your choice 1.hammer 2.Scissors 3.Paper \n";
    cin >> playerchoice;
    string test = Choice[playerchoice];
    cout << test << "\n";
    return test;
}

int action_phase (string monsterchoosed ,string playerchoosed ,int phasenumber ){
    //0=player 1=monster

    if(phasenumber == 0){

        if(playerchoosed == "hammer" && monsterchoosed == "Scissors"){
            //แก้atkในภายหลัง
            return 1;
        }
        if(playerchoosed == "Scissors" && monsterchoosed == "Paper"){
            //แก้atkในภายหลัง
            return 2;
        }
        if(playerchoosed == "Paper" && monsterchoosed == "hammer"){
            //แก้atkในภายหลัง
            return 3;
        }
        if(playerchoosed == "Paper" && monsterchoosed == "Paper"){
            //แก้atkในภายหลัง
            return 4;
        }
        if(playerchoosed == "hammer" && monsterchoosed == "hammer"){
            //แก้atkในภายหลัง
            return 5;
        }
        if(playerchoosed == "Scissors" && monsterchoosed == "Scissors"){
            //แก้atkในภายหลัง
            return 6;
        }
        else{
            //แก้atkในภายหลัง
        }
    }
    if(phasenumber == 1){
        if(playerchoosed == "Scissors" && monsterchoosed == "hammer"){
            //แก้atkในภายหลัง
            return 7;
        }
        if(playerchoosed == "hammer" && monsterchoosed == "Paper"){
            //แก้atkในภายหลัง
            return 8;
        }
        if(playerchoosed == "Paper" && monsterchoosed == "Scissors"){
            //แก้atkในภายหลัง
            return 9;
        }
        if(playerchoosed == "Paper" && monsterchoosed == "Paper"){
            //แก้atkในภายหลัง
            return 8;
        }
        if(playerchoosed == "hammer" && monsterchoosed == "hammer"){
            //แก้atkในภายหลัง
            return 9;
        }
        if(playerchoosed == "Scissors" && monsterchoosed == "Scissors"){
            //แก้atkในภายหลัง
            return 10;
        }
        else{
                return 11;
            //แก้atkในภายหลัง
        }
    }
}

#endif // TITI_H
