#include <iostream>
#include <set>

int main(){
 
    int n;
    std::cin >> n;

    std::set<int> arr;
    for(int i =0; i<n; i++){
        int num;
        std::cin >> num;
        arr.insert(num);
    }

    std::cout << arr.size();

    return 0;
}
