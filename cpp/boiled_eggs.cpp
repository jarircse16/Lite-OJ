#include<bits/stdc++.h>
using namespace std;

int main(){
    int testcase;
    cin>>testcase;

    for(int t=1; t<=testcase; t++){
        int n, P, Q;
        cin >> n>> P>> Q;

        int max_Q_possible= 0, max_P_possible=0;
        for(int i = 1; i <= n; i++ ){
            int new_egg;
            cin >> new_egg;

            if(max_P_possible + 1 <= P && max_Q_possible + new_egg <= Q){
              max_Q_possible += new_egg;
              max_P_possible++;
            }

        }
        cout << "Case " << t << ": " << max_P_possible << endl;
    }
}
