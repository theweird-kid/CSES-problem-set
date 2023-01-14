#include <iostream>
#define l long

int main(){
    l n;
    std::cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        l var;
        std::cin >> var;
        arr[i] = var;
    }
    l counter{0};

    for(int k =1; k<n; k++){
        while(arr[k]<arr[k-1]){
            arr[k]+=1;
            counter+=1;
        }
    }

    std::cout << counter;
    return 0;
}
