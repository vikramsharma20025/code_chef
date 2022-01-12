#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int newnumber=n%10;
        n=n/10;
        while(n>=1){
            newnumber = (newnumber*10)+(n%10);
            n=n/10;
        }
        cout<<newnumber<<endl;
    }
}
