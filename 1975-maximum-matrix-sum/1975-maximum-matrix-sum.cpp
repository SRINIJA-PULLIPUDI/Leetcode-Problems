class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int neg=0, pos=0;
        int negmax=INT_MIN, posmin=INT_MAX;
        long long res=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]<0){
                    neg++;
                    negmax = max(negmax, matrix[i][j]);
                }
                else{
                    posmin = min(posmin, matrix[i][j]);
                }
                res+=(abs(matrix[i][j]-0));
            }
        }
        cout<<negmax<<" "<<posmin<<" "<<res;
        if(neg%2==0) return res;
        if(abs(posmin-0)>abs(negmax-0)){
            res-=2*(abs(negmax-0));
        }else{
            res-=2*(abs(posmin-0));
        }
        return res;
    }
};