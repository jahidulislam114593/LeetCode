class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int current = 1;
        int idx = 0;
        int missing = 0;
        while(true)
        {
            if(idx < arr.size() && arr[idx] == current)
            {
                idx++;
            }else
            {
                missing++;
                if(missing == k) return current;
            }
            current++;
        }
    }
};