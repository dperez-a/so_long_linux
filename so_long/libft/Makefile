NAME	=	libft.a
BONUS_NAME	=	.bonus
CC	=	cc
CFLAGS	=	-Wall -Werror -Wextra -g3
AR	=	ar -crs
RM	=	rm -f

SRC	=	ft_isdigit.c \
		ft_isalpha.c \
		ft_isprint.c \
		ft_isascii.c \
		ft_isalnum.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strdup.c \
		ft_strnstr.c \
		ft_memchr.c \
		ft_atoi.c \
		ft_memcmp.c \
		ft_strjoin.c \
		ft_substr.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_calloc.c 
BONUS_SRCS	=	ft_lstnew.c \
				ft_lstlast.c \
				ft_lstadd_front.c \
				ft_lstadd_back.c \
				ft_lstsize.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c
SRCS_GNL	=	get_next_line.c \
				get_next_line_utils.c
SRCS_PRINTF	=	ft_aux_pf.c \
				ft_printf.c \
				ft_putchar_pf.c \
				ft_puthex_pf.c \
				ft_putnbr_pf.c \
				ft_putptr_pf.c \
				ft_putstr_pf.c \
				ft_putuint_pf.c

OBJS	=	$(SRCS:.c=.o)
OBJS_GNL	=	$(SRCS_GNL:.c=.o)
OBJS_PRINTF	=	$(SRCS_PRINTF:.c=.o)

BONUS_OBJS	=	$(BONUS_SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS) $(OBJS_GNL) $(OBJS_PRINTF)
	$(AR) $(NAME) $(OBJS) $(OBJS_GNL) $(OBJS_PRINTF)

$(BONUS_NAME):	$(OBJS) $(OBJS_GNL) $(OBJS_PRINTF) $(BONUS_OBJS)
	$(AR) $(BONUS_NAME) $(OBJS) $(OBJS_GNL) $(OBJS_PRINTF) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(OBJS_GNL) $(OBJS_PRINTF) $(BONUS_OBJS)

bonus:	$(BONUS_NAME)
	
clean:
	$(RM) $(OBJS) $(OBJS_GNL) $(OBJS_PRINTF) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: all bonus clean fclean re