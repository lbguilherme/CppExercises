CXX := g++ -std=c++1y -Wall -Wextra -Werror -Og -g -fsanitize=undefined -fsanitize=address
HEADERS = $(wildcard .hpp)

all: $(patsubst %.cpp,bin/%,$(wildcard *.cpp))
	@(for file in $^; do \
		./$$file; \
	done) | cat
	
%: $(filter $@%,$(patsubst %.cpp,bin/%,$(wildcard *.cpp)))
	@(for file in $^; do \
		./$$file; \
	done) | cat

test: $(filter %-answer,$(patsubst %.cpp,bin/%,$(wildcard *.cpp)))
	@(for file in $^; do \
		./$$file; \
	done) | cat

bin/%: %.cpp Makefile $(HEADERS)
	@mkdir -p bin
	@$(CXX) $< -o $@ 

bin/%-answer: %.cpp %-answer.cpp Makefile $(HEADERS)
	@mkdir -p bin
	@$(CXX) -DANSWER=\"$(patsubst %.cpp,%-answer.cpp,$<)\" $< -o $@ 

.PHONY: clean
clean:
	@rm -rf bin
