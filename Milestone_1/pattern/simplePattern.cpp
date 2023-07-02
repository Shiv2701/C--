#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int i = 1 ;
    while(a>=i){
        int j = 0;
        while(i>j){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}