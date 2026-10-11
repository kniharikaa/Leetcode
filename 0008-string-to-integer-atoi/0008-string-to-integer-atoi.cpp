
class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.length();

        // Step 1: Skip leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Step 2: Check the sign
        int sign = 1;
        if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        } 
        else if (i < n && s[i] == '+') {
            i++;
        }

        // Step 3: Convert digits and check overflow
        long long num = 0;

        while (i < n && s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';

            num = num * 10 + digit;

            // Step 4: Clamp to 32-bit integer range
            if (sign * num <= INT_MIN) {
                return INT_MIN;
            }
            if (sign * num >= INT_MAX) {
                return INT_MAX;
            }

            i++;
        }

        return sign * num;
    }
};
