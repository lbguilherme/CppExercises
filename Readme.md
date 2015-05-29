# CppExercises

## Rules

- There is a file called `internal.hpp`. You shall not touch it.
- Inside the code you shall not define macros that affect the behaviour of the read-only section.
- You shall not remove any code that is already there.

## Running Makefile

- `make`: Compiles and runs ALL exercises in order. Please note that most will fail to compile.
- `make e004`: Compiles and runs exercise 004. Replace by any other number. This is the best method.
- `make clean`: Just clean all executables. Not really needed for anything.

## Naming

Files are named as: `exercisenumber-difficulty-name-comment.cpp`.

 - `exercisenumber`: A increasing number just as id.
 - `difficulty`: An integer between 0 and 10.
 - `name`: An arbitrary name. Exercises with the same name **must be done in order**.
 - `comment`: Just a comment to differ from exercises with the same name.

## Difficulty table

Value  | Meaning
- | -
0 | Trivial. Requires zero thinking.
1 | Basic. Uses only basic knowledge.
2 | Uses at least one non-basic method.
3 | Uses a combination of non-basic methods.
4 | TODO
5 | Requires specific memory layout knowledge.
6 | Requires non-basic compile-time code.
7 | Requires heavy use of templates.
8 | Requires using some non-obvious tricks to solve.
9 | Requires uses beyond what the language was designed for.
10 | I almost couldn't solve.
