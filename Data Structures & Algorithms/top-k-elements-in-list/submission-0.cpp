class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // Step 1: Count frequency
        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        // Step 2: Create buckets
        vector<vector<int>> bucket(nums.size() + 1);

        // Step 3: Place each number into its frequency bucket
        for (pair<int, int> entry : freq) {
            int number = entry.first;
            int frequency = entry.second;

            bucket[frequency].push_back(number);
        }

        // Step 4: Collect top k frequent elements
        vector<int> ans;

        for (int i = nums.size(); i >= 1; i--) {

            for (int j = 0; j < bucket[i].size(); j++) {

                ans.push_back(bucket[i][j]);

                if (ans.size() == k) {
                    return ans;
                }
            }
        }

        return ans;
    }
};