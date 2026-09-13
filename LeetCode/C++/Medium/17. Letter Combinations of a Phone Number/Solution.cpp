class Solution {
public:
    vector<string> letterCombinations(string digits) {
        int count = digits.size();
        if (count == 0) return {};

        vector<string> g;
        for (char ch : digits) {
            if (ch == '2') g.push_back("abc");
            if (ch == '3') g.push_back("def");
            if (ch == '4') g.push_back("ghi");
            if (ch == '5') g.push_back("jkl");
            if (ch == '6') g.push_back("mno");
            if (ch == '7') g.push_back("pqrs");
            if (ch == '8') g.push_back("tuv");
            if (ch == '9') g.push_back("wxyz");
        }

        if (count == 1) {
            vector<string> res;
            for (char ch : g[0]) {
                res.push_back(string(1, ch));
            }
            return res;
        }

        if (count == 2) {
            vector<string> res;
            for (char a : g[0]) {
                for (char b : g[1]) {
                    res.push_back(string(1, a) + b);
                }
            }
            return res;
        }

        if (count == 3) {
            vector<string> res;
            for (char a : g[0]) {
                for (char b : g[1]) {
                    for (char c : g[2]) {
                        res.push_back(string(1, a) + b + c);
                    }
                }
            }
            return res;
        }

        if (count == 4) {
            vector<string> res;
            for (char a : g[0]) {
                for (char b : g[1]) {
                    for (char c : g[2]) {
                        for (char d : g[3]) {
                            res.push_back(string(1, a) + b + c + d);
                        }
                    }
                }
            }
            return res;
        }

        return {};
    }
};