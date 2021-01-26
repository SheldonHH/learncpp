#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        int original_rob(vector<int> &money, int start, int end){
            int n2=0;
            int n1=0;

            for(int i=start; i < end; i++){
                int current = max(n1, n2 + money[i]);
                n2=n1;
                n1=current;
            }       
            return n1;
        }

        int rob(vector<int>& nums){
            int n = nums.size();
        }
}