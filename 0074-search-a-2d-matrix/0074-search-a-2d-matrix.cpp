class Solution {
public:

    bool searchInRow(vector<vector<int>>& mat, int k, int row)
    {
        int n = mat[0].size();
        int st = 0, end = n - 1;
        while(st <= end)
        {
            int mid = st + (end - st) / 2;
            if(k == mat[row][mid]) return true;
            else if(k > mat[row][mid]) st = mid + 1;
            else end = mid - 1;
        }
        return false;
    }


    bool searchMatrix(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();

        int st = 0, end = m - 1;
        while(st <= end)
        {
            int mid = st + (end - st) / 2;
            if(k >= mat[mid][0] && k <= mat[mid][n-1])
            {
                // BS
                return searchInRow(mat, k, mid);
            }else if(k > mat[mid][n-1])
            {
                st = mid + 1;
            }else 
            {
                end = mid - 1;
            }
        }
        return false;
    }
};