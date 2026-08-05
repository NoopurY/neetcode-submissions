class Solution {
public:

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string encoded = "";

        for (string s : strs) {
            encoded += to_string(s.length()) + "#" + s;
        }

        return encoded;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while (i < s.length()) {
            int j = i;

            // Find the '#'
            while (s[j] != '#') {
                j++;
            }

            // Length of current string
            int len = stoi(s.substr(i, j - i));

            // Move to first character of the actual string
            j++;

            // Extract the string
            result.push_back(s.substr(j, len));

            // Move to next encoded string
            i = j + len;
        }

        return result;
    }
};