class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        int curr = 0;
        vector<int> a(n);
        vector<int> b(n);
        if(boxes[0]=='1') curr++;
        else a[0] = 0;

        for(int i=1;i<boxes.size();i++){
            a[i] = a[i-1]+curr;
            if(boxes[i]=='1') curr++;
        }
        curr=0;
        if(boxes[n-1]=='1') curr++;
        else b[n-1] = 0;
        for(int i=n-2;i>=0;i--){
            b[i] = b[i+1]+curr;
            if(boxes[i]=='1') curr++;
        }
        vector<int> res(n);
        for(int i=0;i<n;i++){
           res[i] = a[i]+b[i];
        }
        return res;
    }
};