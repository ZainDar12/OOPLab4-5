#include <iostream>
#include <string>
using namespace std;

class Weapon {
public:
    string weaponName;
    int damage;
};

class Player {
public:
    string playerName;
    int health;
    Weapon weapon;

    static int activePlayers;

    Player(string n, int h, string wName, int dmg) {
        playerName = n;
        health = h;
        weapon.weaponName = wName;
        weapon.damage = dmg;
        activePlayers++;
    }

    ~Player() {
        activePlayers--;
    }

    void showStatus() const {
        cout << playerName << " | Health: " << health
             << " | Weapon: " << weapon.weaponName
             << " | Damage: " << weapon.damage << endl;
    }

    static void showActive() {
        cout << "Active Players: " << activePlayers << endl;
    }
};

int Player::activePlayers = 0;

int main() {
    Player players[2] = {
        Player("Knight", 100, "Sword", 25),
        Player("Archer", 80, "Bow", 20)
    };

    for (int i = 0; i < 2; i++) {
        players[i].showStatus();
    }

    Player::showActive();
}
