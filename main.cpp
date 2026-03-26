#include <iostream>
#include <cstring>

extern "C" {
  extern const char* get_hello();

  const char* return_hello(void){
    const char* hello_ptr  = get_hello();
    std::string hello= std::string(hello_ptr);
    hello += "d!";
    const char* manipulated = hello.c_str();
    return strdup(manipulated);
  }
}
