class Solution {
    
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;      // Create a map to store numbers and their indices
        int n = nums.size();   // Get the size of the input vector
        
        for (int i = 0; i < n; i++) {
            int num = nums[i];  // Get the current number from the vector
            int left = target - num;  // Calculate the complement needed to reach the target
            
            if (mp.find(left) != mp.end()) {
                // If the complement exists in the map, return its index and the current index
                return {mp[left], i};
            }
            
            mp[num] = i;  // Store the current number and its index in the map
        }
        
        // If no solution is found, return {-1, -1}
        return {-1, -1};
        
    }
};