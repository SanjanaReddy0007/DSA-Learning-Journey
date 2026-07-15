#include<bits/stdc++.h>
using namespace std;


int totalChrgeCircuit(vector<int>& charge, vector<int>& energy)
{
    int totalCharge = 0;
    int currentcharge = 0;
    int totalEnergy = 0;
    int start = 0;
    
    int n = charge.size();

    for(int i = 0; i < n; i++) {
        totalCharge += charge[i];
        totalEnergy += energy[i];
        currentCharge = charge[i] - energy[i];

        if(currentCharge < 0) {
            start = i + 1;
            currentCharge = 0;
        }
    }

    if(totalCharge < totalEnergy) return -1;

    return start;
}




//TC :- O(n) bcs loop through once of all upto n elementsss
//SC :- O(1)


