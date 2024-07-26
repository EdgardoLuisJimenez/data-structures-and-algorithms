#include <iostream>
#include <string>

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
            int myArray[5] = { }; // Default values
            myArray[0] = 5;
            myArray[1] = 1;
            myArray[2] = 8;
            myArray[3] = 2;
            myArray[4] = 10;
            printArray(myArray, 5);
            myArray[5] = 26;
        }
};
int main() {
    ArrayUtil arrUtil;
    arrUtil.arrayDemo();
    
    return 0;
}
