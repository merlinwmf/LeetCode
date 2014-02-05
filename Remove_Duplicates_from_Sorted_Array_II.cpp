#include <iostream>
using namespace std;


class Solution {
public: 
	int removeDuplicates (int A[], int n) {
		if (n<3) return n;
		int p=2;
		int curr=2;
		while (curr < n){
			if (A[p-2]!=A[curr]) {
			    A[p]=A[curr++];
			    p++;
			}
			else curr++;
		}
		return p;
	}
};

void main(){}