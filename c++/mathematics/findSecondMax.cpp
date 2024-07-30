#include <iostream>
#include <vector>
#include <climits>

class findSecondMax {
    public:
        static void printArray(std::vector<int> arr){
            for (int i = 0; i < arr.size(); i++){
                std::cout << arr.at(i) << " ";
            }
            std::cout << std::endl;
        }
        static int findSecondMaxMethod(std::vector<int> arr){
            int max = INT_MIN;
            int secondMax = INT_MIN;
            
            for (int i = 0; i < arr.size(); i++){
                if (arr.at(i) > max) {
                    secondMax = max;
                    max = arr.at(i);
                } else if (arr.at(i) > secondMax && arr.at(i) != max) {
                    secondMax = arr.at(i);
                }
            }
            return secondMax;
        }
};
int main(){
    std::vector<int> numbers = {13, 34, 2, 34, 33, 1};
    findSecondMax::printArray(numbers);
    std::cout << findSecondMax::findSecondMaxMethod(numbers);

    return 0;
}
