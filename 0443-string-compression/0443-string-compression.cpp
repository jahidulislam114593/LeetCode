class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;
        for(int i = 0; i<n; ++i)
        {
            char ch = chars[i]; // a
            int cnt = 0; // 0
            while(i < n && ch == chars[i])
            {
                cnt++;
                i++;
            }
            if(cnt == 1){
                chars[idx++] = ch;
            }else
            {
                chars[idx++] = ch;
                string intToString = to_string(cnt);
                for(char dig: intToString)
                {
                    chars[idx++] = dig;
                }
            }
            i--;
        }
        return idx;
    }
};