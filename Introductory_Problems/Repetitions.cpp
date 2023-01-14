#include<iostream>
#include<string>
#define l long

int main(){
    
    std::string str;
    l counter =1;
    getline(std::cin, str);
    l n = str.size();
    l sum = 1;

    for(int i = 1; i<n;i++){
        if(str[i]!=str[i-1]){
            counter = std::max(sum,counter);
            sum =0;
        }     
        sum++;
    }
    counter = std::max(sum,counter);
    std::cout << counter << "\n";

    return 0;
}
