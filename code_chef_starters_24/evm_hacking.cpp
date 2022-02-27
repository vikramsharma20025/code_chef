#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c,p,q,r,required_votes,acquired_votes,lackingby;
        cin>>a>>b>>c>>p>>q>>r;
        if((p+q+r)%2==0){
            required_votes = ((p+q+r)/2)+1;
        }else{
            required_votes = (p+q+r+1)/2;
        }
        acquired_votes = a+b+c;
        if(acquired_votes>=required_votes){
            cout<<"YES"<<endl;
        }else{
            lackingby = required_votes - acquired_votes;
            if(lackingby <= (p-a) || lackingby <= (q-b) || lackingby <= (r-c)){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
