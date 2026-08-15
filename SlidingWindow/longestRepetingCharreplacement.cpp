#include<bits/stdc++.h>
using namespace std;

int ongestRepeatingCharReplacement(vector<int>&arr)
{
    int n = arr.size();
    vector<int>v(26,0);
    int i = 0, j = 0, ans  = 0;

    while(j < n) {
        v[arr[j] - 'A']++;
        maxi = max(maxi, v[arr[j] - 'A']);

        while(j - i + 1 - maxi > k) 
         {
            v[arr[i] - 'A']--;
            maxi = max_element(arr.begin(),arr.end());
            i++;
         }
         ans = max(j-i+1, maxi);
         j++;
    }

    return ans;
}


//better
int longesttt(vector<int>&arr)
{
    int n = arr.size();
    int i=0,j=0,ans=0;
    vector<int>v(26,0);

    while(j < n) {
        v[arr[j] - 'A']++;
        int maxi = max(j-i+1, v[arr[j] - 'A']);

        while(j-i+1 - maxi > k) {
            v[arr[i] - 'A']--;
            i++;
        }
        ans = max(ans, j - i + 1);
        j++;
    }

    return ans;

}



//OTIMAL
int longesttt(vector<int>&arr)
{
    int n = arr.size();
    int i=0,j=0,ans=0;
    vector<int>v(26,0);

    while(j < n) {
        v[arr[j] - 'A']++;
        int maxi = max(j-i+1, v[arr[j] - 'A']);

        while(j-i+1 - maxi > k) {
            v[arr[i] - 'A']--;
            i++;
        }
        if(j-i+1-maxi <= k) ans = max(ans,j-i+1);
        j++;
    }

    return ans;

}





