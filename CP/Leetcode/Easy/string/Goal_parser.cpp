class Solution {
public:
    string interpret(string command) {
        /*int  i;
        string ans;
        int n = command.size();
        char a[n+1];
        strcpy(a, command.c_str());
        for(i=0;i<n;i++){
            if(a[i] == 'G'){
                ans.push_back('G');
            }
            if(a[i] == '(' && a[i+1] == ')'){
                ans.push_back('o');
            }
            if(a[i] == '(' && a[i+1] == 'a' && a[i+2] == 'l' && a[i+3] == ')'){
                ans.push_back('a');
                ans.push_back('l');
            }
        }
        return ans;
        }*/
        
        unordered_map<string,string> d = {
            {"(al)","al"},
            {"()","o"},
            {"G","G"},
        };
        
        string temp = "",res ="";
        for(char c: command){
            temp+= c;
            if(d.find(temp)!=d.end()){
                res += d[temp];
                temp = "";
            }
        }
    return res;
    }
};
