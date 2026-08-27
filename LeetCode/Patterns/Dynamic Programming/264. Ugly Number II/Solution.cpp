class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> res;
        res.push_back(1);

        int i2 = 0, i3 = 0, i5 = 0;

        while (res.size() < n) {
            int a = res[i2] * 2;
            int b = res[i3] * 3;
            int c = res[i5] * 5;

            int next = min(a, min(b, c));
            res.push_back(next);

            if (next == a) i2++;
            if (next == b) i3++;
            if (next == c) i5++;
        }

        return res.back();
    }
};