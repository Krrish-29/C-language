/*
Problem statement (ninja 360 21 day challenge)
Given an array 'v' of 'n' numbers.
Your task is to find and return the highest and lowest frequency elements.
If there are multiple elements that have the highest frequency or lowest frequency, pick the smallest element.
Example:
Input: ‘n' = 6, 'v' = [1, 2, 3, 1, 1, 4]
Output: 1 2
Explanation: The element having the highest frequency is '1', and the frequency is 3. The elements with the lowest frequencies are '2', '3', and '4'. Since we need to pick the smallest element, we pick '2'. Hence we return [1, 2].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
6
1 2 3 1 1 4
Sample Output 1 :
1 2
Sample Explanation 1:
Input: ‘n' = 6, 'v' = [1, 2, 3, 1, 1, 4]
Output: 1 2
Explanation: The element having the highest frequency is '1', and the frequency is 3. The elements with the lowest frequencies are '2', '3', and '4'. Since we need to pick the smallest element, we pick '2'. Hence we return [1, 2].
Sample Input 2 :
6
10 10 10 3 3 3
Sample Output 2 :
3 3
Sample Explanation 2:
Input: ‘n' = 6, 'v' = [10, 10, 10, 3, 3, 3]
Output: 3 3
Explanation: Since the frequency of '3' and '10' is 3. Therefore, the element with the maximum and minimum frequency is '3'.
Expected Time Complexity :
The expected time complexity is O(n), where n is the size of the array.
Expected Space Complexity :
The expected time complexity is O(n), where n is the size of the array.
Constraints :
2 <=  n <= 10^4
1 <= v[i] <= 10^9
There are at least two distinct elements in the array.
Time Limit: 1 sec 

void merge(std::vector<int>& v, int l, int m, int r){
    int i, j, k,n1 = m - l + 1,n2 = r - m;
    std::vector<int>L(n1), R(n2);
    for (i = 0; i < n1; i++)
        L[i] = v[l + i];
    for (j = 0; j < n2; j++)
        R[j] = v[m + 1 + j];
    i = 0,j = 0,k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            v[k] = L[i];
            i++;
        }
        else {
            v[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        v[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        v[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(std::vector<int>& v, int l, int r){
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(v, l, m);
        mergeSort(v, m + 1, r);
        merge(v, l, m, r);
    }
}
std::vector<int> getFrequencies(std::vector<int>& v) {
    std::vector <int>answer(2);
    mergeSort(v,0,v.size()-1);
    int smallest=v[0],largest=v[0],highestfreq=0,lowestfreq=v.size(),counter=1;
    for(int x=1;x<v.size();x++){
        if(v[x]==v[x-1]){
            counter++;
        }
        else{
            if(counter>highestfreq){
                highestfreq=counter;
                largest=v[x-1];
            }
            if(counter<lowestfreq){
                lowestfreq=counter;
                smallest=v[x-1];
            }
            counter=1;
        }
    }
    if (counter > highestfreq) { 
        highestfreq = counter; 
        largest = v.back(); 
    } 
    if (counter < lowestfreq) { 
        lowestfreq = counter; 
        smallest = v.back(); 
    }
    answer[0]=largest;
    answer[1]=smallest;
    return answer;
}
*/