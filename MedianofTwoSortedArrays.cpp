#include <cstring>
#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
        return findMedianSortedArrays_Helper (A,m,B,n);
    }
    double findMedianSortedArrays_Helper (int A[], int m, int B[], int n){
        int total = m+n;
        if (total & 0x1){
            return findKthSortedArrays (A,m,B,n,total/2+1);
        }
        else {
            return (findKthSortedArrays (A,m,B,n,total/2) + findKthSortedArrays (A,m,B,n,total/2+1))/2;
        }
    }
    double findKthSortedArrays(int A[],int m, int B[], int n, int k){
        if (m>n) return findKthSortedArrays (B,n,A,m,k);
        if (m==0) return B[k-1];
        if (k==1) return min(A[0],B[0]);
        int i=min(k/2,m);
        int j=k-i;
        if (A[i-1]<B[j-1]) return findKthSortedArrays(A+i,m-i,B,n,k-i);
        else if (A[i-1]>B[j-1]) return findKthSortedArrays(A,m,B+j,n-j,k-j);
        else return A[i-1];
    }
};
};
void main(){}