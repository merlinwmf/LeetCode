#include <iostream>
using namespace std;

class Solution {
public: 
	int removeDuplicates (int A[], int n) {
		if (n<2) return n;
		int p=0;
		int curr=1;
		while (curr < n){
			if (A[p]!=A[curr]) A[++p]=A[curr++];
			else curr++;
		}
		return p+1;
	}
};

void main(){}