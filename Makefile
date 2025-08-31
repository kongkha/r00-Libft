SRCS_DIR := .
INC_DIRS := .
BUILD_DIR ?= build

SRCS := $(addprefix $(SRCS_DIR)/, ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c)
OBJS := $(SRCS:$(SRCS_DIR)/%.c=$(BUILD_DIR)/%.o)

INC_FLAGS := $(addprefix -I, $(INC_DIRS))
CFLAGS := -Wall -Wextra -Werror $(INC_FLAGS)

NAME := libft.a

.PHONY: all clean fclean re
all: $(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

$(NAME): $(OBJS)
	ar rcs $@ $^
$(BUILD_DIR)/%.o: $(SRCS_DIR)/%.c $(BUILD_DIR)
	cc -c $(CFLAGS) -o $@ $<
$(BUILD_DIR):
	mkdir -p $@
