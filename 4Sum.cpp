#include <cstring>
#include <string>
#include <iostream>
#include <unordered_map>
#include <conio.h>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
        vector<vector<int>> res;
        vector<int> temp;
        int left,right,sum;
        int S=num.size();
        sort(num.begin(),num.end());
        for (int i=0;i<S-3;++i){
            if(i>0 && num[i]==num[i-1]) continue;
            for (int j=i+1;j<S-2;++j){
                if(j!=i+1 && num[j]==num[j-1]) continue;
                left=j+1;
                right=S-1;
                while (left<right){
                    sum=num[i]+num[j]+num[left]+num[right];
                    if(sum<target) do{left++;} while (left<right && num[left]==num[left-1] );
                    else if(sum>target) do{right--;} while (left<right && num[right]==num[right+1]);
                    else{
                        temp.push_back(num[i]);
                        temp.push_back(num[j]);
                        temp.push_back(num[left]);
                        temp.push_back(num[right]);
                        res.push_back(temp);
                        temp.clear();
                        do{left++;} while (left<right && num[left]==num[left-1] );
                        do{right--;} while (left<right && num[right]==num[right+1]);
                        
                    }
                }
            }
        }
    return res;    
    }
};

void main(){}