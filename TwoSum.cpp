#include <cstring>
#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> res;
        unordered_map<int,int> sum;
		int s=numbers.size();
        for(int i=0;i<s;++i){
            sum[numbers[i]]=i;
        }
        for(int i=0; i<s;++i) {
            if(sum.find(target-numbers[i])!=sum.end()){
               if(i<sum[target-numbers[i]]){ 
               res.push_back(i+1);
               res.push_back(sum[target-numbers[i]]+1);
               }
            }
        }
     return res;   
    }
};

void main(){}