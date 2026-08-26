
vector<int>magnitudeSort(vector<int>values) {
   stable_sort(values.begin() , values.end(),[](int a, int b) {
       return abs(a) < abs(b);
   });

   return values;
}
//O(nlogn)
//O(1) or O(1)

