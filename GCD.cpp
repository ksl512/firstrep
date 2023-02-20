#include<iostream>
using namespace std;
int gcd(int a, int b){
    int d=0;
    do{
        d=a%b;
        a=b;
        b=d;
    }while(d!=0);
    return a;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}