class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int min_size = INT_MAX;
        for (auto s: strs) {
            int N = s.size();
            if (N < min_size) {
                min_size = N;
            }
        }

        int vsize = strs.size();
        string result;
        bool no_match_found = false;

        for (int i = 0; i < min_size; i++) {
            char ch = strs[0][i];
            for (int j = 1; j < vsize; j++) {
                if (ch != strs[j][i]) {
                    no_match_found = true;
                    break;
                }
            }
            if (no_match_found) {
                break;
            }
            result.push_back(ch);
        }

        return result;
    }
};
