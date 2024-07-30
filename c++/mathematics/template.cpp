#include <iostream>
#include <vector>

class ReverseArray {
    public:
        static void printArray(std::vector<int> arr){
            for (int i = 0; i < arr.size(); i++){
                std::cout << arr.at(i) << " ";
            }
            std::cout << std::endl;
        }
};
int main(){
    std::vector<int> numbers = {2, 11, 5, 10, 7, 8};
    ReverseArray::printArray(numbers)

    return 0;
}
