class Solution {
public:
    string removeOccurrences(string s, string part) {
        while (true){
            std::size_t found = s.find(part);
            if (found!=std::string::npos){
                s.erase(s.find(part),part.size());
            } else{
                break;
            }
        }
        return s;
    }
};
