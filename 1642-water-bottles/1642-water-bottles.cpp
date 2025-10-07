class Solution {
public:
int s=0,f=0;
void fun(int numBottles, int numExchange){
    if(numBottles<numExchange) return;
    int x = (numBottles/numExchange);
    s+=x;
    numBottles = (numBottles%numExchange)+x;
    fun(numBottles, numExchange);
}
    int numWaterBottles(int numBottles, int numExchange) {
        fun(numBottles,numExchange);
        return s+numBottles;
    }
};