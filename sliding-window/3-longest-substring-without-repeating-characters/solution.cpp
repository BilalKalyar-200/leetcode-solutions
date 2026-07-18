class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0){
            return 0;
        }
        int max=1;
        for(int i=0;i<s.length();i++){
            int count=0;
            for(int j=i;j<s.length();j++){
                bool match=false;
                for(int k=i;k<j;k++){
                    if(s[k]==s[j]){
                        match=true;
                        break;
                    }
                }
                if(match){
                    break;
                }
                count++;
                if(count>max){
                    max=count;
                }
            }
        }
        return max;
    }
};