#include <bits/stdc++.h>
#include<cmath>
using namespace std;

int funk(int n)
{
    if(n==0)
        return 0;
    if(n%3==0)
        return n-(n/3);
    else
        return n-(n/3)-1;
}
int main() {

    int t,c=0,A,B,r;
    cin>>t;
    while(t--)
    {
        c++;
        cin>>A>>B;
        r=funk(B)-funk(A-1);
        cout<<"Case "<<c<<": "<<r<<endl;
    }
     return 0;

}
