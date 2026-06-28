#include<bit/stdc++.h>
using namespace std;


int maximumTriangularPermiter(vecctor<int>& PlanksLength) {
     sort(PlanksLength.rbegin() ,PlanksLength.rend()) ;
     int n = PlanksLength.size();

     for(int i = 0; i <= n - 3; i++) {
        if(PlanksLength[i] < PlanksLength[i + 1] + PlanksLength[i + 2]) {
            return PlanksLength[i] + PlanksLength[i + 1] + PlanksLength[i + 2];
        }
     }

     return -1;

}



