class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    string reverseVowels(string s) {
        int n=s.size();
        int st=0;
        int end=n-1;
        while(st<end){
            if (!isVowel(s[st])) {
        st++;
    }
    else if (!isVowel(s[end])) {
        end--;
    }
    else {
        swap(s[st], s[end]);
        st++;
        end--;
    }
        }
        return s;
    }
};