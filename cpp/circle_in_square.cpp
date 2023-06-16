#include<bits/stdc++.h>
using namespace std;
const double pi = 2 * acos(0.0);

int main() {
    int test_cases, cases = 0;
    double radius;
    cin >> test_cases;

    while (test_cases--) {
        cases++;
        cin >> radius;
        double result = radius * radius * (4 - pi) + 1e-9;
        cout << fixed << setprecision(2);
        cout << "Case " << cases << ": " << result << endl;
    }
    return 0;
}
