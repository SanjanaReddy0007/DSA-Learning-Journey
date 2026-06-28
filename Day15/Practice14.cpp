class Pair{
    public:
       int sum;
       int index;
       int num;

       Pair(int sum, int index,int num) {
        this -> sum = sum;
        this -> index = index;
        this -> num = num;
       }

}


class Solution{
    public:
    int getSum(int num ){
        int sum = 0;
        while(num > 0) {
           int lastdigit = 0;
           sum += lastdigit;
           num /= 10;
        }
        return sum;
    }


    vector<int>SortNumByDigit(vector<int>& numbers) {
        int n = numbers.size();
        vector<Pair>list;

        for(int num : numbers) {
            list.push_back(Pair(getSum(num),i++,num));
        }

        sort(list.begin() , list.end(), [](Pair &a , Pair &b) {
            if(a.sum == b.sum ) {
                a.index < b.index;
            }
            a.sum < b.sum;
        })


        vector<int>ans;
        for(Pair &p:list) {
            ans.push_back(p.num);
        }
         

        return ans;
    }

}


//O(nlogn)
//O(n) for sum,index,num






