#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int moneynow , pza, bgr;
        cin>>moneynow>>pza>>bgr;
        if(moneynow>pza && moneynow> bgr){
            cout<<"Nothing"<<endl;
        }else if(moneynow<pza && moneynow >bgr){
            cout<<"Pizza"<<endl;
        }else if(moneynow>pza && moneynow<bgr){
            cout<<"Burger"<<endl;
        }else if(moneynow<pza && moneynow<bgr){
            cout<<"Pizza"<<endl;
        }
    }
    return 0;
}
