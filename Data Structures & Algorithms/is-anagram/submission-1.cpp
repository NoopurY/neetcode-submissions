class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        int freqS[26] = {0};
        int freqT[26] = {0};
        
        for(int i = 0; i < s.size(); i++){
            freqS[s[i]-'a']++;
        }

        for(int i = 0; i < t.size(); i++){
            freqT[t[i]-'a']++;
        }

        for(int i = 0; i < 26; i++){
            if(freqS[i] != freqT[i]){
                return false;
            }
        }
        return true;
    }
};
