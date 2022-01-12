#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int first=n%10;
        int k=n;
        while(k >= 10){

                    k=k/10;

        }
        cout<<first+k<<endl;
    }
}
