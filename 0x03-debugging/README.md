## 0x03-debugging

# 0-main.c, main.h
I created a file that uses the prototype function which is found "main.h" file to check if the number is positive or negative. 

<pre>
chinaza@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main
chinazae@ubuntu:/debugging$ ./0-main
0 is zero
chinaza@ubuntu:/debugging$
<pre>

#1-main.c
I commented a part of a code that was giving an error in the output of the file to give this output

<pre>
chinaza@ubuntu:/debugging$ gcc -std=gnu89 1-main.c -o 1-main
chinaza@ubuntu:/debugging$ ./1-main
Infinite loop incoming :(
Infinite loop avoided! \o/
chinaza@ubuntu:/debugging$ wc -l 1-main.c
24 1-main.c
chinaza@ubuntu:/debugging$
<pre>

