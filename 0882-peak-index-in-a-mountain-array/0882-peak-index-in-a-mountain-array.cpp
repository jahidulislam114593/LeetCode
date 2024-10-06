class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();

        int st = 1, end  = n - 2;

        while(st <= end)
        {
            int mid = st + (end - st) / 2;
            if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]) return mid;

            if(arr[mid - 1] < arr[mid]){
                //left -> search on right side
                st = mid + 1;
            }else
            {
                //right -> search on left side
                end = mid - 1;
            }
        }
        return -1;
    }
};