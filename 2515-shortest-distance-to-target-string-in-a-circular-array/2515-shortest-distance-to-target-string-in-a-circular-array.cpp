class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        if(words[startIndex]==target) return 0;
        int n = words.size(),f=0;
        int i=(startIndex+1)%n, count = 1;
        while(true){
            if(words[i]==target){
                f=1;
                break;
            }
            if(i==startIndex) break;
            count++;
            i = (i+1)%n;
        }
        i = (startIndex-1+n)%n;
        int lcount = 1;
        while(true){
            if(words[i]==target){
                break;
            }
            if(i==startIndex) break;
            lcount++;
            i = (i-1+n)%n;
        }
        if(f==0) return -1;
        return min(count,lcount);
    }
};