##
## EPITECH PROJECT, 2024
## my_paint
## File description:
## Makefile
##

.PHONY: all clean fclean re coverage code_line

SRC =	src/game.c											\
		src/functions/my_random.c							\
		src/functions/str_to_array.c						\
		src/display.c										\
		src/event.c											\
		src/add_number.c									\
		src/compress.c										\
		src/merge.c											\

MAIN =	main.c

OBJ = $(SRC:.c=.o)

OBJ_MAIN = $(MAIN:.c=.o)

NAME =	2048

INCLUDES =	-I./include

LIBS =	-l csfml-audio -lm -lncurses

CFLAGS =	-Wextra -Wall -Wshadow -Werror -g

CC := gcc -o $(NAME) $(INCLUDES)

GREEN =		"\033[1;32m"
YELLOW =	"\033[1;33m"
RED =		"\033[1;31m"
BLUE =		"\033[1;36m"
GOLD =		"\033[1;33m"
MAGENTA =	"\033[1;35m"
RESET =		"\033[0m"

all: $(NAME)

$(NAME): $(OBJ) $(OBJ_MAIN)
		printf $(YELLOW)"\nCreating binary file...\n"$(RESET)
		$(CC) $(OBJ_MAIN) $(OBJ) $(LIBS) $(CFLAGS)
		printf $(GREEN)"\nBinary file created !\n"$(RESET)

clean:
		printf $(YELLOW)"\nCLEANING...\n"$(RESET)
		rm -rf $(OBJ)
		rm -rf $(OBJ_MAIN)
		printf $(GREEN)"Cleaned !\n"$(RESET)

fclean: clean
		rm -rf $(NAME)
		rm -rf *.gcno
		rm -rf *.gcda
		printf $(RED)"Removed binary file !\n"$(RESET)

re: fclean all

coverage: test_run
		printf $(YELLOW)"\nGenerating coverage...\n"$(RESET)
		gcovr
		printf $(GREEN)"Coverage generated !\n"$(RESET)

test_run: $(OBJ)
		printf $(YELLOW)"\Generating tests...\n"$(RESET)
		gcc -o unit_tests $(OBJ) --coverage --lcriterion
		printf $(GREEN)"Tests generated !\n"$(RESET)
		./unit_tests
		printf $(GREEN)"Tests launched !\n"$(RESET)

code_line :
	printf $(MAGENTA)"\nCode lines :\n"$(RESET)
	find $(SRC) $(MAIN) -name '*.c' | xargs wc -l
	find include -name '*.h' | xargs wc -l