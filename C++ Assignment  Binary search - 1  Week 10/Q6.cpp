#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Enter a Number:";
    int x;
    cin>>x;
    vector <int> arr;
    int counter=1;
    while(x>=0){
        if(counter<x) arr.push_back(counter);
        else{
            arr.push_back(x);
        }
        x-=counter;
        counter++;
    }
    int asize=arr.size();
    int lo=0;
    int hi=asize-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]<arr[mid+1]){
            lo=mid+1;
        }
        else if(arr[mid]>=arr[mid+1]){
            cout<<arr[mid];
            break;
        }
    }
}