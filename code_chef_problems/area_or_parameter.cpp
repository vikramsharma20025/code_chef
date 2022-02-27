/*Write a program to obtain length (L) and breadth (B) of a rectangle and check whether its area is greater or perimeter is greater or both are equal.

Input:
First line will contain the length (L) of the rectangle.
Second line will contain the breadth (B) of the rectangle.
Output:
Output 2 lines.

In the first line print "Area" if area is greater otherwise print "Peri" and if they are equal print "Eq".(Without quotes).

In the second line print the calculated area or perimeter (whichever is greater or anyone if it is equal).

Constraints
1≤L≤1000
1≤B≤1000
Sample Input:
1
2
Sample Output:
Peri
6
EXPLANATION:
Area = 1 * 2 = 2

Peri = 2(1 + 2) = 6

Since Perimeter is greater than Area, hence the output is

Peri

6*/
#include <iostream>
using namespace std;
int main(){
    int l,b;
    cin>>l;
    cin>>b;
    int area = l*b;
    int peri = 2*(l+b);
    if(area>peri){
        cout<<"Area"<<endl;
        cout<<area<<endl;
    }else if(peri>area){
        cout<<"Peri"<<endl;
        cout<<peri<<endl;
    }else if(area==peri){
        cout<<"Eq"<<endl;
        cout<<area<<endl;
    }

}