#include "../s21_string.h"

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
  char *p = dest;
  while (*p != '\0') p++;
  while (*src != '\0' && n > 0) {
    *p++ = *src++;
    n--;
  }
  *p = '\0';
  return dest;
}
