#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n ;i++){
        for (int j = 0; j < n-i+1; j++)
        {
            cout<<" ";
        }
        int k = 1 ;
        for(int j = 0;j<i; j++,k++){
            cout<<k;
        }
        k = k-2;
        for(int j = 1;j<i;j++,k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}