class Solution {
    private:
    void genIndex(vector<string>& ans, int index, string dig, string set, string temp)
    {
        if(dig.size()==0)
        {
            //ans.push_back("");
            return;
        }
        //static string temp=set;
        if(index==dig.size())
        {
            ans.push_back(temp);
            temp=set;
            return;
        }
        
        if(dig[index]=='2')
        {
            temp[index]='a';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='b';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='c';
            genIndex(ans, index+1, dig, set, temp);
        }
        if(dig[index]=='3')
        {
            temp[index]='d';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='e';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='f';
            genIndex(ans, index+1, dig, set, temp);
        }
        if(dig[index]=='4')
        {
            temp[index]='g';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='h';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='i';
            genIndex(ans, index+1, dig, set, temp);
        }
        if(dig[index]=='5')
        {
            temp[index]='j';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='k';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='l';
            genIndex(ans, index+1, dig, set, temp);
        }
        if(dig[index]=='6')
        {
            temp[index]='m';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='n';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='o';
            genIndex(ans, index+1, dig, set, temp);
        }
        if(dig[index]=='7')
        {
            temp[index]='p';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='q';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='r';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='s';
            genIndex(ans, index+1, dig, set, temp);
        }
        if(dig[index]=='8')
        {
            temp[index]='t';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='u';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='v';
            genIndex(ans, index+1, dig, set, temp);
        }
        if(dig[index]=='9')
        {
            temp[index]='w';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='x';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='y';
            genIndex(ans, index+1, dig, set, temp);
            temp[index]='z';
            genIndex(ans, index+1, dig, set, temp);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string temp;
        for(int i=0;i<digits.size();i++)
        temp+=' ';
        genIndex(ans, 0, digits, temp, temp);
        return ans;
    }
};