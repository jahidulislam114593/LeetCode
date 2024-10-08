class Solution {
public:
    bool isValid(vector<int>& arr, int n, int k, int mid) {
        int split = 1, subArr = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] > mid) return false;  
            if(subArr + arr[i] <= mid) {
                subArr += arr[i];
            } else {
                split++;
                subArr = arr[i];  
            }
        }
        return split <= k;  
    }

    int splitArray(vector<int>& arr, int k) {
        int n = arr.size();
        int sum = 0;
        for(int i = 0; i < n; i++) sum += arr[i];

        int st = *max_element(arr.begin(), arr.end()), end = sum, ans = -1;

        while(st <= end) {
            int mid = st + (end - st) / 2;
            if(isValid(arr, n, k, mid)) {
                ans = mid;
                end = mid - 1; 
            } else {
                st = mid + 1; 
            }
        }
        return ans;
    }
};
