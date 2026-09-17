#ifndef SOUT_TEXT_H
#define SOUT_TEXT_H

int soutspan(const char *src, const char *start, const char *end,
             char *destination, ulong cap);
int soutsplit(const char **src, char separator, const char **out,
              ulong *length);
int souttrim(const char **src, ulong *length);

#endif
