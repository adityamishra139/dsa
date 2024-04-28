#include<iostream>
using namespace std;
void pattern2(int n){
    for(int i=1;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<i<<" ";
        }
    cout<< endl;
    }

}
int main(){
    int n;
    cout<<"enter number of iteratons:";
    cin>> n;
    pattern2(n);

}