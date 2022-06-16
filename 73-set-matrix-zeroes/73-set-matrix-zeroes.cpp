class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
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
            cout<<endl;
    }
    }
};