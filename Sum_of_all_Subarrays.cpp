#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,4,5,6,8,9};
    for(int i=0;i<6;i++){
        int sum=0;
        for(int j=i;j<6;j++){
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}