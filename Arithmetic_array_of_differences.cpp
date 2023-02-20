#include<iostream>
using namespace std;

int maxfind(int arr[],int n){
    int maxr=0;
    for(int i=0;i<n;i++){
        maxr=max(arr[i],maxr);
    }
    return maxr;
}
int finder(int arr[],int n){
    int count[n];
    for(int i=0;i<n;i++){
        count[i]=0;
    }
    int no=1,k=0;
    for(int i=0;i<n-2;i++){
        if(arr[i+1]-arr[i]==arr[i+2]-arr[i+1]){
            no++;
        }
        else{
            count[k]=no;
            k++;
            no=1;
        }
    }
    int f=maxfind(count,n);
    return f;
}

int main()
{
    int arr[]={11,65,6,7,6,5,8};
    cout<<finder(arr,7)+1<<endl;
    return 0;
}