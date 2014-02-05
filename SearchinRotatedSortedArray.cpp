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
		while (start<=end){
			int mid = (start + end)>>1;
			if (A[mid]== target) return ture;
			if (A[start]<=A[mid]){
				if(A[start]<=target && target < A[mid])
					end = mid-1;
				else start = mid+1;
			}
			else {
				if (A [mid] < target && target <= A [end])
					start = mid+1;
				else end = mid-1;
			}
			while (start <=end){
				if (A[start]==A[start+1]) start++;
				if (A[end]==A[end-1]) end++;
			}
		}
	return false;
	}
};

void main(){}