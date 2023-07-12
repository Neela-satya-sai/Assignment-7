#include<vector>
#include <iostream>
#include<algorithm>

using namespace std;
void reverseK(string &s,int k){
    int n=s.size();
    if(n<k) reverse(s.begin(),s.end());
    //if(n>=k && n<2*k){ //only reverse first k leters
        //reverse(s.begin(),s.begin()+k);
    //}
    else {
        int len=n;
        int t=0;
        while(len>=k)
        {   reverse(s.begin()+t,s.begin()+t+k);
            t=t+2*k;
            len-=2*k;
        }
    }
}


int main()
{   //reverse first k letters for every 2k letter count from start
    string s="abcdefg";        //output:-"bacdfeg"
    int k=2;
    reverseK(s,k);
    cout<<s;
    return 0;
}
