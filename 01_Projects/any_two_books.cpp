/*
Problem statement (ninja 360 21 day challenge)
Sam want to read exactly ‘TARGET’ number of pages.

He has an array ‘BOOK’ containing the number of pages for ‘N’ books.

Return YES/NO, if it is possible for him to read any 2 books and he can meet his ‘TARGET’ number of pages.

Example:
Input: ‘N’ = 5, ‘TARGET’ = 5
‘BOOK’ = [4, 1, 2, 3, 1] 

Output: YES
Explanation:
Sam can buy 4 pages book and 1 page book.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5 5
4 1 2 3 1
Sample Output 1 :
YES
Explanation Of Sample Input 1:
Sam can buy 4 pages book and 1-page book.
Sample Input 2:
2 1
1 2
Sample Output 2 :
NO
Expected Time Complexity:
O( N ), Where N is the length of the array.
Constraints:
1  <= N <= 10^3
1 <= BOOK[i], TARGET <= 10^6
Time Limit: 1 sec

#include <iostream> 
#include <vector> 
#include <algorithm>
void merge(vector<int>&v,int left,int middle,int right){
    int i,j,k,n1=middle-left+1,n2=right-middle;
    vector<int>L(n1),R(n2);
    for(i=0;i<n1;i++){
        L[i]=v[i+left];
    }
    for(j=0;j<n2;j++){
        R[j]=v[j+1+middle];
    }
    i=0;j=0;k=left;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            v[k]=L[i];
            i++;
        }
        else{
            v[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        v[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        v[k]=R[j];
        j++;
        k++;
    }
}
bool binary_search(vector<int>v,int left ,int right,int target){
    if(left<=right){
        int middle = left+(right-left)/2;
        if(v[middle]==target){
            return true;
        }
        else if(v[middle]>target){
            return binary_search(v, left, middle-1,  target);
        }
        else if (v[middle]<target){
            return binary_search(v, middle+1, right, target);
        }
    }
    return false;
}
void sort(vector<int>&v,int left,int right){
    if(left<right){
        int middle=left+(right-left)/2;
        sort(v,left,middle);
        sort(v,middle+1,right);
        merge(v,left,middle,right);
    }
}
string read(int n, vector<int> book, int target){
    sort(book,0,n-1);
    for(int i=1;i<100000;i++){
        bool found1 = binary_search(book,0,n-1,target-i);
        bool found2 = binary_search(book,0,n-1,i);
        if(found1&&found2){
            return "YES";
            break;
        }
    }
    return "NO";
}
*/