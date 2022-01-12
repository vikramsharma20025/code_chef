#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && c<b){
            cout<<b<<endl;
        }else if(a>c && b<c){
            cout<<c<<endl;
        }else if(c>a && b<a){
            cout<<a<<endl;
        }else if(a<b && c>b){
            cout<<b<<endl;
        }else if(a<c && b>c){
            cout<<c<<endl;
        }else if(c<a && b>a){
            cout<<a<<endl;
        }
    }
}
