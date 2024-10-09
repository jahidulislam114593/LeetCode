class Solution {
public:
    int missingInteger(vector<int>& arr) {
        int sum = arr[0];
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1] + 1) {
                sum += arr[i]; 
            } else {
                break; 
            }
        }

        int missing = sum;
        bool found = true;

        while (found) {
            found = false;
            for (int i = 0; i < n; i++) {
                if (arr[i] == missing) {
                    missing++; 
                    found = true;
                    break; 
                }
            }
        }

        return missing; 
    }
};
