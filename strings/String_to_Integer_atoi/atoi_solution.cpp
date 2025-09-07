class Solution {
public:
    int myAtoi(string s) {
        vector<int> digits;
        bool digit_found = false;
        bool plus = true;
        for (auto ch: s) {
            if (isdigit(ch)) {
                digit_found = true;
                digits.push_back(ch - '0');
            } else if (isalpha(ch)) {
                break;
            } else {
                if (digit_found == false) {
                    if (ch == '-') {
                        plus = false;
                    }
                } else {
                    break;
                }
            }
        }

        reverse(digits.begin(), digits.end());
        int total = 0;
        int mul = 1;
        for (int digit: digits) {
            int value = 0;
            value = digit * mul;
            total += value;
            mul *= 10;
        }
        
        if (plus) {
            return total;
        } else {
            return -total;
        }
    }
};
