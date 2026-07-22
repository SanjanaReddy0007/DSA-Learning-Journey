#include<bits/stdc++.h>
using namespace std;


int binarySearch(vector<int> &arr, int k)
{
  int left = 0;
  int right = arr.size();

  while(left < right ){
      int mid = (left + right) >> 2;
      if(arr[mid] > right ) {
        right = mid;
      } else {
        left = mid + 1;
      }
  }
  
  return left;

}


bool MAJORITYYYYY(vector<int>& arr,int k)
{ 
   int left = binarySearch(arr,k);
   int right = binarySearch(arr,k+1);
   return left - right > arr.size() / 2;  
}


//TC :- left and right logarithmic O(nlogn)
//SC :- O(1)


