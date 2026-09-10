class Solution {
public:
    int solve(string &s, int i, int sign, long long res) {
        if (i == s.size() || !isdigit(s[i]))
            return sign * res;
        res = res * 10 + (s[i] - '0');
        return solve(s, i + 1, sign, res);
    }
    int myAtoi(string s) {
        int i = 0, sign = 1;
        while (i < s.size() && s[i] == ' ') i++;
        if (s[i] == '-') sign = -1, i++;
        else if (s[i] == '+') i++;
        return solve(s, i, sign, 0);
    }
};