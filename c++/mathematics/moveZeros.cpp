#include <iostream>
#include <vector>

class moveZeros {
    public:
        void printArray(std::vector<int> arr) {
            int n = arr.size();
            for (int i = 0; i < arr.size(); i++) {
                std::cout << arr[i] << " ";
            }
            std::cout << "\n";
        }

        void arrayDemo() {
            std::vector<int> arr = {8, 1, 0, 2, 1, 0, 3};
            printArray(arr);
            moveZero(arr);
        }
        void moveZero(std::vector<int> arr) {
            int j = 0;
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] != 0) {
                    std::swap(arr[i], arr[j]);
                    j++;
                }
            }
            printArray(arr);
        }
};

int main(){
    moveZeros arrUtil;
    arrUtil.arrayDemo();

    return 0;
}
