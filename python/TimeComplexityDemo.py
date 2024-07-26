import time

def findSumByMultiplication(n: int) -> int:
    return n * (n + 1) /2

def findSumByForLoop(n: int) -> int:
    sum = 0
    for i in range(n):
        sum += i

    return sum

def main():
    print(f"Proccessing the two functions\n")
    st = time.process_time()
    findSumByMultiplication(1000000)
    et = time.process_time()

    st_2 = time.process_time()
    findSumByForLoop(1000000)
    et_2 = time.process_time()

    print(f'CPU Execution time find Sum By Multiplication: {et-st}')
    print(f'CPU Execution time find Sum By for loop: {et_2-st_2}')

if __name__ == '__main__':
    main()
