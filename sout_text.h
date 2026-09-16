#include <stddef.h>
#include <string.h>

int soutspan(const char *src, const char *start, const char *end, char *destination, size_t cap) {
    if (!src || !start || !destination || cap == 0)
        return 0;

    const char *a = strstr(src, start);
    if (!a)
        return 0;

    a += strlen(start);

    const char *b;

    if (end) {
        b = strstr(a, end);
        if (!b)
            return 0;
    } else {
        b = a + strlen(a);
    }

    size_t len = (size_t)(b - a);

    if (len + 1 > cap)
        return 0;

    memcpy(destination, a, len);
    destination[len] = '\0';

    return 1;
}

int soutview(const char *src, const char *start, const char *end, const char **out, size_t *len) {
    if (!src || !start || !out || !len)
        return 0;

    const char *a = strstr(src, start);
    if (!a)
        return 0;

    a += strlen(start);

    const char *b;

    if (end) {
        b = strstr(a, end);
        if (!b)
            return 0;
    } else {
        b = a + strlen(a);
    }

    *out = a;
    *len = (size_t)(b - a);

    return 1;
}

// %%%%%%%%% Header %%%%%%%%%
int soutspan(const char *src, const char *start, const char *end, char *destination, size_t cap);
int soutview(const char *src, const char *start, const char *end, const char **out, size_t *len);
