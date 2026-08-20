#include<bits/stdc++.h>
using namespace std;

int measuredAlignedWinodw(string typed,string reference)
{

  int i=0,j=0;
  bool remved = false;

  while(i < (int)typed.size() && j < (int)reference.size()){
     if(typed[i] == reference[j]) {
        i++;
        j++;
     } else if(!removed) {
        removed = true;
        i++;
     } else {
        break;
     }
  }
  return j;

}