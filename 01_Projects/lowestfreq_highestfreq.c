#include<stdio.h>
void merge(int v[], int l, int m, int r){
    int i, j, k,n1 = m - l + 1,n2 = r - m,L[n1], R[n2];
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
void mergeSort(int v[], int l, int r){
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(v, l, m);
        mergeSort(v, m + 1, r);
        merge(v, l, m, r);
    }
}
int* getFrequencies(int *v) {
    int *answer;
    int size=sizeof(v)/sizeof(v[0]);
    mergeSort(v,0,size-1);
    int smallest=v[0],largest=v[0],highestfreq=0,lowestfreq=size,counter=1;
    for(int x=1;x<size;x++){
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
        largest = v[size-1]; 
    } 
    if (counter < lowestfreq) { 
        lowestfreq = counter; 
        smallest = v[size-1]; 
    }
    answer[0]=largest;
    answer[1]=smallest;
    printf("%d\n",answer[0]);
    printf("%d\n",answer[1]);
    return answer;
}
int main(){
    int array[]={10,1,5,5,2,2,5,10,1,4};
    int *ptr=getFrequencies(array);
    printf("%d",ptr[0]);
    printf("%d",ptr[1]);
}
// void merge(std::vector<int>& v, int l, int m, int r){
//     int i, j, k,n1 = m - l + 1,n2 = r - m;
//     std::vector<int>L(n1), R(n2);
//     for (i = 0; i < n1; i++)
//         L[i] = v[l + i];
//     for (j = 0; j < n2; j++)
//         R[j] = v[m + 1 + j];
//     i = 0,j = 0,k = l;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             v[k] = L[i];
//             i++;
//         }
//         else {
//             v[k] = R[j];
//             j++;
//         }
//         k++;
//     }
//     while (i < n1) {
//         v[k] = L[i];
//         i++;
//         k++;
//     }
//     while (j < n2) {
//         v[k] = R[j];
//         j++;
//         k++;
//     }
// }
// void mergeSort(std::vector<int>& v, int l, int r){
//     if (l < r) {
//         int m = l + (r - l) / 2;
//         mergeSort(v, l, m);
//         mergeSort(v, m + 1, r);
//         merge(v, l, m, r);
//     }
// }
// std::vector<int> getFrequencies(std::vector<int>& v) {
//     std::vector <int>answer(2);
//     mergeSort(v,0,v.size()-1);
//     int smallest=v[0],largest=v[0],highestfreq=0,lowestfreq=v.size(),counter=1;
//     for(int x=1;x<v.size();x++){
//         if(v[x]==v[x-1]){
//             counter++;
//         }
//         else{
//             if(counter>highestfreq){
//                 highestfreq=counter;
//                 largest=v[x-1];
//             }
//             if(counter<lowestfreq){
//                 lowestfreq=counter;
//                 smallest=v[x-1];
//             }
//             counter=1;
//         }
//     }
//     if (counter > highestfreq) { 
//         highestfreq = counter; 
//         largest = v.back(); 
//     } 
//     if (counter < lowestfreq) { 
//         lowestfreq = counter; 
//         smallest = v.back(); 
//     }
//     answer[0]=largest;
//     answer[1]=smallest;
//     return answer;
// }