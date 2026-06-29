#include<bits/stdc++.h>
using namespace std;


bool ValidprefixLabel(vector<string>& label) {
   int n = label.size();

        sort(label.begin(),label.end());
        for(int i=0;i<n;i++) {
            if(label[i + 1].rfind(label[i],0)==0) {
                return false;
            }
        }

   return true;

}



