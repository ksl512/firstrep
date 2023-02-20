#include<iostream>
using namespace std;

int binarysearch(int start,int last,int arr[],int n,int target){
    int mid=(start+last)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
        binarysearch(0,mid,arr,n,target);
    }
    else if(arr[mid]<target){
        binarysearch(mid+1,n,arr,n,target);
    }
}

int main()
{
    int n,tar;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>tar;
    int d=binarysearch(0,n,arr,n,tar);
    cout<<d<<endl;
    return 0;
}