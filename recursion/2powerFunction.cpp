//recursion from scratch
//code 1 - normal power function x^n
#include<iostream>
using namespace std;

int power(int x,int n){
    if(n==0){
        return 1;
    }
  
    int smallerProblem = power(x,n-1);
    int biggerProblem = x*smallerProblem;
    return biggerProblem;

  
}

int main(){
int x,n;
cin>>x>>n;
int ans = power(x,n);
cout<<ans<<endl;
}