class Solution {
public:
    bool checkValidString(string s) {
        
        stack<pair<char,int>> stleft;
        stack<pair<char,int>> stchar;


        for(int i =0;i<s.size();i++){
            if(s[i]=='('){
                stleft.push({s[i],i});
            }
            else if(s[i]  == '*'){
                stchar.push({s[i],i});
            }

            else{
                if(!stleft.empty())stleft.pop();
                
                else if(stleft.empty() && !stchar.empty()){
                    stchar.pop();
                }
                else{
                    return false;
                }
            }


        }

        if(!stleft.empty() && stchar.empty())return false;

    while(!stleft.empty()&&!stchar.empty()){
        
            if(stchar.top().second > stleft.top().second){
                stleft.pop();
                stchar.pop();
            }
            else{return false;}
        }

        if(!stleft.empty())return false;

        return true;

    }
};
