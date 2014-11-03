#include <iostream>

using namespace std;

void play_game() {
    cout << "Would you like to play a game (y/n)?" << endl;
    char answer;
    cin >> answer;
    if ('n' == answer) {
        cout << "Whatevs." << endl;
    } else if ('y' == answer) {
        cout << "Actually, I don't feel like playing a game." << endl;
    } else {
        cout << "How do you expect to play a game when you can't even "
                "answer a simple prompt..." << endl;
    }
}
