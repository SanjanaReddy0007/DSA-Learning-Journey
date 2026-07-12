#include<bits/stdc++.h>
using namespace std;


int secondLargest(int num) {
   
    int largest = -1;
    int secondLargest = -1;
     int temp = num;

     while(num) {
        int last = num % 10;
        
        if(last > largest) {
            secondLargest = largest;
            largest = last;
      } 
        else if(last > secondLargest && last < largest) {
            secondLargest = last;
      }

        temp /= 10;
    }

         return secondLargest;
  }
    


//TC :- O(logn) of its time complexity
//SC :- O(1)


