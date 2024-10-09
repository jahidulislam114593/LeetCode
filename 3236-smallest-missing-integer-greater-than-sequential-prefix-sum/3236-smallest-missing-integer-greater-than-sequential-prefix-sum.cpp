class Solution {
public:
    int missingInteger(vector<int>& arr) {
        int sum = arr[0];
        int n = arr.size();

        unordered_set<int>s;
        for(auto el:arr) s.insert(el);

        for(int i = 1; i<n; i++)
        {
            if(arr[i] == arr[i-1] + 1)
            {
                sum += arr[i];
            }else
            {
                break;
            }
        }

        while(s.find(sum) != s.end())
        {
            sum++;
        }
        return sum;
    }
};