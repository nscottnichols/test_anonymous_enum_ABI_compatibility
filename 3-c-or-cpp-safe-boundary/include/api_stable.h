#ifndef API_STABLE_H
#define API_STABLE_H

#ifdef __cplusplus
extern "C" {
#endif

/* You can use either version here; the point is that the function has C linkage. */
typedef enum scope_tag_v2 {
    scope_host    = 1 << 0,
    scope_offload = 1 << 1,
    scope_all     = 0x7FFFFFFF
} scope_t;

/* C linkage: name will not be mangled by C++ */
void stable_api(scope_t s);

#ifdef __cplusplus
}
#endif

#endif

