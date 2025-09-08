#include<iostream>
using namespace std;

class Player{
    private:
    int health;
    int age;
    int score;
    string name;
    bool alive;


    public:
    void setHealth(int n) {
        this->health = n;
    }
    void setScore(int n) {
        this->score = n;
    }
    void setAge(int n) {
        this->age = n;
    }
    void setAlive(bool n) {
        this->alive= n;
    }
    int getHealth() {
        return health;
    }
    int getScore() {
        return score;
    }
    int getAge() {
        return age;
    }
    bool getAlive() {
        return alive;
    }
};

int  main(){
    Player p1;
    p1.setHealth(100);
    p1.setScore(50);
    p1.setAge(20);
    p1.setAlive(true);
    cout << p1.getHealth()<<endl <<p1.getAge()<<endl<<p1.getScore()<<endl<< p1.getAlive() << endl;
    return 0;
}
