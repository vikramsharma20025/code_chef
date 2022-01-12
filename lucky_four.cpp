#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int numberoffour = 0;
        while(n>=1){
            if(n%10==4){
                numberoffour+=1;
            }
            n/=10;
        }
        cout<<numberoffour<<endl;
    }
}
