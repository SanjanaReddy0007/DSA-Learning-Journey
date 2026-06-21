#include<bits/stdc++.h>
using namespace std;


class Twitter{
    public:
        
    unordered_map<int,vector<pair<int,int>>tweets;
    unordered_map<int, unorder_set<int>>Following;
    int time;

    Twitter() {
        time = 0;
    }
    
    void Post(int userId,int tweeterId) {
        tweets[userId].push_back({time++,tweeterId});
    }

    vector<int>getews(int userId) {
        priority_queue<pair<int,int> , vector<pair<int,int>>,greater<pair<int,int>>>pq;

        if(tweets.count(tweeterId)) {
           for(auto tweet : tweets[userId]) {
            pq.push(tweet);
            if(pq.size() > 10) pq.pop();
           } 
        }
           
           if(Following.count(userId)) {
            for(auto followee : Following[userId]) {
                if(tweets.count(followee)) {
                    for(auto tweet : tweets[userId]) {
                        pq.push(tweet);
                        if(pq.size() > 10) pq.pop();
                    }
                }
            }
           }

           vector<int>result;
           while(!pq.empty()) {
            result.push_back(pq.top().second);
            pq.pop();
           }
           reverse(pq.begin(),pq.end());return result;

        }
    

        void Follow(int followerId,int followeeId) {
            Following[followerId].insert(followeeId);
        }

        void Unfollow(int followerId,int followeeId) {
            Following[followerId].erase(followeeId);
        }

}


//O(1)




