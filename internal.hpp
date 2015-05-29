#ifdef ANSWER
#define _gcc_header(x) ANSWER
#define gcc_header(x) _gcc_header(x)
#include gcc_header(VERSION)
#endif

#include <iostream>
#define ASSERT(x) if (!(x)) {std::cout << "Failed '" __FILE__ "': at line " << __LINE__ << ": assert failed: " #x << std::endl; std::exit(1);}
#define MAIN(tests) int main() {tests std::cout << "Passed '" __FILE__ "'." << std::endl; return 0;}
