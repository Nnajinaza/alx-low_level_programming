# WHAT DOES THE HEADER DO

### 0-preprocessor

This file is the file that shows how the preprocessor which is the first stage on the compiler works. A main.c file was created and the code was checked using betty to see if the code runs without error. A C file was created which was redirected into the c file.
<pre>
Chinaza@ubuntu:~$ export CFILE="0-main.c"
Chinaza@ubuntu:~$ ./0-processor
Chinaza@ubuntu:~$ ./c
Hello World
Chinaza@ubuntu:~$ **_**
<pre>

## 1-compiler
I created a file that generates the assembly code of a C code but with an extension of .c
<pre>
Chinaza@ubuntu:~$ gcc main.c -c
Chinaza@ubuntu:~$ ./1-compiler
Chinaza@ubuntu:~$ ./c
<pre>

## 2-assembler
I created a file that genertes the assembly code of a Ccode but with an extension of .s
<pre>
Chinaza@ubuntu:~$ gcc main.c -s
Chinaza@ubuntu:~$ ./2-assembler
Chinaza@ubuntu:~$ ./s
<pre>

## 3-name
I created a file that compiles a C file and creates a executable file named cisfun
<pre>
Chinaza@ubuntu:~$ export CFILE="0-cisfun"
Chinaza@ubuntu:~$ ./3-name
Chinaza@ubuntu:~$ ./cisfun
<pre>

## 4-puts.c
I created a program that has a function puts that was creates a programm and conpiles the program
<pre>
Chinaza@ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
Chinaza@ubuntu:~$ ./4-puts.c
Chinaza@ubuntu:~$ ./c
<pre>

## 5-printf.c
T created a program that has a function printf that creates a program and compiles it with the -Wall gcc option
<pre>
Chinaza@ubuntu:~$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-print.c && ./a.out
Chinaza@ubuntu:~$ ./5-printf.c
Chinaza@ubuntu:~$ ./c
<pre>
