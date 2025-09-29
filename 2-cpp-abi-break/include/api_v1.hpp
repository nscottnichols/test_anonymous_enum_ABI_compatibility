#ifndef API_V1_HPP
#define API_V1_HPP

// Anonymous enum in v1
typedef enum {
    scope_host    = 1 << 0,
    scope_offload = 1 << 1,
    scope_all     = 0x7FFFFFFF
} scope_t;

// Pure C++ symbol (no extern "C")
void cpp_api(scope_t s);

#endif

