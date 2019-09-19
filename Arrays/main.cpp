#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

void ArrSum(int *p, int arrsize)
{
    int initial_sum = 0;
    cout << "Sum of array is: "<< accumulate(p, p+arrsize, initial_sum)<<endl;

}
 void ArrSort(int *p, int arrsize)
 {
     sort(p,p+arrsize);
 }
 void Display(int *p, int arrsize)
 {
    for(int i = 0; i<arrsize; i++){
    cout<<*(p+i)<<" ";
   }
 }
 bool compareInterval(int i,int j)
 {
     if(i<j){
        return false;
     }
     else{
        return true;
     }
 }
int main()
{
   int arr[] = {90, 20, 30, 40, 50, 60};
   int sizeofarray = sizeof(arr)/sizeof(arr[0]);
   ArrSum(arr,sizeofarray);
   ArrSort(arr,sizeofarray);
   sort(arr, arr+sizeofarray, compareInterval);
   Display(arr,sizeofarray);
   return 0;
}
