SRCS_DIR := .
INC_DIRS := .
BUILD_DIR ?= .

SRCS := $(addprefix $(SRCS_DIR)/, ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isalnum.c ft_strlen.c ft_substr.c ft_memcpy.c ft_memmove.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_strmapi.c ft_memchr.c ft_memcmp.c ft_strncmp.c ft_strrchr.c ft_strnstr.c ft_putendl_fd.c ft_split.c ft_strjoin.c ft_bzero.c ft_memset.c ft_toupper.c ft_atoi.c ft_putnbr_fd.c ft_striteri.c ft_strtrim.c ft_strlcat.c ft_strlcpy.c ft_strchr.c ft_calloc.c ft_itoa.c ft_tolower.c)
BONUSES := $(addprefix $(SRCS_DIR)/, ft_lstclear_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstnew_bonus.c ft_lstdelone_bonus.c ft_lstsize_bonus.c ft_lstiter_bonus.c)

OBJS := $(SRCS:$(SRCS_DIR)/%.c=$(BUILD_DIR)/%.o)
BONUSES_OBJS := $(BONUSES:$(SRCS_DIR)/%.c=$(BUILD_DIR)/%.o)

INC_FLAGS := $(addprefix -I, $(INC_DIRS))
CFLAGS += -Wall -Wextra -Werror $(INC_FLAGS)

NAME := libft.a

.PHONY: all clean fclean bonus re
all: $(NAME)
bonus: $(NAME) $(BONUSES_OBJS)
	ar rs $< $(BONUSES_OBJS)
clean:
	$(RM) $(OBJS) $(BONUSES_OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

$(NAME): $(OBJS)
	ar rcs $@ $^
$(BUILD_DIR)/%.o: $(SRCS_DIR)/%.c | $(BUILD_DIR)
	cc -c $(CFLAGS) -o $@ $<
$(BUILD_DIR):
	mkdir -p $@
