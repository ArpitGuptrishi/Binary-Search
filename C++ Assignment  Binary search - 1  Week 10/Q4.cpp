#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,4,5};
    int n=6;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid){
            if(arr[mid]==arr[mid-1]){
                cout<<arr[mid];
                break;
            }
            else if(arr[mid]!=arr[mid-1]){
                hi=mid-1;
            }
        }
        else if(arr[mid]>mid){
            lo=mid+1;
        }
        
    }
    
}