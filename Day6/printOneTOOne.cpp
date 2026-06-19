#include<bits/stdc++.h>
using namespace std;


int print1toN(int i,int n){
    if(i > n) {
        return ;
    }

    cout<<i<<" ";
    print1toN(i+1,n);

}


int main(int n) {
    int n;
    cin>>n;
    print1toN(1,n);
    return 0;
}



//TC: O(n)





