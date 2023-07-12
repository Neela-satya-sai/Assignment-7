#include<vector>
#include <iostream>

using namespace std;
int long long sum_of_num1_num2(string &num1,string &num2){
    int n1=num1.size();
    int n2=num2.size();
    int long long no1=0;
    for(int i=0;i<n1;i++){
        int digit=num1[i]-48;
        no1=no1*10+digit;
    }
    int long long no2=0;
    for(int i=0;i<n2;i++){
        int digit=num2[i]-48;
        no2=no2*10+digit;
    }
    return no1+no2;
    
}

int main()
{
    string num1="1145567234567897892";
    string num2="1235678903456790347";
    cout<<sum_of_num1_num2(num1,num2);
    return 0;
}
