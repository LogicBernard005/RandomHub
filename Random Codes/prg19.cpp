class Solution {
public:
    int maxVowels(string s, int k) {
        int max_count=0, max_substring=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u' )
            max_count++;
        }
        max_substring=max_count;
        for(int i=k;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u' )
            max_substring++;
            if(s[i-k]=='a' || s[i-k]=='e'|| s[i-k]=='i'|| s[i-k]=='o'|| s[i-k]=='u' )
            max_substring--;
            max_count=max(max_substring,max_count);
        }
        return max_count;
    }
};