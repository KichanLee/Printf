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

M_OBJS = $(M_SRCS:%.c=%.o)


ifdef WITH_BONUS
	OBJS = $(M_OBJS) $(B_OBJS)
else
	OBJS = $(M_OBJS)
endif

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -I .

clean:
	$(RM) $(M_OBJS) $(B_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re