// Сравнивает не более первых n байтов str1 и str2.
#include "s21_string.h"

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
  int result = 0;
  for (s21_size_t i = 0; i < n; i++) {
    if (str1[i] < str2[i] || str1[i] > str2[i]) {
      result = str1[i] - str2[i];
      break;
    }
  }

  //   if (result < 0)
  //     result = -1;
  //   else if (result > 0)
  //     result = 1;

  return result;
}
