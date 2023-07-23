all: rush-02

rush-02: main.o file.o
	cc -g -Wall -Wextra -Werror -o rush-02 main.o textsaux.o file.o memory.o texts.o rules.o rules_mem.o texts2.o

main.o:  main.c file.o texts.o memory.o rules.o
	cc -c -g -Wall -Wextra -Werror main.c
file.o:  file.c memory.o texts.o 
	cc -c -g -Wall -Wextra -Werror file.c
rules.o: rules.c memory.o texts.o rules_mem.o texts2.o
	cc -c -g -Wall -Wextra -Werror rules.c
rules_mem.o: rules_mem.c 
	cc -c -g -Wall -Wextra -Werror rules_mem.c
memory.o:  memory.c 
	cc -c -g -Wall -Wextra -Werror memory.c
texts.o:  texts.c textsaux.o
	cc -c -g -Wall -Wextra -Werror texts.c
texts2.o:  texts2.c textsaux.o
	cc -c -g -Wall -Wextra -Werror texts2.c
textsaux.o:  textsaux.c 
	cc -c -g -Wall -Wextra -Werror textsaux.c
.PHONY: fclean
fclean:
	rm -f *.o :w
.PHONY: clean
clean:
	rm -f *.o :w
.PHONY: norm
norm:
	norminette *.c *.h
.PHONY: clear
clear:
	clear
