class Solution {
public:
    int hIndex(vector<int>& citations) {
        int s=0;
        int e=citations.size()-1;
        int n=citations.size();

        while(s<=e){
            int mid=s+(e-s)/2;
            if(citations[mid]>=n-mid){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return n-s;
    }
};