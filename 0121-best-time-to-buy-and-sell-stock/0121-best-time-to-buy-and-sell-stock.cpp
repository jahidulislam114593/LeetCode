class Solution {
public:
    int maxProfit(vector<int>& arr) {
        //BruteForce TC-> O()
        // int mx = 0;
        // int n = arr.size();
        // for(int i = 0; i < n; i++)
        // {
        //     for(int j = i+1; j < n; j++)
        //     {
        //         if(arr[i] < arr[j])
        //         {
        //             int profit = arr[j] - arr[i];
        //             mx = max(profit, mx);
        //         }
        //     }
        // }
        // return mx;


        //Optimized TC-> O(n)
        int n = arr.size();
        int mx = 0;
        int bestBuy = arr[0];
        for(int i = 1; i<n; i++)
        {
            if(arr[i] > bestBuy){
                int profit = arr[i] - bestBuy;
                mx = max(profit, mx);
            }
            bestBuy = min(arr[i], bestBuy);
        }
        return mx;
    }
};