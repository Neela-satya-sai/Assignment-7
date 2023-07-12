
#include <iostream>
#include<string>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
bool checkISOMPORPIC(string &s,string &t)
{
    vector<int> v(150,1000);
    if(s.size()!=t.size()) return false;
    for(int i=0;i<s.size();i++)   // to check mapping in s--->t perspective 
    { int asci=(int)s[i];
      if(v[asci]==1000) v[asci]=s[i]-t[i];
      else
      {
          if(v[asci]!=s[i]-t[i]) return false;
      }
    }
    for(int i=0;i<150;i++)
    {
        v[i]=1000;
    }
    
    for(int i=0;i<t.size();i++) //to check mapping in t--->s perspective 
                        // to be isomorphic we need to check in both perspective
    { int asci=(int)t[i];
      if(v[asci]==1000) v[asci]=t[i]-s[i];
      else
      {
          if(v[asci]!=t[i]-s[i]) return false;
      }
    }
    
    return true;
}

int main()
{   ///checking for ISOMORPHIC
    string s="badc";
    string t="baba";
    cout<<checkISOMPORPIC(s,t);
    return 0;
}
