#include <iostream>
#include <functional>

std::function<int(int)> makeMultiplier(int factor) {
    // Lambda captures 'factor' by value.
    return [factor](int x) -> int {
        return x * factor;
    };
}

int main() {
    auto times3 = makeMultiplier(3);
    std::cout << "C++ lambda closure: 3 * 10 = " << times3(10) << std::endl;
    return 0;
}
