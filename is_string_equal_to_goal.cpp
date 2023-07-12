#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;

bool is_c_equal_to_goal(string s,string goal){
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s==goal) return true;
         char ch=s[0];
         s.erase(s.begin() + 0, s.begin()+1);
         s.push_back(ch);
    }
    return false;
}


int main()
{   string s="deabc";
    string goal="cdeab";       
    cout<<is_c_equal_to_goal(s,goal);
    return 0;
}
