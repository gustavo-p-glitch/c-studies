#include <iostream>
#include "Heart.h"
using namespace std;

int main() {
    Heart coracao(200, 7.0, 15.0, 20);
    cout << coracao.getLife() << endl;
    coracao.setLife(500);
    cout << coracao.getLife() << endl;
    coracao.getDamage(30);
    cout << coracao.getLife() << endl;
    coracao.AttackEnemy(90);
    //ponteiro
    Heart* ponteirocore = &coracao;
    cout << ponteirocore -> getLife() << endl;
    Heart& refcoracao = coracao;
    //referencia
    cout << refcoracao.getLife() << endl;

}