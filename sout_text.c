#include <u.h>

#include <libc.h>

#include "sout_text.h"

int soutspan(const char *src, const char *start, const char *end,
             char *destination, ulong cap) {
  const char *a;
  const char *b;
  ulong len;

  if (src == nil || destination == nil || cap == 0)
    return 0;

  a = src;

  if (start != nil && *start != '\0') {
    a = strstr((char *)src, (char *)start);
    if (a == nil)
      return 0;

    a += strlen((char *)start);
  }

  b = a + strlen((char *)a);

  if (end != nil && *end != '\0') {
    b = strstr((char *)a, (char *)end);
    if (b == nil)
      return 0;
  }

  len = (ulong)(b - a);

  if (len + 1 > cap)
    return 0;

  memcpy(destination, (void *)a, len);
  destination[len] = '\0';

  return 1;
}

int soutsplit(const char **src, char separator, const char **out,
              ulong *length) {
  const char *anh;
  const char *b;

  if (src == nil || *src == nil || out == nil || length == nil)
    return 0;

  anh = *src;

  if (*anh == '\0')
    return 0;

  b = strchr((char *)anh, separator);

  if (b != nil) {
    *out = anh;
    *length = (ulong)(b - anh);
    *src = b + 1;
  } else {
    *out = anh;
    *length = (ulong)strlen((char *)anh);
    *src = anh + *length;
  }

  return 1;
}

int souttrim(const char **src, ulong *length) {
  const char *a;
  const char *b;

  if (src == nil || *src == nil || length == nil)
    return 0;

  a = *src;
  b = a + *length;

  while (a < b && (*a == ' ' || *a == '\t' || *a == '\n' || *a == '\r'))
    a++;

  while (b > a && (*(b - 1) == ' ' || *(b - 1) == '\t' || *(b - 1) == '\n' ||
                   *(b - 1) == '\r'))
    b--;

  *src = a;
  *length = (ulong)(b - a);

  return 1;
}
