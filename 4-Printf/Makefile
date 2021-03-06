NAME = libftprintf.a

SRCS_PATH = sources
SRCS_NAME = ft_printf.c ft_check_color.c \
			ft_checks.c ft_check_precision.c ft_doublecheck.c ft_check_flag.c \
			ft_check_prepends.c ft_check_size.c ft_check_width.c \
			\
			ft_type_conv.c \
			ft_flag_c.c ft_flag_cap_c.c ft_flag_s.c ft_flag_cap_s.c \
			ft_flag_d.c ft_flag_cap_d.c ft_flag_i.c ft_flag_o.c ft_flag_cap_o.c\
			ft_flag_u.c ft_flag_cap_u.c ft_flag_x.c ft_flag_cap_x.c \
			ft_flag_p.c ft_flag_b.c ft_flag_n.c ft_flag_f.c \
			ft_size_conv_int.c ft_size_conv_uint.c \
			\
			ft_length.c ft_create_buf.c ft_pwdeal.c

SRCS = $(addprefix $(SRCS_PATH)/,$(SRCS_NAME))

OBJS_PATH = objects
OBJS_NAME = $(SRCS_NAME:.c=.o)
OBJS = $(addprefix $(OBJS_PATH)/,$(OBJS_NAME))

INCLUDES_PATH = includes
INCLUDES_NAME = printf.h
INCLUDES = $(addprefix $(INCLUDES_PATH)/,$(INCLUDE_NAME))

CFLAGS = -Wall -Werror -Wextra
LIB = libft/libft.a

.PHONY: all, clean, fclean, re

all: $(NAME)

libftcomp:
	@echo "\033[31;5;mCompiling Printf...\033[0m"
	@make all -C libft/

$(NAME): libftcomp  $(OBJS) $(LIB)
	@libtool -static -o $(NAME) $(LIB) $(OBJS)
	@echo "\033[31;3m\nCompiling Done !\033[0m"

$(OBJS): $(OBJS_PATH) $(SRCS) $(INCLUDES_PATH)
	@gcc -c $(CFLAGS) $(SRCS)
	@mv $(OBJS_NAME) $(OBJS_PATH)

$(OBJS_PATH):
	@mkdir $(OBJS_PATH) 2> /dev/null || true

$(INCLUDES_PATH):
	@mkdir $(INCLUDES_PATH) 2> /dev/null || true
	@mv $(INCLUDE_NAME) $(INCLUDES_PATH)

clean:
	@echo "\033[32;5mCleaning..."
	@make clean -C libft/
	@rm -f $(OBJS)
	@rmdir $(OBJS_PATH) 2> /dev/null || true
	@echo "\033[32;3mCleaning Done !\n\033[0m"

fclean: clean
	@echo "\033[32;5mFcleaning..."
	@make fclean -C libft/
	@rm -f $(NAME)
	@echo "\033[32;3mFcleaning Done !\n\033[0m"

re: fclean all
