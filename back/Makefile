rush-02: main.o file.o
	cc -g -Wall -Wextra -Werror -o rush-02 main.o textsaux.o file.o memory.o texts.o

main.o:  main.c 
	cc -c -g -Wall -Wextra -Werror main.c
file.o:  file.c memory.o texts.o
	cc -c -g -Wall -Wextra -Werror file.c
memory.o:  memory.c 
	cc -c -g -Wall -Wextra -Werror memory.c
texts.o:  texts.c textsaux.o
	cc -c -g -Wall -Wextra -Werror texts.c
textsaux.o:  textsaux.c 
	cc -c -g -Wall -Wextra -Werror textsaux.c
fclean:
	rm -f *.o :w
norm:
	norminette *.c *.h
clear:
	clear
