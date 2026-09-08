class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN;
        long long sec = LLONG_MIN;
        long long third = LLONG_MIN;

        for (int x : nums) {
            // Skip duplicate values
            if (x == first || x == sec || x == third) {
                continue;
            }

            if (x > first) {
                third = sec;
                sec = first;
                first = x;
            }
            else if (x > sec) {
                third = sec;
                sec = x;
            }
            else if (x > third) {
                third = x;
            }
        }

        // If 3 distinct numbers exist, return third maximum
        if (third != LLONG_MIN) {
            return third;
        }

        // Otherwise return maximum
        return first;
    }
};