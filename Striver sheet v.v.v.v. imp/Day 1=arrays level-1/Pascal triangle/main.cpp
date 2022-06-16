#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numrows=5;
    int n=numrows;
    //int n=numRows;
    vector<vector<int>> gnt;
    vector<int> vec{1};
    gnt.push_back(vec);
    //if(n==1)
     //   return gnt;
    vec={1,1};
    gnt.push_back(vec);
    //if(n==2)
     //   return gnt;
    //a[0][0]=1;
    //a[1][0]=1;
    //a[1][1]=1;
    for(int i=2;i<n;i++){
        vector<int> vec;
        for(int j=0;j<=i;j++){
            if(j==0 || j==i)
                vec.push_back(1);
            else
                vec.push_back(gnt[i-1][j]+gnt[i-1][j-1]);
        }
        gnt.push_back(vec);
    }
    for(int i=0;i<gnt.size();i++){
        for(int j=0;j<gnt[i].size();j++){
            cout<<gnt[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
