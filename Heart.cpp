#include <iostream>
#include "Heart.h"

using std::cout;
using std::endl;

Heart::Heart(int life, float speed, float defense, int attack){
    Heart::setLife(life);
    Heart::setSpeed(speed);
    Heart::setDefense(defense);
    Heart::setAttack(attack);
};

void Heart::setLife(int life){
    Heart::life = life;
};

void Heart::setSpeed(float speed){
    Heart::speed = speed;
};

void Heart::setDefense(float defense){
    Heart::defense = defense;
};

void Heart::setAttack(int attack){
    Heart::attack = attack;
};

int Heart::getLife(){
    return Heart::life;
};

float Heart::getDefense(){
    return Heart::defense;
};

float Heart::getSpeed(){
    return Heart::speed;
};

int Heart::getAttack(){
    return Heart::attack;
};

void Heart::AttackEnemy(int damage){
    cout << "Enemy recieved " << damage << "damage!!" << endl; 
};

void Heart::getDamage(int damage){
    Heart::life -= damage;
    cout << "you recieved: " << damage << "damage!!" << endl;
};