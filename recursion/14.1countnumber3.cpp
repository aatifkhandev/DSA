//recursion from scratch
//code 14.1 - count of a  number
//another approach

#include <iostream>
using namespace std;
int countZeros(int n){

if(n<=9)
if(n==0)
return 1;
else{
    return 0;
}
int last = n%10;
int count =0;
if(last==0);
count =1;
return count+countZeros(n/10);


}

int main() {
    int n;
    cin >> n;
    cout << countzeros(n) << endl;
}
