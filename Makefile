NAME    = libftprintf.a

SRC     = ft_print_char.c \
          ft_print_int.c \
          ft_print_percent.c\
          ft_print_hex.c \
          ft_print_str.c \
          ft_printf.c \
          ft_print_uint.c \
		  ft_print_adr.c

OBJECTS = $(SRC:.c=.o)



CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar


all: $(NAME)


$(NAME):$(OBJECTS)
	$(AR) -rcs $@ $?


.o: .c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJECTS)


fclean: clean
	rm -f $(NAME)


re: fclean all
