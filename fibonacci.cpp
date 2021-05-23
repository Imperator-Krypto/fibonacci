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
}

int main() {
    test();
    int n = 0;
    std::cin >> n;
    assert(n >= 0);
    std::cout << "F(" << n << ")= " << fibonacci(n) << std::endl;
}
