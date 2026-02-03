#include<iostream>
using namespace std;

int main () {
    int number,num;
    cin>>number;
    int p=0,n=0,e=0,o=0;
    for (int i = 1; i<=number;i++){
    cin>>num;
       if(num%2 == 0 and num > 0){
        p++;e++;
       }
       else if(num%2 == 0 and num < 0){
        n++;e++;
       }
       else if(num%2 != 0 and num > 0){
        p++;o++;
       }
       else if(num%2 != 0 and num < 0){
        n++;o++;
    }
    else{
        e++;
    } 
}
cout<<p<<endl<<n<<endl<<e<<endl<<o;
}