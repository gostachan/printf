NAME	= libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

ARS = ar rcs

SRCS = ft_printf.c \
	   print/ft_print.c \
       print/print_X.c \
       print/print_c.c \
       print/print_d.c \
       print/print_i.c \
       print/print_p.c \
       print/print_s.c \
       print/print_u.c \
       print/print_x.c \
       utils/ft_strlen.c \
       utils/putnbr.c \
       utils/putstr.c \
       utils/to_hex.c \
       utils/to_oct.c

BONUS_SRCS = $(wildcard bonus/*.c)

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

BONUS_FLAG = .bonus

all: $(NAME)

$(NAME): $(OBJS)
	$(ARS) $(NAME) $(OBJS)

bonus: $(BONUS_FLAG)

$(BONUS_FLAG): $(BONUS_OBJS)
	$(ARS) $(NAME) $(BONUS_OBJS)
	@touch $(BONUS_FLAG)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	rm -f $(BONUS_FLAG)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
