class solution {
public:
    long long forward_cost(long long u, long long v, vector<long long>& pf, long long total_forward) {
        if (u <= v) return pf[v] - pf[u];
        return total_forward - (pf[u] - pf[v]);
    }

    long long backward_cost(long long u, long long v, vector<long long>& pb, long long total_backward) {
        if (u >= v) return pb[u + 1] - pb[v + 1];
        return pb[u + 1] + (total_backward - pb[v + 1]);
    }

    long long optimalRingVisitTime(vector<int>& clockwise, vector<int>& counterclockwise, vector<int>& visits) {
        int n = (int)clockwise.size();

        vector<long long> pf(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            pf[i + 1] = pf[i] + clockwise[i];
        }
        long long total_forward = pf[n];

        vector<long long> pb(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            pb[i + 1] = pb[i] + counterclockwise[i];
        }
        long long total_backward = pb[n];

        long long ans = 0;
        long long current = 0;

        for (int target : visits) {
            ans += min(
                forward_cost(current, target, pf, total_forward),
                backward_cost(current, target, pb, total_backward)
            );
            current = target;
        }

        return ans;
    }
};

/*