
class Pair{
    public:
      int sum;
      int indx;
      int num;

      Pair(int sum, int indx, int num) {
        this.sum = sum;
        this.num = num;
        this.indx = indx;
      }

    class Solution{
        public:

        int getSum(int num) {
            int sum = 0;
            while(num != 0) {
                int last = num % 10;
                sum  += last;
                num = num / 10;
            }
            return sum;
        }
      
          vector<int>sortDigitByNum(vector<int>&nums) {
              int i = 0;
              vector<Pair>v;
              for(int num : nums) {
                 v.push_back(Pair(getSum(num) , i++,num));
              }
          }

          sort(v.begin() , v.end() ,[](Pair &a, Pair &b) {
            if(a.sum == b.sum) {
                return a.indx < b.indx;
            }
            return a.sum < b.sum;
          })

          vector<int>ans;
          for(Pair& p:v) {
              ans.push_back(p.num);
          }
          return ans;
    }

}

