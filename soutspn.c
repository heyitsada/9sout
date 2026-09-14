#include <stddef.h>
#include <string.h>

int soutspn(const char *src, const char *start, const char *end, char *destination, size_t cap) {
    if (!src || !start || !destination || cap == 0)
        return 0;

    const char *a = strstr(src, start);
    if (!a) return 0;
    a += strlen(start);

    const char *b = end ? strstr(a, end) : a + strlen(a);
    if (end && !b) return 0;

    size_t len = (size_t)(b - a);
    if (len >= cap) return 0;

    memcpy(destination, a, len);
    destination[len] = '\0';

    return 1;
}
