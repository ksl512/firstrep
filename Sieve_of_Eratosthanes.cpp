#include<iostream>
using namespace std;

void primeSOE(int n){    //Sieve of Erotasthenes method to find all prime numbers upto n
    int arr[n+1]={0};
    for(int i=2;i<n+1;i++){
        if(arr[i]==0)
        {
            for(int j=i*i;j<n+1;j+=i){
                arr[j]=1;
            }
        }
    }
    for(int i=2;i<n+1;i++){
        if(arr[i]==0){
            cout<<i<<" ";
        }
    }
}
void primefactor(int n){    //Sieve of Erotasthenes method to find prime factorisation of a number...
    int arr[n+1]={0};
    for(int i=2;i<n+1;i++){
        arr[i]=i;
    }
    for(int i=2;i<n+1;i++){
        if(arr[i]==i);
        {
            for(int j=i*i;j<n+1;j+=i){
                if(arr[j]==j){
                    arr[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<arr[n]<<"x";
        n=n/arr[n];
    }
}

int main()
{
    primefactor(42);
    return 0;
}