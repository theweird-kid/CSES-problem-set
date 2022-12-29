#include<iostream>
#define ll long
int main(){

    ll n;
    std::cin >> n;
    ll sum{0};

    for(int i =0; i<n-1; i++){
        ll a;
        std::cin >> a;
        sum += a;
    }

    std::cout << n*(n+1)/2 - sum ;

    return 0;
}
