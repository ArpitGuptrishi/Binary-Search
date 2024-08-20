#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={{0,1,1,1},{0,0,1,1},{1,1,1,1},{0,0,0,0}};
    int n=4;
    int row=-1;
    int maxOnes=-1;
    for(int i=0;i<n;i++){
        int low=0;
        int countOne=0;
        int high=n-1;
        int firstIdx=-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[i][mid]==1){
                if(mid==0){
                    firstIdx=mid;
                    break;
                }
                else if (arr[i][mid-1]==0){
                    firstIdx=mid;
                    break;
                }
                else{
                    high=mid-1;
                }
            }
            else if(arr[i][mid]<1){
                low=mid+1;
            }
            else high=mid-1;
        }
        if (firstIdx!=-1) countOne=n-firstIdx;
        cout<<countOne<<endl;
        if(maxOnes<countOne){
            maxOnes=countOne;
            row=i;
        }
    }
    cout<<row<<" "<<maxOnes;
}