/*Problem statement (ninja 360 21 day challenge)
Given a non-negative number represented as an array of digits, you have to add 1 to the number, i.e, increment the given number by one.

The digits are stored such that the most significant digit is at the starting of the array and the least significant digit is at the end of the array.

For Example
If the given array is {1,5,2}, the returned array should be {1,5,3}.
Note
Input array can contain leading zeros, but the output array should not contain any leading zeros (even if the input array contains leading zeroes).
For Example: 
If the given array is {0,2}, the returned array should be {3}.
Detailed explanation ( Input/output format, Notes, Images )
Constraints
1 <= T <= 10
1 <= N <= 5 * 10^4
0 <= Arr[i] <= 9

Where Arr[i] is the i-th digit in the number.
Sample Input 1
3
3
1 2 3
2
9 9
1
4
Sample Output 1
1 2 4
1 0 0
5
Explanation For Sample Input 1
In the 1st test case, the number is 123 after adding 1 number becomes 124, hence the output will be {1,2,4}.

In the 2nd test case, the number is 99 after adding 1 number becomes 100, hence the output will be {1,0,0}.

In the 3rd test case, the number is 4 after adding 1 number becomes 5, hence the output will be {5}.
Sample Input 2
3
4
2 4 6 8 
1
0
2
0 2
Sample Output 2
2 4 6 9
1
3

#include <bits/stdc++.h> 
std::vector<int> addOneToNumber(std::vector<int> arr) { 
    while((!arr.empty() && arr.front()==0)&&arr.size()>1){
        arr.erase(arr.begin()); 
    }
    int n = arr.size(); 
    for (int i = n -1; i >= 0; i--) { 
        if (arr[i] < 9) { 
            arr[i]++; 
            return arr; 
        } 
        arr[i] = 0; 
    } 
    arr.insert(arr.begin(), 1); 
    return arr; 
}
*/