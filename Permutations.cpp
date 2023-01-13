#include <iostream>
#define l long

int main(){

    l n;
    std::cin >> n;
    if(n <=3 && n>1){
        std::cout << "NO SOLUTION";
    } if(n == 1){
        std::cout << 1;
    } else if(n == 4){
        std:: cout << 3  << " " << 1 << " " << 4 << " " << 2;
        }else if(n>4){
        l counter = 1;
        l val = 1;
        while(counter <=n){
            std::cout << val << " ";
            val+=2;
            if(val >n){
                val = 2;
            } 
            counter++;
        }
    }

    return 0;
}