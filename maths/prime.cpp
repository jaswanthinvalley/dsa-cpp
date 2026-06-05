#include <bits/stdc++.h>
using namespace std;


void prime(int n) {
    int cnt = 0;

    for(int i=1;i<=n;i++){
        if(n % i == 0) {
            cnt = cnt + 1;
        }
    }
    if(cnt == 2) {
        cout<<"prime";
    }
    else cout<<"not a prime";

}
int main() {
    int n;
    cin>>n;
    prime(n);

}