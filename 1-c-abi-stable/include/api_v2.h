#ifndef API_V2_H
#define API_V2_H

/* Same values, now the enum has a tag in v2 */
typedef enum scope_tag_v2 {
    scope_host    = 1 << 0,
    scope_offload = 1 << 1,
    scope_all     = 0x7FFFFFFF
} scope_t;

void c_api(scope_t s);

#endif

