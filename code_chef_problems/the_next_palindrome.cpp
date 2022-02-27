/*A positive integer is called a palindrome if its representation in the decimal system is the same when read from left to right and from right to left. For a given positive integer K of not more than 1000000 digits, write the value of the smallest palindrome larger than K to output. Numbers are always displayed without leading zeros.

Input
The first line contains integer t, the number of test cases. Followed by t lines containing integers K.

Output
For each K, output the smallest palindrome larger than K.

Example
Input:
2
808
2133
Output:
818
2222
Warning: large Input/Output data, be careful with certain languages*/
#include <iostream>
using namespace std;
bool check_palindrome(int n){
    int rev = 0, remainder, num;
    num =n;

    // reversed integer is stored in rev
  for(num = n ; n!=0 ; n/=10)
{
    remainder = n%10;
    rev = rev*10 + remainder;
}
// if else shortcuts
    if(rev == num){
        return true;
    }else{
        return false;
    }
    return true;
}
int main(){
    int t,i;
    cin>>t;
    for(i=0;i<t;i++){
        int n;
        cin>>n;
        
    }
}
