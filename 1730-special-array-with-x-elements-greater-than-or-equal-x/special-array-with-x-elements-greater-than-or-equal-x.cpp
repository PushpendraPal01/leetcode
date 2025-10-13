class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<=n;i++){
            int idx=lower_bound(nums.begin(),nums.end(),i)-nums.begin();
            int ans=n-idx;
            if(i==ans){
                return i;
            }
        }
        return -1;
    }
};