#include <bits/stdc++.h>
using namespace std;


int main() {
    long long test_case;
    cin >> test_case;
    int case_count=0;
    while(test_case--) {
        case_count++;
        set<long long>ss;
        long long n;
        cin >> n;
        long long a[n];

        for(long long i = 0; i < n; i++)
            cin >> a[i];
        for(long long i = n - 1; i >= 0; i--) {
        if(ss.count(a[i]) == 0 && ss.count((-a[i])) == 0)
            ss.insert(a[i]);
        }


        long long sum = 0;
        for(long long element : ss) {
            sum += element;
        }

        cout << "Case " << case_count << ": " << sum << '\n';
    }

    return 0;
}
