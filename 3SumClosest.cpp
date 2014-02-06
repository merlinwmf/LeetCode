#include <cstring>
#include <string>
#include <iostream>
#include <unordered_map>
#include <conio.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int> &num, int target) {
        int res;
        int S= num.size();
        int left, right, sum;
        int temp=INT_MAX;
        sort (num.begin(),num.end());
        for (int k=0;k<S-2;++k){
            if (k>0 && num[k]==num[k-1]) continue;
            left=k+1;
            right=S-1;
            while (left<right){
                sum = num[k]+num[left]+num[right];
                if (abs(target-sum)<temp) {
                    temp=abs(target-sum);
                    res=sum; 
                }
                if (sum-target<0){
                    do {left++;} while (left<right && num[left]==num[left-1]);    
                }    
                else if (sum-target>0){
                    do {right--;} while (left<right && num[right]==num[right+1]);
                }
                else return sum;
            }
        }
        return res;
    }
};


void main(){}