CXX := g++ -std=c++1y -Wall -Wextra -Werror -Og -g -fsanitize=undefined -fsanitize=address
HEADERS = $(wildcard .hpp)

all:
	@:

test:
	@$(MAKE) -s $(addprefix run-,$(filter %-answer,$(patsubst %.cpp,%,$(wildcard *.cpp))))

run-%: bin/%
	@$< | cat

e%:
	@$(MAKE) -s $(addprefix run-,$(filter-out %-answer,$(filter $(subst e,,$@)%,$(patsubst %.cpp,%,$(wildcard *.cpp)))))

a%:
	@$(MAKE) -s $(addprefix run-,$(filter %-answer,$(filter $(subst a,,$@)%,$(patsubst %.cpp,%,$(wildcard *.cpp)))))

bin/%: %.cpp Makefile $(HEADERS)
	@mkdir -p bin
	@$(CXX) $< -o $@ 

bin/%-answer: %.cpp %-answer.cpp Makefile $(HEADERS)
	@mkdir -p bin
	@$(CXX) -DANSWER=\"$(patsubst %.cpp,%-answer.cpp,$<)\" $< -o $@ 

.PHONY: clean
clean:
	@rm -rf bin
