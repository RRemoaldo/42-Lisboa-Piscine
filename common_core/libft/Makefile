Files = ft_atoi \
	ft_bzero \
	ft_calloc \
	ft_isalnum \
	ft_isalpha \
	ft_isascii \
	ft_isdigit \
	ft_isprint \
	ft_memchr \
	ft_memcmp \
	ft_memcpy \
	ft_memmove \
	ft_memset \
	ft_strchr \
	ft_strdup \
	ft_strlcat \
	ft_strlcpy \
	ft_strlen \
	ft_strncmp \
	ft_strnstr \
	ft_strrchr \
	ft_tolower \
	ft_toupper \
	ft_substr \
	ft_strjoin \
	ft_strtrim \
	ft_strmapi \
	ft_striteri \
	ft_putchar_fd \
	ft_putstr_fd \
	ft_putendl_fd \
	ft_putnbr_fd \
	ft_itoa \
	ft_split

BONUS = ft_lstnew \
	ft_lstadd_front \
	ft_lstsize \
	ft_lstlast \
	ft_lstadd_back \
	ft_lstdelone \
	ft_lstclear \
	ft_lstiter \
	ft_lstmap

COMPILER = cc

FLAGS = -Wall -Wextra -Werror

SRCFILES = $(Files:%=%.c)

OBJFILES = $(Files:%=%.o)

BONUS_SRC = $(BONUS:%=%.c)

BONUS_OBJ = $(BONUS:%=%.c)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJFILES)
	ar rcs $(NAME) $(OBJFILES)

$(BONUS_OBJ): %.o: %.c
	$(COMPILER) $(FLAGS) -c $< -o $@

$(OBJFILES): %.o: %.c
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BONUS_OBJ)
	ar rcs $(BONUS_OBJ)