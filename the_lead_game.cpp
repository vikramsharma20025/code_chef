#include <iostream>
using namespace std;
int main(){
    int t;
    int leadplayer,leadbynum=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        if((a>b) && ((a-b)>leadbynum)){
            leadplayer = 1;
            leadbynum = a-b;
        }else if((a<b) && ((b-a)>leadbynum)){
            leadplayer = 2;
            leadbynum = b-a;
        }
    }
    cout<<leadplayer<<" "<<leadbynum;
}
