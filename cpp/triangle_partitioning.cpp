#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin >> test_case;
    int i = 1;
    while (test_case--)
    {
        double ab, ac, bc, ratios;
        cin >> ab >> ac >> bc >> ratios;
        double result = ab* sqrt(ratios / (ratios + 1));
        cout << "Case " << i++ << ": " << fixed << setprecision(6) << result << endl;
    }
}
