#include<iostream>

int main(){

    int n;
    std::cin >> n;
    long long sum{0};

    for(int i =0; i<n-1; i++){
        long a;
        std::cin >> a;
        sum += a;
    }

    std::cout << n*(n+1)/2 - sum ;

    return 0;
}