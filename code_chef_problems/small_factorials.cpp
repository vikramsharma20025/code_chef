/*A tutorial for this problem is now available on our blog. Click here to read it.
You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!

Example
Sample input:
4
1
2
5
3
Sample output:

1
2
120
6*/
#include <iostream>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        int n,k,m;
        cin>>n;
        k=1,m=1;
        while(m<=n){
            k=k*m;
            m=m+1;
        }
        cout<<k<<endl;
    }
}