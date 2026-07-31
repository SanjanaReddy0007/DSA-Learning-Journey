
void merge(vector<int>&arr1,int m,vector<int>& arr2,int n)
{
   int p1 = m - 1;
   int p2 = n - 1;
   int p = m + n - 1;

   while(p1 >= 0 && p2 >= 0) {
    if(arr1[p1] > arr2[p2]) {
        arr1[p] = arr1[p1];
        p1--;
    } else {
        arr1[p] = arr2[p2];
        p2--;
    }
    p--;
 }

 while(p2 >= 0) {
    arr1[p] = arr2[p2];
    p--;
    p2--;
 }

}

//O(m + n) SC :- O(1)


//BRUTEEEEEEEEEEEEEEEEEE
void merge(vector<int>&arr1,int m,vector<int>&arr2,int n) {
   for(int i = 0; i < n; i++) {
     arr1[m + i] = arr2[i];
   }     

   sort(arr1.begin() , arr1.end());
}

//TC :- O((m + n) + O(m + n))
//SC :- O(1)

