class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int nsum = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            sum = sum+nums[i];
        }
        nsum = (n*(n+1))/2;
        int number = nsum - sum;
        return number;

    }
};