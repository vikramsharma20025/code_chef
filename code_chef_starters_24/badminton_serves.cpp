#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int p;
        cin>>p;
        if(p%2==0){
            cout<<((p/2)+1)<<endl;
        }else{
            cout<<(((p-1)/2)+1)<<endl;
        }
    }
    return 0;
}
