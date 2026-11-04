
#ifndef HEART_H
#define HEART_H

class Heart {
    public:
    Heart(int = 0, float = 0, float = 0, int = 0);
    void setLife(int = 0);
    void setSpeed(float = 0);
    void setDefense(float = 0);
    void setAttack(int = 0);
    int getLife();
    float getSpeed();
    float getDefense();
    int getAttack();
    void AttackEnemy(int = 0);
    void getDamage(int = 0);

    private:
    int life;
    float speed;
    float defense;
    int attack;
};
#endif