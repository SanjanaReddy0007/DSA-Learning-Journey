
class solution {
public:
    vector<int> printFirstNegativeInteger(int len, vector<int>& arr, int m) {
        deque<int> Di;
        vector<int> ans;

        for (int i = 0; i < m; i++) {
            if (arr[i] < 0) {
                Di.push_back(i);
            }
        }

        for (int i = m; i < len; i++) {
            if (!Di.empty()) {
                ans.push_back(arr[Di.front()]);
            } else {
                ans.push_back(0);
            }

            while (!Di.empty() && Di.front() < (i - m + 1)) {
                Di.pop_front();
            }

            if (arr[i] < 0) {
                Di.push_back(i);
            }
        }

        if (!Di.empty()) {
            ans.push_back(arr[Di.front()]);
        } else {
            ans.push_back(0);
        }

        return ans;
    }
};

