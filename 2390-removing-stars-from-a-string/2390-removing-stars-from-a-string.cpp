class Solution {
public:
    string removeStars(string s) {
        stack<char>m;
        for(char a:s){
            if(a=='*'){
                m.pop();
            }else{
                m.push(a);
            }
        }
        string k="";
        while(!m.empty()){
            k.push_back(m.top());
            m.pop();
        }
        reverse(k.begin(),k.end());
        return k;
    }
};