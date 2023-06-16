#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isPalindromic(int n) {
    string numStr = to_string(n);
    string reversedStr = numStr;
    reverse(reversedStr.begin(), reversedStr.end());

    return numStr == reversedStr;
}

int main() {
    int T;
    cin >> T; // Read the number of test cases

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int n;
        cin >> n; // Read the integer for the current case

        cout << "Case " << caseNum << ": ";
        if (isPalindromic(n)) {
           cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
