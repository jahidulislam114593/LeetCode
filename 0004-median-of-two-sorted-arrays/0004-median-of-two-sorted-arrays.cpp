class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n1 = a.size(), n2 = b.size();
        int i = 0, j = 0;
        vector<int>c;
        while(i<n1 && j<n2)
        {
            if(a[i] < b[j]) c.push_back(a[i++]);
            else c.push_back(b[j++]);
        }
        while(i<n1) c.push_back(a[i++]);
        while(j<n2) c.push_back(b[j++]);

        int n = n1 + n2;
        if(n & 1)
        {
            return c[n/2];
        }
        return double(c[n/2] + c[n/2 - 1]) / 2.0;
    }
};