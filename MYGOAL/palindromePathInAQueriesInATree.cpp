
class BIT {
private:
    vector<int> tree;
    int n;

public:
    BIT(int _n) : n(_n), tree(_n + 1) {}

    static int lowbit(int x) { return x & -x; }

    void update(int x, int v) {
        while (x <= n) {
            tree[x] ^= v;
            x += lowbit(x);
        }
    }

    int query(int x) {
        int ret = 0;
        while (x) {
            ret ^= tree[x];
            x -= lowbit(x);
        }
        return ret;
    }

    void updateRange(int l, int r, int v) {
        update(l, v);
        update(r + 1, v);
    }
};



