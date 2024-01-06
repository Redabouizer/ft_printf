SRCS= ft_printf.c \
	ft_putadresse.c \
	ft_putchar.c \
	ft_putnbr_base.c \
	ft_putstr.c

OBJS = $(SRCS:.c=.o)

AR =ar rc

LIBRARY = libftprintf.h

CFLAGS = -Wall -Wextra -Werror 

NAME = libftprintf.a

all : $(NAME)

$(NAME) : $(OBJS)
		$(AR) $(NAME) $(OBJS)

%.o : %.c $(LIBRARY)
	$(CC) $(CFLAGS) -c $<

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re: fclean all