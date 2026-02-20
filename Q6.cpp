#include <iostream>
#include <string>
using namespace std;

class Player {
public:
    string name;
    static int totalPlayers;

    Player(string n) {
        name = n;
        totalPlayers++;
    }

    ~Player() {
        totalPlayers--;
    }

    static void showPlayers() {
        cout << "Active Players: " << totalPlayers << endl;
    }
};

int Player::totalPlayers = 0;

int main() {
    {
        Player p1("Ayan");
        Player p2("Zara");

        Player::showPlayers();
    }

    Player::showPlayers();
}
