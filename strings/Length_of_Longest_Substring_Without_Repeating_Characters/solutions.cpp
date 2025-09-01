#include <vector>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> subs;
        
        vector<int> sarray;
        for (auto a: s) {
            if (subs.find(a) == subs.end()) {
                subs.insert(a);
            } else {
                sarray.push_back(subs.size());
                subs.clear();
                // for (auto a: subs) {
                //     cout << "a: " << a << endl;
                // }
                subs.insert(a);
            }
        }


        auto maxIt = std::max_element(sarray.begin(), sarray.end());
        return *maxIt;
    }
};
