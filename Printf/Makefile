NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

M_SRCS = ft_hexalow.c \
	ft_hexaup.c \
	ft_printf.c \
	ft_ptr.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_putunsigned.c \
	ft_putstr.c

M_OBJS = $(M_SRCS:%.c=%.o)


OBJS = $(M_OBJS)


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -I .

clean:
	$(RM) $(M_OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re