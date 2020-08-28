//Problem code: PALL01

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int digit,rev=0,c=n;
        while(n){
            digit=n%10;
            rev=rev*10+digit;
            n=n/10;
        }
        if(rev==c)
        cout<<"wins"<<endl;
        else
        cout<<"loses"<<endl;
    }
    return 0;
}
