#include <iostream>
#include <cmath>

int main(){

    int n;
    std::cin >> n;

    int count_2{0}, count_5{0};
    int a,b;
    int e = 1;
    do{
       a = n/pow(2,e);
       b = n/pow(5,e);
       e++;
       count_2 +=a;
       count_5 +=b;
    } while(a !=0 && b!= 0);

    std::cout << std::min(count_2,count_5);
    return 0;
}