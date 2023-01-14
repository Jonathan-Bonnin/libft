NAME = libft.a
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)
HEADERS = includes
FLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rc

all: $(NAME)

%.o: %.c
	cc $(FLAGS) -c -I$(HEADERS) $< -o $@ 

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
