#ifdef ANSWER
#define _gcc_header(x) ANSWER
#define gcc_header(x) _gcc_header(x)
#include gcc_header(VERSION)
#endif

#include <iostream>
#include <thread>
using namespace std::literals;

#define ASSERT(x) \
	if (!(x)) { \
		std::cout << "Failed '" __FILE__ "': at line " << __LINE__ << ": assert failed: " #x << std::endl; \
		std::exit(1); \
	}

#define TIMEOUT(time, code) \
	{ \
		bool* done = new bool; \
		*done = false; \
		std::thread t([=]{ \
			std::this_thread::sleep_for(time); \
			if (!*done) { \
				std::cout << "Failed '" __FILE__ "': at line " << __LINE__ << ": timed out. "; \
				std::cout << "You had only " << #time << "." << std::endl; \
				std::exit(1); \
			} \
			delete done; \
		}); \
		{code} \
		*done = true; \
		t.detach(); \
	}

#define MAIN(tests) \
	int main() { \
		{tests} \
		std::cout << "Passed '" __FILE__ "'." << std::endl; \
		return 0; \
	}
