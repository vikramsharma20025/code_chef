#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b && a>c && a>50){
            cout<<"a"<<endl;
        }else if(b>a && b>c && b>50){
            cout<<"b"<<endl;
        }else if(c>a && c>b && c>50){
            cout<<"c"<<endl;
        }else{
            cout<<"nota"<<endl;
        }
    }
    return 0;
}
