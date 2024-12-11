class Solution {
public:

    bool searchInRow(vector<vector<int>>& mat, int target, int row)
    {
        int n = mat[0].size();
        int st = 0, en = n - 1;
        while(st <= en)
        {
            int mid = st + (en - st) / 2;
            if(target == mat[row][mid])
            {
                return true;
            }else if(target > mat[row][mid])
            {
                st = mid + 1;
            }else 
            {
                en = mid - 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size(), n = mat[0].size();
        int st = 0, en = m - 1;
        while(st <= en)
        {
            int midRow = st + (en - st) / 2;
            if(target >= mat[midRow][0] && target <= mat[midRow][n-1])
            {
                //BS
                return searchInRow(mat, target, midRow);
            }else if(target >= mat[midRow][n-1])
            {
                st = midRow + 1;
            }else
            {
                en = midRow - 1;
            }
        }

        return false;
    }
};