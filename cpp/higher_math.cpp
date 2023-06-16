#include<bits/stdc++.h>
using namespace std;
int main() {
    int test_cases, cases = 0;
    int sides[3];
    cin >> test_cases;
    while (test_cases--) {
        cases++;
        for(int i=0;i<3;i++)
        {
            cin>>sides[i];
        }
        sort(sides,sides+3);
        if(sides[0]*sides[0]+sides[1]*sides[1]==sides[2]*sides[2])
            cout<<"Case "<<cases<<": yes"<<endl;
        else
            cout<<"Case "<<cases<<": no"<<endl;
    }
    return 0;
}
