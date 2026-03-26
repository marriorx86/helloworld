#include <iostream>
#include <cstring>

extern "C" {
  const char* return_hello(void){
    std::string hello = "Hello, Worl";
    hello += "d!";
    const char* manipulated = hello.c_str();
    return strdup(manipulated);
  }
}
