#include "api_stable.h"
#include <iostream>

/* Header already gives C linkage; no need to repeat here, but it doesn't hurt:
extern "C" void stable_api(scope_t s) { ... }
*/
void stable_api(scope_t s) {
    std::cout << "stable_api: " << static_cast<int>(s) << "\n";
}

