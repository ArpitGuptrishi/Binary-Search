#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={0,1,1,0,0,1};
    int n=6;
    int target=1;
    int low=0;
    int high=n-1;
    sort(arr,arr+n);
    while(low<=high){
        int mid= low+(high-low)/2;
        if(arr[mid]==target){
            if(arr[mid-1]==target){
                high=mid-1;
            }
            else if(arr[mid-1]!=target){
                int count=0;
                for(int i=mid;i<n;i++){
                    count++;
                }
                cout<<count;
                break;
            }
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
    }

}