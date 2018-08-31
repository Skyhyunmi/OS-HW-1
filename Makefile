LIB=./lib/mylist.c

TEST1_EXE=func_test1.out
TEST1_SRC=./tests/func_test1.c
TEST2_EXE=func_test2.out
TEST2_SRC=./tests/func_test2.c
TEST3_EXE=func_test3.out
TEST3_SRC=./tests/func_test3.c
TEST4_EXE=func_test4.out
TEST4_SRC=./tests/func_test4.c
TEST5_EXE=func_test5.out
TEST5_SRC=./tests/func_test5.c

all:
	gcc -std=c99 -o $(TEST1_EXE) $(TEST1_SRC) $(LIB) -I./include/
	gcc -std=c99 -o $(TEST2_EXE) $(TEST2_SRC) $(LIB) -I./include/
	gcc -std=c99 -o $(TEST3_EXE) $(TEST3_SRC) $(LIB) -I./include/
	gcc -std=c99 -o $(TEST4_EXE) $(TEST4_SRC) $(LIB) -I./include/
	gcc -std=c99 -o $(TEST5_EXE) $(TEST5_SRC) $(LIB) -I./include/
