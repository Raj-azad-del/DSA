class Solution {
public:
    void solve(string s, string vi, int index, set<string>& st) {
        if(index >= s.size()) {
            st.insert(vi);
            return;
        }
        vi.push_back(s[index]);
        solve(s, vi, index + 1, st);
        vi.pop_back();
        solve(s, vi, index + 1, st);
    }
    int distinctSubseqII(string s) {
        set<string> st;
        string vi;
        solve(s, vi, 0, st);
        return st.size() - 1;
    }
};