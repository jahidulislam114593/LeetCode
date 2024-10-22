class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
        //Dutch National Flag Algo
        int m = 0, h = n-1, l = 0;
        while(m <= h)
        {
            if(arr[m] == 0)
            {
                swap(arr[m], arr[l]);
                m++;
                l++;
            }else if(arr[m] == 1) m++;
            else{
                swap(arr[h], arr[m]);
                h--;
            }
        }
    }
};