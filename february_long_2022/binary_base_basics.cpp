#include <iostream>

using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k,count_if_k=0;
        cin>>n>>k;
        int size_used = static_cast<int>(n/2);
        cout<<size_used<<endl;
        string stringed;
        cin>>stringed;
        cout<<stringed<<endl;
        for(int m=0;m<n/2;m++){
            if(stringed[m]!=stringed[n-m-1]){
                count_if_k++;
                cout<<count_if_k<<endl;
            }

        }
        if(count_if_k==k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}




/*
if(n%2==0){
            for(int p=0;p<size_used;p++){
                cin>>stringed[p][0];
                cout<<stringed[p][0];
            }
            for(int p=size_used;p>-1;p--){
                scanf("%c",&stringed[p][1]);
            }
            for(int m =0;m<size_used;m++){
                if(stringed[m][0] != stringed[m][1]){
                    count_if_k++;
                }
            }
        }else{
            for(int p=0;p<size_used;p++){
                scanf("%c",&stringed[p][0]);
            }
            char ch = getche();
            for(int p=size_used;p>-1;p--){
                scanf("%c",&stringed[p][1]);
            }
            for(int m =0;m<size_used;m++){
                if(stringed[m][0] != stringed[m][1]){
                    count_if_k++;
                }
            }
        }
        */
