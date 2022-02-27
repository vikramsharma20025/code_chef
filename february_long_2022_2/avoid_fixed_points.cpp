#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,a,counting=0,index_counting=0;
        cin>>n;
        for(int k=0;k<n;k++){
            cin>>a;
            if(a==(k+1+index_counting)){
                counting++;
                index_counting++;
            }
        }
        cout<<counting<<endl;
    }
    return 0;
}
