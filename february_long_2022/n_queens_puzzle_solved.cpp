#include <iostream>
#include <cmath>
using namespace std;
int round_off(float k){
    int intpart = static_cast<int>(k);
    float floatpart = k-intpart;
    if(floatpart<0.5){
        return intpart;
    }else{
        return intpart +1;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        float n;
        cin>>n;
        cout<<round_off(pow((0.143 * n),n))<<endl;
    }
    return 0;
}
