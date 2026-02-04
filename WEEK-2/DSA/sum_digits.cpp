#include<iostream>
using namespace std;

int main(){
    long long n;
    long long sum = 0;
    cin>>n;
   while(n>0){
      long long  digit = n%10;
      sum+=digit;
      n=n/10;
   }
   cout<<sum; 
}