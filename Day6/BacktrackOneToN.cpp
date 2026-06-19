#include<bits/stdc++.h>
using namespace std;


int backtractOneToOne(int i,int n) {
    if(i == 0) {
        return;
    }
    
    backtractOneToOne(i - 1,n);
    cout<<i<<" ";

}


int main() {
    int n;
    cin>>n;
    backtractOneToOne(n,n);
    return 0;
}


TC:- O(n)




