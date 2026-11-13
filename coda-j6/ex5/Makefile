# Makefile

NAME = nom_de_votre_executable

SRCS = main.c \
	count_words.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

fclean:
	rm -f $(NAME)

re: fclean all