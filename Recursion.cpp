#include<iostream>
#include<string>
using namespace std;

int home(int n){
    //base case
    if(n==1){
        return 1;
    }
    //processing
    cout<<n<<endl;

    //recursive relation
    return home(n-1);
}

int climbstep(int n){
    //He is in 0th step...

    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }

    return climbstep(n-1)+climbstep(n-2);
}

void speakno(int n, string arr){
    //base case
    if(n<=0){
        return ;
    }

    //recursive call
    int d=n%10;
    speakno(n/10,arr);
    
    cout<<arr[d]<<" ";

}

void revstr_rec(char s[],int n){
    if(n<0){
        return ;
    }

    cout<<s[n];
    revstr_rec(s,n-1);
}

bool recpalin(string s,int i,int j){
    //base case
    if(i>j){
        return true;
    }

    if(s[i]==s[j]){
        //Recursion call
        return recpalin(s,i+1,j-1);
    }
    return false;
}

string dupl(string arr,int i){

    if(i==arr.length()){
        return "";
    }

    char a=arr[i];
    cout<<a;
    while(arr[i]==a){
        i++;
    }

    return dupl(arr,i);
}

int main()
{
    string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    //speakno(452,arr);
    //char s[]="Lakshman";
    //revstr_rec(s,sizeof(s)-1);
    //string a="masam";
    //if(recpalin(a,0,a.length()-1)){
    //    cout<<"It is a Palindrome.";
    //}
    //else{
    //    cout<<"Not a Palindrome.";
    //}
    string a="aahhhgggaaa";
    dupl(a,0);
    
    return 0;
}