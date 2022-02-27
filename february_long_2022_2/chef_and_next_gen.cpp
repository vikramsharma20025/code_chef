#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if((x*y)>=(a*b)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
