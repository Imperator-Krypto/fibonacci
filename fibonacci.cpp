#include <cassert>
#include <iostream>

uint64_t fibonacci(uint64_t n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
static void test() {
    uint64_t test_case_1 = fibonacci(0);
    assert(test_case_1 == 0);
    std::cout << "Passed Test 1!" << std::endl;

    uint64_t test_case_2 = fibonacci(1);
    assert(test_case_2 == 1);
    std::cout << "Passed Test 2!" << std::endl;

    uint64_t test_case_3 = fibonacci(2);
    assert(test_case_3 == 1);
    std::cout << "Passed Test 3!" << std::endl;

    uint64_t test_case_4 = fibonacci(3);
    assert(test_case_4 == 2);
    std::cout << "Passed Test 4!" << std::endl;

    uint64_t test_case_5 = fibonacci(4);
    assert(test_case_5 == 3);
    std::cout << "Passed Test 5!" << std::endl;

    uint64_t test_case_6 = fibonacci(15);
    assert(test_case_6 == 610);
    std::cout << "Passed Test 6!" << std::endl << std::endl;
}

int main() {
    test();
    int n = 0;
    std::cin >> n;
    assert(n >= 0);
    std::cout << "F(" << n << ")= " << fibonacci(n) << std::endl;
}
