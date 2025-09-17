SRCS_DIR := .
INC_DIRS := .
BUILD_DIR ?= .

SRCS := $(addprefix $(SRCS_DIR)/, ft_strjoin.c ft_isascii.c ft_strdup.c ft_strtrim.c ft_strchr.c ft_isdigit.c ft_toupper.c ft_memchr.c ft_strrchr.c ft_lstlast.c ft_lstdelone.c ft_bzero.c ft_lstsize.c ft_striteri.c ft_lstclear.c ft_strlcat.c ft_putendl_fd.c ft_lstmap.c ft_memmove.c ft_atoi.c ft_lstiter.c ft_memset.c ft_lstnew.c ft_putnbr_fd.c ft_lstadd_front.c ft_isalnum.c ft_strlen.c ft_strncmp.c ft_isalpha.c ft_itoa.c ft_tolower.c ft_split.c ft_strnstr.c ft_putchar_fd.c ft_lstadd_back.c ft_substr.c ft_calloc.c ft_isprint.c ft_putstr_fd.c ft_memcmp.c ft_memcpy.c ft_strmapi.c ft_strlcpy.c)

OBJS := $(SRCS:$(SRCS_DIR)/%.c=$(BUILD_DIR)/%.o)

INC_FLAGS := $(addprefix -I, $(INC_DIRS))
CFLAGS += -Wall -Wextra -Werror $(INC_FLAGS)

CC ?= cc

NAME := libft.a

.PHONY: all clean fclean re
all: $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	$(CC) -nostartfiles -shared -o libft.so $(OBJS)

$(NAME): $(OBJS)
	ar rcs $@ $^
$(BUILD_DIR)/%.o: $(SRCS_DIR)/%.c | $(BUILD_DIR)
	$(CC) -c $(CFLAGS) -o $@ $<
$(BUILD_DIR):
	mkdir -p $@
