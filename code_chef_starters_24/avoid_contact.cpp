#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y,z,r1,r2;
        cin>>x>>y;
        z=x-y;
        if(x==0){
            cout<<x<<endl;
        }else if(z!=0 && y!=0){
            cout<<((2*y)+z)<<endl;
        }else if(y==0 && z!=0){
            cout<<z<<endl;
        }else if(z==0 && y!=0){
            cout<<((2*y)-1)<<endl;
        }
    }
    return 0;
}
