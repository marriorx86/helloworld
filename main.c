#include <stdio.h>

extern const char* return_hello(void);

int main(void){
  const unsigned char *const restrict s = (const unsigned char *const)return_hello();
  printf("%s\n", s);
  return 0;
}
