#include<bits/stdc++.h>
using namespace std;

int main()
{
    //vector<vector<int>> matrix= {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    vector<vector<int>> matrix= {{1,1,1},{1,0,1},{1,1,1}};
    int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> vec( m*n , vector<int> (2));
        /*for(int i=0;i<m;i++){
            for(int j=0;j<2;j++){
                cout<<vec[i][j]<<" ";
            }cout<<endl;
        }*/
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    vec[i][0]=-1;
                    vec[j][1]=-1;
                }
            }}
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vec[i][0]==-1)
                    matrix[i][j]=0;
                else if(vec[j][1]==-1)
                        matrix[i][j]=0;
            }
    }
    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }cout<<endl;
    }
    return 0;
}
