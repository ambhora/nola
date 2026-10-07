#include <nola/nola.hpp>

#include <string>

int main()
{
  return nola::greet("world") == "hello world" ? 0 : 1;
}
