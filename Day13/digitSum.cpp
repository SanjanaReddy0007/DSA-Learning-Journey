#include<bits.stdc++.h>
using namespace std;


class Pair{
    public:
       int sum;
       int idx;
       int num;

          Pair(int sum,int idx,int num) {
            this -> sum = sum;
            this -> idx = idx;
            this -> num = num;
          }

 }


class Soluton{
    public:
        int getnum(int num) {
            int sum = 0;
            while(num > 0) {
                int last_digit = num % 10;
                sum += last_digit;
                num /= 10;
            }

            return sum;
        }


     vector<int>digitsum(vector<int>&numbers) {
        int i = 0;
        vector<Pair>list; 

            for(int num : numbers) {
               list.push_back((Pair(getnum(num)),i++, num));
            }

            sort(list.begin(),list.end() ,[](pair &a, pair &b) {
                if(a.sum == b.sum) {
                    return a.idx < b.idx;
                }

                return a.sum < b.sum;
            });

            vector<int>ans;
            for(Pair& p : list) {
                ans.push_back(p.num);
            }

            return ans;

     }

}



//TC: O(nlogn * d) O(d) for the calculation of digit sum 
//created own custom class and variables bescause for every line of object we need them so ccreated as a seperate class a for every it passed as an object



