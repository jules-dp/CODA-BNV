# Makefile

NAME = nom_de_votre_executable

SRCS = main.c \
	print_tab.c \
	str_cpy.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all