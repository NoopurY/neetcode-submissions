class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;

        while (columnNumber > 0) {
            columnNumber--;                     // Make it 0-based
            int rem = columnNumber % 26;
            ans += ('A' + rem);
            columnNumber /= 26;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};