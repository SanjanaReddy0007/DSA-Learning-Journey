#include<bits/stdc++.h>
using namespace std;

class Twitter{
    public: 
        
      unordered_map<int, vector<pair<int,int>>tweets;
      unordered_map<int, unordered_set<int,int>>following;
      int time;

      Twitter() {
        time = 0;
      }
        
      void postTweet(int userId,int tweetId) {
        tweets[userId].push_back({time++,tweetId});
      }

      vector<int>getNewsFeed(int userId) {
        prority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>pq;

        if(tweets.count(userId)) {
            for(auto tweet: tweets[userId]) {
                pq.push_back(tweet);
                if(pq.size() > 10) pq.pop();
            }
        }


        if(following.count(userId)) {
            for(auto followee:following[userId]) {
                if(tweets.count(followee)) {
                    for(auto tweet:tweets[followee]) {
                        pq.push_back(tweet);
                        if(pq.size() > 10) pq.pop();
                    }
                }
            }
        }


        vector<int>result;
        while(!pq.empty()) {
            pq.push_back(pq.top().second);
            pq.pop();
        }

            reverse(result.begin() , result.end());
      }



     void follow(int followerId,int followeeId) {
        return following[followerId].push_back(followeeId);
     }


     void unFollow(int followeeId,int followerId) {
        return following[followerId].erase(followeeId);
     }

}




