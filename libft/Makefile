SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	   ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
	   ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
	   ft_calloc.c ft_strdup.c ft_toupper.c ft_tolower.c \
	   ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	   ft_strnstr.c ft_atoi.c ft_strrchr.c ft_substr.c \
	   ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	   ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	   ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c

SRCSB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lsttail.c \
	    ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
	    ft_lstmap.c

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJC = $(SRCS:.c=.o)
OBJCB = $(SRCSB:.c=.o)
RM = rm -f
AR = ar -rc

ifeq ($(MAKECMDGOALS), bonus)
	OBJ = $(OBJC) $(OBJCB)
else
	OBJ = $(OBJC)
endif

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

bonus: $(OBJCB)
	$(AR) $(NAME) $^

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		 $(RM) $(OBJC) $(OBJCB)

fclean: clean
		$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re bonus
