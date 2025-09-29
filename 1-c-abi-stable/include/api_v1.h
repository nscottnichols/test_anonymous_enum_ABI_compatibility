#ifndef API_V1_H
#define API_V1_H

/* Anonymous enum in v1 */
typedef enum {
    scope_host    = 1 << 0,
    scope_offload = 1 << 1,
    scope_all     = 0x7FFFFFFF
} scope_t;

/* C function using the typedef */
void c_api(scope_t s);

#endif

