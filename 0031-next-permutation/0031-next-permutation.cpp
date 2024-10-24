class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int n = A.size();
        int pivot = -1;
        //1st step: Find Pivot element
        for(int i = n - 2; i >= 0; --i)
        {
            if(A[i] < A[i+1])
            {
                pivot = i;
                break;
            }
        }
        if(pivot == -1)
        {
            reverse(A.begin(), A.end());
            return;
        }

        //2nd step: next larget ele
        for(int i = n - 1; i > pivot; --i)
        {
            if(A[i] > A[pivot])
            {
                swap(A[i], A[pivot]);
                break;
            }
        }

        //3rd step : Reverse

        int i = pivot + 1;
        int j = n - 1;
        while(j>=i)
        {
            swap(A[i++], A[j--]);
        }
    }
};