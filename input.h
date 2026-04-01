#ifndef INPUT_H
#define INPUT_H
#include <iostream>

using namespace std;

template<typename T>
T getInput(const string prompt) {
    cout << prompt;
    T input;
    if constexpr(is_same_v<T, string>) {
        getline(cin, input);
    } else {
        cin >> input;
        cin.clear();
        cin.ignore(10000,'\n');
    }
    return input;
}

#endif //INPUT_H