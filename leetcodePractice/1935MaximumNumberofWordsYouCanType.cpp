class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map <char, int> m;
        for (auto i :brokenLetters){
            ++m[i];
        }
        bool flag=true;
        int opt=0;
        for (int i =0;i<text.size();++i){
            if (text[i]==' '){
                if (flag==true){
                    ++opt;
                }
                flag = true;
        
            } else if (m[text[i]]>0){
                flag=false;
            }
            
        }
        return opt+flag;
    }
};