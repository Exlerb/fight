#include "menu.h"
#include "input.h"
#include <iostream>
using namespace std;
int mainMenu(int c) {
    if(c == 5) {
        cout << "Alright thats enough, don't waste stack you *****!" << endl;
        return 0;
    }
    cout << "1. new game" << endl;
    cout << "2. load game" << endl;
    cout << "3. see existing games" << endl;

    int input = getInput<int>("> ");

    switch(input) {
        case 1:
            input = modeMenu(0);
            break;
        case 2:
            cout << "you chose to load a game, but that is not ready yet." << endl;
            break;
        case 3:
            cout << "you chose to see existing games, but there are none, and the feature is not ready yet" << endl;
            break;
        default:
            c++;
            cout << "we only understand inputs [1, 2, 3]" << endl;
            input = mainMenu(c);
    }

    return input;
}

int modeMenu(int c) {
    if(c == 5) {
        cout << "Alright thats enough, don't waste stack you *****!" << endl;
        return 0;
    }
    cout << "1. Single Player" << endl;
    cout << "2. Buddy Mode" << endl;
    cout << "3. back to main menu" << endl;

    int input = getInput<int>("> ");

    switch (input) {
    case 1:
        cout << "you chose Singleplayer, but its not ready yet" << endl;
        break;
    case 2:
        cout << "Buddy Mode is still in development" << endl;
        break;
    case 3:
        input = mainMenu(0);
        break;
    default:
        c++;
        cout << "we only understand inputs [1, 2, 3]" << endl;
        input = modeMenu(c);
        break;
    }
    return input;
}