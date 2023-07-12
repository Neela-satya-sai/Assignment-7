#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;
bool issraight_line(vector<vector<int>> line){
    int points=line.size();
    for(int i=0;i<points-1;i++){
        
        int y= line[i+1][1]-line[i][1];
        int x= line[i+1][0]-line[i][0];
        if(y/x!=1) return false;
    }
    return true;
}


int main()
{   //return true if points are forming stright line
    vector<vector<int>> line={{1,2},{2,3},{3,4},{4,5},{5,6},{6,7}};
    cout<<issraight_line(line);
    return 0;
}
