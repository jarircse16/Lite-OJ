#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;

    int low = 1;
    int high = n;
    int guess = (low + high) / 2;

    for (int i = 1; i <= 30; ++i) {
        cout << "guess " << guess << endl;

        string response;
        cin >> response;

        if (response == "low") {
            low = guess + 1;
        } else if (response == "high") {
            high = guess - 1;
        } else if (response == "correct") {
            cout << "correct" << endl;
            return 0;
        } else if (response == "too") {
            cout << "too many tries" << endl;
            return 0;
        }

        guess = (low + high) / 2;
    }

    return 0;
}
