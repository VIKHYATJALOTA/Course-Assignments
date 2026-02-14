#include<iostream>
using namespace std;

void print(int n){
 for (int i = n;i>=1;i--){
    if(n%i==0){
        cout<<i<<" ";
    }
 }
}

int main(){
    int n;
    cin>>n;
    print(n);

}