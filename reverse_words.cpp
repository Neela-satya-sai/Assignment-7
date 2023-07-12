#include<vector>
#include <iostream>
#include<algorithm>

using namespace std;
string reverseWords(string s) {
        int n=s.size();
        int l=0,r=0;
        while(l<n){
            while(r<n && s[r]!=' '){
                  r++;
            }
            reverse(s.begin()+l,s.begin()+r);
            l=r+1;
            r=l;
        }
        return s;
    }

int main()
{
    string s="let's do it";
    cout<<reverseWords(s);
    return 0;
}
