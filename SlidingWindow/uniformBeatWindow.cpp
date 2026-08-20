#include<bits/stdc++.h>
using namespace std;

long long solve(vector<int>&arr)
{
    vector<int>temp = arr;
    sort(temp.begin() , temp.end());
    int mid = temp.size() / 2;
    long long sum = 0;
    for(int i = 0; i < temp.size(); i++) {
        if(i != mid) {
            sum += abs(temp[i] - temp[mid]);
        }
    }

    return sum;
}

long long stabilizedwindow(vector<int>&levels, int k)
{
    int n = levels.size();
    vector<int>window;
    for(int i = 0; i < k; i++) {
        window.push_back(levels[i]);
    }

    long long ans = solve(window);
    for(int i = k; i < n; i++) {
        window.erase(window.begin());
        window.push_back(levels[i]);
        ans = min(ans, solve(window));
    }

    return ans;

}


