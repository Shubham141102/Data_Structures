solution 1: gives TLE
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                ans = nums[i];
            }
        }
        return ans;
    }
};



solution 2:
Sorting
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i] == nums[i+1])
            return nums[i];
        }
        return -1;
    }
};

solution3 a: using hashset fixed size vector
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>sol(1000000);
        for(int i = 0;i<nums.size();i++)
        {
            sol[nums[i]]++;
        }
        for(int i=0;i<sol.size();i++)
        {
            if(sol[i]>1)
            {
                return i;
            }
        }
        return -1;

    }
};
solution 3b: using unorder_set
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int>seen;
        for(int num:nums)
        {
            if(seen.count(num)==1)
            return num;
            seen.insert(num);
        }
        return -1;
        
    }
};
