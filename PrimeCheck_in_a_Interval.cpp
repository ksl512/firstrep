#include<iostream>
using namespace std;

bool isprime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isprime(i)){
            cout<<i<<" is a prime number."<<endl;
        }
    }
    return 0;
}