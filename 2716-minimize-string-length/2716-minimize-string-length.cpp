class Solution {
public:
    int minimizedStringLength(string s) {
        set<char> st;
        st.insert(s.begin(), s.end());
        return st.size();
    }
};