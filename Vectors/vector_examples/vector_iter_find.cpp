#include<iostream>
#include<vector>
#include<algorithm>

int main(void){
    std::vector<int> vec = {1,2,3,4,5,6};
    std::vector<int>::iterator it = std::find(vec.begin(), vec.end(), 4);
    if (it != vec.end()){
        std::cout << "Element found in the range " << std::distance(vec.begin(), it)<< std::endl;
    }
    else{
        std::cout << "Element not found"<< std::endl;
    }
    return (0);
}
