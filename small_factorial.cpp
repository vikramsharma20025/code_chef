#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        long long int factorialnum=1;
        for(int k=1;k<=n;k++){
            factorialnum = factorialnum*k;
        }
        cout<<factorialnum<<endl;

    }
}
