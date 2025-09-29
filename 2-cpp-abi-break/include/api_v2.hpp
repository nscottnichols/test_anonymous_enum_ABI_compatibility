#ifndef API_V2_HPP
#define API_V2_HPP

// Same values, now with a tag in v2
typedef enum scope_tag_v2 {
    scope_host    = 1 << 0,
    scope_offload = 1 << 1,
    scope_all     = 0x7FFFFFFF
} scope_t;

void cpp_api(scope_t s);

#endif

