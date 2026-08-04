class Solution {
public:
    void combinations(int i, int sum, vector<int>& candidates, int target, vector<int> arr, vector<vector<int>>& s){
        if(sum==target) {
            s.push_back(arr);
            return;
        }
        if(sum>target) return;
        if(i==candidates.size()) return;
        arr.push_back(candidates[i]);
        combinations(i+1, sum+candidates[i], candidates, target, arr, s);
        arr.pop_back();
        while(i+1<candidates.size() and candidates[i]==candidates[i+1]) i++;
        combinations(i+1, sum, candidates, target, arr, s);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());
        combinations(0, 0, candidates, target, {}, res);
        return res;
    }
};