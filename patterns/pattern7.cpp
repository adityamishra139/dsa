#include<iostream>
using namespace std;
void pattern7(int n){
    for(int i=0;i<n;i++){
        //space
        for (int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //star
        for (int j=0;j<i*2+1;j++){
            cout<<"*";
        }
        //space
        for (int j=0;j<n-i-1;j++){
            cout<<" ";

    }
    cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter number of iteratons:";
    cin>> n;
    pattern7(n);

}