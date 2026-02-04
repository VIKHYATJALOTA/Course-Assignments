    #include<iostream>
    using namespace std ;
    int main(){
        long long  n ;
        cin>>n;
        long long reversed_n = 0;
        while(n>0){
            int lst_dgt =  n%10;
            reversed_n = (reversed_n * 10) + lst_dgt;
            n = n / 10;
            }
        cout<<reversed_n;
    }