class Pair{
    public:
     string str;
     int score;
     int indx;

    
     Pair(string str, int score, int indx) {
        this -> str = str;
        this -> score = score;
        this -> indx = indx;
     }

}


class Solution {
    public:
    vector<string> reoderParticipants(vector<string>participants , vector<int>score) {
        int n = participants.size();
        vector<Pair>list;

        for(int i = 0; i < n; i++) {
           list.push_back(Pair(participants[i],score[i],i));
        }

        sort(list.begin() , list.end(),[](Pair &a , Pair &b) {
            if(a.score == b.score) {
                return a.indx < b.indx;
            }

            return a.score > b.score;
        });

        vector<string>ans;
        for(Pair &p: list) {
            ans.push_back(p.str);
        }
      
        return ans;

    }
}


//O(nlogn)
//SC :- O(n)



