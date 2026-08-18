#include<bits/stdc++.h>
using namespace std;

//BRUTE O(n^3) O(n)
int repeatRoundedWindow(vector<int>&values, int limit)
{
    int n = values.size();
    int best = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            unordered_map<int,int>freq;
            int recurring = 0;
            
            for(int start = i; start <= j; start++) {
                int store = values[start];
                freq[store]++;
            }

            if(auto& it :freq) {
                if(it.second > 2) {
                    recurring++;
                }
            }

            if(recurring <= limit) {
                best = max(best, j - i + 1);
            }
        }
    }

    return best;
}


//BETTER O(n^2) O(n)
int repeatBestBounds(vector<int>&values, int limit)
{
    int n = values.size();
    int best = 0;

    for(int i = 0; i < n; i++) {
        unordered_map<int,int>freq;
        int recurring = 0;

        for(int j = i; j < n; j++) {
            int val = values[j];
            freq[val]++;

            if(freq[val] == 2) {
                recurring++;
            }

            if(recurring <= limit) {
                best = max(best, j - i + 1);
            }
        }
    }

    return best;
}


