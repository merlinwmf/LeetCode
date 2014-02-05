#include <cstring>
#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
	bool search (int A[], int n, int target){
		int start=0;
		int end=n-1;
		int mid;
		while (start<=end){
			mid = (start + end)>>1;
			if (A[mid]== target) return true;
			if (A[start]<A[mid]){			    
				if(A[start]<=target && target < A[mid]) end = mid-1;
				else start = mid+1;
			}
			else if(A[start]>A[mid]) {
				if (A [mid] < target && target <= A [end]) start = mid+1;
				else end = mid-1;
			}
			else start++;
			}
	return false;
	}
};


void main(){}