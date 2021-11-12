# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xle-boul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 18:54:09 by xle-boul          #+#    #+#              #
#    Updated: 2021/11/12 21:08:11 by xle-boul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c						\
./sources/ft_putnbase_fd.c 				\
./sources/ft_printf_c.c					\
./sources/ft_di_hub.c					\
./sources/ft_s_hub.c					\
./sources/ft_parse_flags.c				\
./sources/ft_check_flags.c				\
ft_hub.c								\
./sources/ft_putchar_fd_print.c			\
./sources/ft_putstr_fd_print.c			\
./sources/ft_flags_conditions.c			\
./sources/ft_printf_s_functions.c		\
./sources/ft_itoa_printf.c				\
./sources/ft_itoa_printf_u.c			\
./sources/ft_itoa_printf_x.c			\
./sources/ft_printf_di_functions.c		\
./sources/ft_printf_u_functions.c		\
./sources/ft_u_hub.c					\
./sources/ft_printf_x_functions.c		\
./sources/ft_x_hub.c					\
./sources/ft_printf_p_functions.c		\
./sources/ft_p_hub.c					\
./sources/ft_common_functions.c			\

NAME = libftprintf.a

CC = gcc

CC_FLAGS = -Werror -Wall -Wextra

LIB_DIR = libft/
LIB_OBJS_DIR = libft/objs/
LIB = libft.a

OBJS_DIR = sources/objs/
SRCS_DIR = sources/
OBJS = *.o

$(NAME):  $(LIB) $(OBJS_DIR)
	@ar r $(NAME) $(LIB_OBJS_DIR)$(OBJS) $(OBJS_DIR)$(OBJS)
	@echo "$(NAME), created!"

$(LIB):
	@make $(LIB) -C $(LIB_DIR)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(CC_FLAGS) -c $(SRCS)
	@mv *.o $(OBJS_DIR)

all: $(NAME)

bonus: $(NAME)

clean:
	@rm -rf $(OBJS_DIR)
	@rm -rf $(LIB_OBJS_DIR)
	
fclean: clean
	@rm -f $(LIB)
	@rm -f $(NAME)
	@rm -f $(LIB_DIR)$(LIB)

re: fclean all

.PHONY: lib printf obj_dir create_libft clean fclean re