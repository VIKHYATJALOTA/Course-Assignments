#include<iostream>
using namespace std;

int main(){
    long long num;
    int raise;
    long long result=1;
    cin>>num>>raise;
    for (int i =1;i<=raise;i++){
        result*=num;
    }

cout<<result;
}
