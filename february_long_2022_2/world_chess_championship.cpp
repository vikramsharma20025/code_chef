#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,c=0,n=0;
        cin>>x;
        string str_check;
        cin>>str_check;
        for(int k=0;k<14;k++){
            if(str_check[k]=='D'){
                c+=1;
                n+=1;
            }else if(str_check[k]=='C'){
                c+=2;
            }else if(str_check[k]=='N'){
                n+=2;
            }
        }
        if(c<n){
            cout<<40*x<<endl;
        }else if(c>n){
            cout<<60*x<<endl;
        }else if(c==n){
            cout<<55*x<<endl;
        }
    }
    return 0;
}
