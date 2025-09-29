#include "api_v1.hpp"
#include <iostream>

void cpp_api(scope_t s) {
    std::cout << "cpp_api: " << static_cast<int>(s) << "\n";
}

