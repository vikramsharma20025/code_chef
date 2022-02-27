#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,count_1=0,count_0=0;
        cin>>n;
        string binary_string_element;
        cin>>binary_string_element;
        for(int k=0;k<=n/2;k++){
            if(binary_string_element[k]=='0'){
                count_0++;
            }else if(binary_string_element[k]=='1'){
                count_1++;
            }
        }
        if(n%2==0 && count_1 == count_0){
            cout<<"YES"<<endl;
        }else if(n%2!=0 && binary_string_element[(n+1)/2] != binary_string_element[n/2] && binary_string_element[(n+1)/2] != binary_string_element[(n+2)/2] && (count_1==count_0+1||count_0==count_1+1)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
