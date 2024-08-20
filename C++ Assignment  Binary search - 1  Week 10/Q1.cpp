#include<iostream>
#include<algorithm>
using namespace std ;
int main(){
    int arr[]={1,2,3,3,4,4,4,5};
    int x=4;
    int n=8;
    int low=0;
    int high=n-1;
    sort(arr,arr+n);
    bool flag =false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            if(arr[mid+1]==x){
                low=mid+1;
            }
            else if(arr[mid+1]!=x){
                cout<<mid<<endl;
                flag=true;
                break;
            }
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else if(arr[mid]>x){
            high=mid-1;
        }
        
    }
    if(flag==false){
        cout<<-1;
    }
}