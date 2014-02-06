#include <cstring>
#include <string>
#include <iostream>
#include <unordered_map>
#include <conio.h>
using namespace std;

class Solution {
public:
    vector<vector<int> > threeSum(vector<int> &num) {
        vector<vector<int>> res;
        vector<int> temp;
        int s=num.size();
        if (s<3) return res;
        sort (num.begin(), num.end());
        int sum;
        int start;
        int end;
        for (int k=0;k<s-2;++k){
            if (k>0 && num[k]==num[k-1]) continue;
            start=k+1;
            end=s-1;
            while (start<end){
            sum = num[k]+num[start]+num[end];
            if (sum==0){
                temp.push_back(num[k]);
                temp.push_back(num[start]);
                temp.push_back(num[end]);
                res.push_back(temp);
                do {start++;} while (start<end && num[start]==num[start-1]);
			    do {end--;} while (start<end && num[end]==num[end+1]);
			    temp.clear();
            }
            else if (sum>0) end--;
            else start++;
        }
        }
    return res;    
    }
};

void main(){}