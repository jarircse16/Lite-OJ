#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_cases,my_position,lift_position,cases=0;
    cin>>test_cases;
    while(test_cases--)
    {
        cases++;
        cin>>my_position>>lift_position;
        if(my_position<lift_position || my_position==lift_position )
            {
               cout<<"Case "<<cases<<": "<<lift_position*4+19<<endl;
            }
        else
            {
               cout<<"Case "<<cases<<": "<<(2*my_position-lift_position)*4+19<<endl;
            }
}
    return 0;
}
