# CppExercises

## Rules

- There is a file called `internal.hpp`. You shall not touch it.
- Inside the code you shall not define macros that affect the behaviour of the read-only section.
- You shall not remove any code that is already there.

## Running Makefile

- `make e004`: Compiles and runs exercise 004. Replace by any other number. This is the best method.
- `make clean`: Just clean all executables. Not really needed for anything.

## Naming

Files are named as: `exercisenumber-difficulty-name-comment.cpp`.

 - `exercisenumber`: A increasing number just as id.
 - `difficulty`: A set of five integers separated by commas. See next session.
 - `name`: An arbitrary name. Exercises with the same name **must be done in order**.
 - `comment`: Just a comment to differ from exercises with the same name.

## Difficulty table

Value | Interfaces | StdLib | Optimization | Algorithm | MetaProgramming | Parallelism
----- | ---------- | ------ | ------------ | --------- | --------------- | -----------
0 | Trivial | Nothing | Anything will do | Just logic | Nothing | Not needed
1 | Some connection between classes | Usage of common things | Just don't do bad things | Very easy algorithms | Has templates | Trivial threads
2 | More complex relationships | Combination of several parts of the library | The trivial solution may be too slow | May need to think | Has meta types | Some thread controlling
3 | May use pseudo-classes | Usage of more uncommon features | Will need very careful memory/processing usage to work | Will require more complex but well known algorithms | Has complex deductions and conditionals based on meta types | Will need to be careful agains races
4 | TODO | TODO | TODO | TODO | TODO | TODO
5 | TODO | TODO | TODO | TODO | TODO | TODO
