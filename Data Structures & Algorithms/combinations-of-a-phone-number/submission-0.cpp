class Solution {
public:
    unordered_map<char,string> hash;
    vector<string> groups;
    vector<string> ans;
    string curr;

    void recurse (vector<string> groups,int idx){
        if(idx == groups.size()){
            ans.push_back(curr);
            return;
        }
        for(char x:groups[idx]){
            curr.push_back(x);
            recurse(groups,idx+1);
            curr.pop_back();
        }
    }


    vector<string> letterCombinations(string digits) {
        if(digits.empty())return{};
        hash['2']="abc";
        hash['3']="def";
        hash['4']="ghi";
        hash['5']="jkl";
        hash['6']="mno";
        hash['7']="pqrs";
        hash['8']="tuv";
        hash['9']="wxyz";

        for(char x:digits){
            groups.push_back(hash[x]);
        }
        recurse(groups,0);

    return ans;
    }
};
