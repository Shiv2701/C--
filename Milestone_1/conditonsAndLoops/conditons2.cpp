#include<Iostream>
using namespace std;

int main(){
    int a ;
    cin>>a;
    if(a>500){
        if(a>1000){
            cout<<"party hard";
        }else{
            cout<<"party";
        }
    }else if(a>200){
        cout<<"fast food";
    }else{
        cout<<"Mess";
    }
    return 0;
}