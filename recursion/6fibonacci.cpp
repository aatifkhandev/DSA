//recursion from scratch
//code 6 - fibonacci number
#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    /*int smallerProblem = fibonacci(n-1);
    int smallerProblem2 = fibonacci(n-2);
    return smallerProblem+smallerProblem2;*/

    return fibonacci(n-1)+fibonacci(n-2);
}


int main(){
    int n;
    cin>>n;
    int ans  = fibonacci(n);
    cout<<ans<<endl;
}
