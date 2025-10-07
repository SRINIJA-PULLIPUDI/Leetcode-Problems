class Solution {
public:
int s=0,f=0;
void fun(int numBottles, int numExchange){
    if(numBottles<numExchange) return;
    s++;
    fun(numBottles-numExchange+1, numExchange+1);
}
    int maxBottlesDrunk(int numBottles, int numExchange) {
        fun(numBottles, numExchange);
        return s+numBottles;
    }
};