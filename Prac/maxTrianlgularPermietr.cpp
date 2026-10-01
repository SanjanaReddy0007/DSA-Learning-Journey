
int maximumTrianularPerimeter(vector<int>&arr)
{
   int n = arr.size();
   sort(arr.begin() , arr.end());

   for(int i = 0; i <= n - 3; i++) {
    if(arr[i] < arr[i + 1] + arr[i + 2]) {
        return arr[i] + arr[i + 1] + arr[i + 2];
    }
    
   }

}


