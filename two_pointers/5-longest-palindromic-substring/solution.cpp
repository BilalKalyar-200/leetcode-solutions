class Solution {
public:
    int max=1;
    int start=0;
    void expand_middle(string s,int left,int right){
        while(left>=0 && right<s.length() && s[left]==s[right]){
            left--;
            right++;
        }
        int length=right-left-1; //its basically length=(left+1)-(right-1)+1
        if(length>max){
            max=length;
            start=left+1;
        }
    }
    string longestPalindrome(string s) {
        int n=s.length();
        if(n==0){
            return "";
        }
        for(int i=0;i<n;i++){
            expand_middle(s,i,i);
            //for even
            expand_middle(s,i,i+1);
        }
        return s.substr(start,max);
    }
};

