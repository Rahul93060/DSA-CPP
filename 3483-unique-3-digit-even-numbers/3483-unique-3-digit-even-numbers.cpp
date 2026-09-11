class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        
        // Count frequency of each digit
        vector<int> freq(10, 0);
        
        for (int d : digits) {
            freq[d]++;
        }
        
        int ans = 0;
        
        // Try every 3-digit number
        for (int num = 100; num <= 998; num += 2) {
            
            int x = num;
            
            int ones = x % 10;
            x /= 10;
            
            int tens = x % 10;
            x /= 10;
            
            int hundreds = x;
            
            // Check if required digits are available
            vector<int> need(10, 0);
            need[hundreds]++;
            need[tens]++;
            need[ones]++;
            
            bool possible = true;
            
            for (int d = 0; d <= 9; d++) {
                if (need[d] > freq[d]) {
                    possible = false;
                    break;
                }
            }
            
            if (possible) {
                ans++;
            }
        }
        
        return ans;
    }
};