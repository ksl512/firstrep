#include<iostream>
using namespace std;
int record(int arr[],int n){
    int g=0;
    for(int i=0;i<n;i++){
        int d=arr[i],e=0;
        for(int j=0;j<i;j++){
            if(arr[j]>d){
                e=1;
                break;
            }
        }
        if(e==0){
            if(arr[i+1]<arr[i] || i==n){
                g++;
                
            }
        }
    }
    return g;
}

int main()
{
    int arr[]={1,2,0,7,2,9,2,2};
    cout<<"No of Record breaking days are:"<<record(arr,8)<<endl;
    return 0;
}