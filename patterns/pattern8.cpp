#include<iostream>
using namespace std;
void pattern8(int n){
    for(int i=0;i<n;i++){
        //space
        for (int j=0;j<i;j++){
            cout<<" ";
        }
        //star
        for (int j=0;j<((n-i)*2)-1;j++){
            cout<<"*";
        }
        //space
        for (int j=0;j<i;j++){
            cout<<" ";

    }
    cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter number of iteratons:";
    cin>> n;
    pattern8(n);

}