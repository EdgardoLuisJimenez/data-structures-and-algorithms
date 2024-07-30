#include <iostream>
#include <vector>
#include <stdexcept>

class MinArray {
    public:
        int findMinimum(std::vector<int> arr){
            //edge
            if (arr.empty()){
                throw std::runtime_error("Invalid input");
            }

            int min = arr.at(0);
            for (int i = 1; i < arr.size(); i++) {
                if (arr.at(i) < min){
                    min = arr.at(i);
                }
            }
            return min;
        }
};

int main() {
    std::vector<int> arr = {5, 9, 3, 15, 1, 2};
    MinArray ma;
    std::cout << ma.findMinimum(arr) << std::endl;
    return 0;
}
