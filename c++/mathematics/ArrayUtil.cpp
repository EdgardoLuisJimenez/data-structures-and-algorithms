#include <iostream>
#include <string>
#include <vector>

class ArrayUtil {
    private:

    public:
        void printArray(int arr[], int length){
            for (int i = 0; i < length; i++){
                std::cout << arr[i] << " ";
            }
            std::cout << "\n";
        }
        void arrayDemo() {
            std::vector<int> arr = {0, 1, 3, 6, 8, 2, 4, 7};
            std::cout << findMissingNumber(arr);
        }
        static int findMissingNumber(std::vector<int> arr){
            int n = arr.size();
            int sum = (n * (n + 1)) / 2;
            for(auto num: arr){
                sum = sum - num;
            }
            return sum;
        }
};
int main() {
    ArrayUtil arrUtil;
    arrUtil.arrayDemo();
    
    return 0;
}
