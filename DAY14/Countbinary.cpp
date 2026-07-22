#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev = 0;     // previous group length
        int curr = 1;     // current group length
        int result = 0;

        for(int i = 1; i < s.size(); i++) {
            if(s[i] == s[i - 1]) {
                curr++;
            } else {
                result += min(prev, curr);
                prev = curr;
                curr = 1;
            }
        }

        // last group
        result += min(prev, curr);

        return result;
    }
};