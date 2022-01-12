#include <iostream>
using namespace std;

void bubble_sort(int data[],int size){
    for(int step=0;step<size-1;++step){
        for(int i=0;i<size-step-1;++i){
            if(data[i]>data[i+1]){
                int temp = data[i];
                data[i]=data[i+1];
                data[i+1]=temp;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    int thisarray[t];
    for(int i=0;i<t;i++){
        cin>>thisarray[i];
    }
    bubble_sort(thisarray,t);
    for(int i=0; i<t;i++){
        cout<<thisarray[i]<<endl;
    }
}

