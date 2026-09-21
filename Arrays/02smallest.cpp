class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        vector<int> ans;
        int mini = INT_MAX;
        int smini = INT_MAX;
        for(int i=0;i<arr.size();i++)
        {
            if(mini>arr[i])
            {
                mini = arr[i];
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            if(smini>arr[i] && arr[i]!= mini)
            {
                smini = arr[i];
            }
        }
        if(smini == INT_MAX) {
                return {-1};  
            }
        ans.push_back(mini);
        ans.push_back(smini);
        
        return ans;
        
        
    }
};