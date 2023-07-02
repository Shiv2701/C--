#include<iostream>
using namespace std;

int main(){
    int a ;
    cin>>a;
    int i = 2;
    bool j = false;
    while(a/2>=i){
        if(a%i==0){
            cout<<"Not a prime number\n";
            j = true;
            break;
        }
        i++;
    }
    if(!j){
        cout<<"prime number\n";
        return 0;
    }
}