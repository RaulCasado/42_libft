# Nombre del archivo de la librería
NAME = libft.a

# Compilador y flags
CC = cc
CFLAGS = -Wall -Werror -Wextra

# Archivos fuente
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
       ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
       ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
       ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
       ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
       ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
       ft_putendl_fd.c ft_putnbr_fd.c

# Archivos objeto
OBJS = $(SRCS:.c=.o)

# Archivos fuente bonus
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
             ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Archivos objeto bonus
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Comando para crear la librería
AR = ar rcs

# Regla principal: compilar la librería
all: $(NAME)

# Regla para crear la librería
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Regla para los bonus
bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

# Limpiar archivos objeto
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

# Limpiar archivos objeto y la librería
fclean: clean
	rm -f $(NAME)

# Regla para recompilar todo
re: fclean all
