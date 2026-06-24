class Solution {
public:

    string curr;
    vector<string> ans;
    int close =0;
    int open =0;

    void generate(int n){
        if(close>open)return;
        if(curr.size() == 2*n){
            ans.push_back(curr);
            return;
        }

    if(open<n){
    curr.push_back('(');
    open++;
    generate(n);
    curr.pop_back();
    open--;}

    if(close<open){
    curr.push_back(')');
    close++;
    generate(n);
    curr.pop_back();
    close--;}


    }


    vector<string> generateParenthesis(int n) {
        generate(n);
        return ans;

    }
};
