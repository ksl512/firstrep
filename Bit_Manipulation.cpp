#include<iostream>
using namespace std;

int getbit(int n,int pos){
    if((n & 1<<pos)==0){
        return 0;
    }
    else{
        return 1;
    }
}

int setbit(int n,int pos){    //changing the positioned bit to 1...
    return (n | 1<<pos);
}
int clearbit(int n,int pos){
   int d=~(1<<pos);
   return (n & d);    
}

int update(int n,int pos,int key){
    //we want to clear it & set it to 1(if the kwy value is 1)
    int s=(n & ~(1<<pos));
    if(key==1){
        return(s | 1<<pos);
    }
    return(s);
}
int updatenew(int n,int pos,int key){
    if(key==0){
        int d=~(1<<pos);
        return (n & d);
    }
    else{
        return (n | (1<<pos));
    }
}

int numberofonesnew(int n){
    int count=0,i=7;
    while(i){
        int d=(n & (1<<i));
        if(d){
            count++;
        }
        i--;
    }
    return count;
}

int numberofones(int n){
    int count=0;
    while(n){
        n=n & n-1;
        count++;
    }
    return count;
}
int unique(int arr[],int n){
    
}


int main()
{
    //cout<<updatenew(5,1,1)<<endl;
    //cout<<update(5,1,1)<<endl;
    //cout<<numberofones(15)<<endl;
    primeSOE(50);
    return 0;
}