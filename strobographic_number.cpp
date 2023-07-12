#include<vector>
#include <iostream>

using namespace std;
bool  check_strobogramatatic(string s){
    int n=s.size();
    int i=0,j=n-1;
    while(i<j){
        if(s[i]=='0' && s[j]=='0') {i++, j--;}
        else if(s[i]=='0' && s[j]=='0') {i++, j--;}
        else if(s[i]=='1' && s[j]=='1') {i++, j--;}
        else if(s[i]=='2' && s[j]=='2') {i++, j--;}
        else if(s[i]=='5' && s[j]=='5') {i++, j--;}
        else if(s[i]=='8' && s[j]=='8') {i++, j--;}
        else if(s[i]=='6' && s[j]=='9') {i++, j--;}
        else if(s[i]=='9' && s[j]=='6') {i++, j--;}
        else return false;
    }
    if(n%2!=0){ //odd
        if(s[i]=='0' or s[i]=='1' or s[i]=='2' or s[i]=='5' or s[i]=='8') return true;
        else return false;
    }
    
    return true;
}

int main()
{
    string s="2692";
    cout<<check_strobogramatatic(s);

    return 0;
}
