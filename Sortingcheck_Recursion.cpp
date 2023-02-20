#include<iostream>
using namespace std;

bool sorting(int arr[],int n){

    if(n==1){
        return true;
    }
    
    if(arr[0]<arr[1] && sorting(arr+1,n-1)){
        return true;
    }
    return false;
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    cout<<sorting(arr,6)<<endl;
    return 0;
}