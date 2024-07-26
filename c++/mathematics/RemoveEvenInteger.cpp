#include <iostream>
#include <vector>

class RemoveEvenInteger {
    public:
        void printArray(std::vector<int> arr) {
            for (int i = 0; i < arr.size(); i++){
                std::cout<< arr.at(i) << " ";
            }
            std::cout << std::endl;
        }
        std::vector<int> removeEven(std::vector<int> arr) {
            int oddCount = 0;
            for(int i = 0; i < arr.size(); i++) {
                if (arr.at(i) % 2 != 0) {
                    oddCount++; 
                }
            }
            std::vector<int> result;
            for (int i = 0; i < arr.size(); i++){
                if(arr.at(i) % 2 != 0) {
                    result.push_back(arr.at(i));
                }
            }
            return result;
        }
};

int main() {
    std::vector<int> arr = {3, 2, 4, 7, 10, 6, 5};
    RemoveEvenInteger cla;
    cla.printArray(arr);

    std::vector<int> result = cla.removeEven(arr);
    cla.printArray(result);

    return 0;
}
