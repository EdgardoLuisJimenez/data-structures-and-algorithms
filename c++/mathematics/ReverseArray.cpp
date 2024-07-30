#include <iostream>
#include <vector>

class ReverseArray {
    public:
        static void reverse(std::vector<int> numbers, int start, int end) {
            while(start < end) {
                int temp = numbers.at(start);
                numbers.at(start) = numbers.at(end);
                numbers.at(end) = temp;
                start++;
                end--;
            }
            ReverseArray::printArray(numbers); // we put this because we don't pass the pointer, for that reason
                                               // we didn't modify the original numbers
        }
        static void printArray(std::vector<int> arr){
            for (int i = 0; i < arr.size(); i++){
                std::cout << arr.at(i) << " ";
            }
            std::cout << std::endl;
        }
};
int main(){
    std::vector<int> numbers = {2, 11, 5, 10, 7, 8};
    ReverseArray::printArray(numbers);
    ReverseArray::reverse(numbers, 0, numbers.size() - 1);

    return 0;
}
