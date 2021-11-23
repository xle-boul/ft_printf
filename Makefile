# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xle-boul <xle-boul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 18:54:09 by xle-boul          #+#    #+#              #
#    Updated: 2021/11/23 16:42:50 by xle-boul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c								\
ft_hub.c										\
./sources/parser/ft_parse_flags.c				\
./sources/parser/ft_check_flags.c				\
./sources/parser/ft_flags_conditions.c			\
./sources/library/ft_putnbase_fd.c 				\
./sources/library/ft_putchar_fd_print.c			\
./sources/library/ft_putstr_fd_print.c			\
./sources/library/ft_itoa_printf.c				\
./sources/library/ft_itoa_printf_u.c			\
./sources/library/ft_itoa_printf_x.c			\
./sources/library/ft_common_functions.c			\
./sources/printer/ft_u_hub.c					\
./sources/printer/ft_x_hub.c					\
./sources/printer/ft_di_hub.c					\
./sources/printer/ft_s_hub.c					\
./sources/printer/ft_p_hub.c					\
./sources/printer/ft_printf_c.c					\

SRCS_BONUS = ft_printf.c						\
ft_hub.c										\
./sources/parser/ft_parse_flags.c				\
./sources/parser/ft_check_flags.c				\
./sources/parser/ft_flags_conditions.c			\
./sources/library/ft_putnbase_fd.c 				\
./sources/library/ft_putchar_fd_print.c			\
./sources/library/ft_putstr_fd_print.c			\
./sources/library/ft_itoa_printf.c				\
./sources/library/ft_itoa_printf_u.c			\
./sources/library/ft_itoa_printf_x.c			\
./sources/library/ft_common_functions.c			\
./sources/_bonus/ft_di_hub_bonus.c				\
./sources/_bonus/ft_p_hub_bonus.c				\
./sources/_bonus/ft_s_hub_bonus.c				\
./sources/_bonus/ft_u_hub_bonus.c				\
./sources/_bonus/ft_x_hub_bonus.c				\
./sources/_bonus/ft_printf_c_bonus.c			\
./sources/_bonus/ft_printf_di_functions_bonus.c	\
./sources/_bonus/ft_printf_p_functions_bonus.c	\
./sources/_bonus/ft_printf_s_functions_bonus.c	\
./sources/_bonus/ft_printf_u_functions_bonus.c	\
./sources/_bonus/ft_printf_x_functions_bonus.c	\

NAME = libftprintf.a

CC = gcc

CC_FLAGS = -Werror -Wall -Wextra

INCLUDES = -I ./header/
INCLUDES_BONUS = -I ./sources/_bonus/

LIB_DIR = libft/
LIB_OBJS_DIR = libft/objs/
LIB = libft.a

OBJS_DIR = sources/objs/
SRCS_DIR = sources/
OBJS = *.o

$(NAME): $(OBJS_DIR) $(LIB)
	@ar r $(NAME) $(LIB_OBJS_DIR)$(OBJS) $(OBJS_DIR)$(OBJS)
	@echo "$(NAME), created!"

$(LIB):
	@make $(LIB) -C $(LIB_DIR)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(CC_FLAGS) -c $(INCLUDES) $(SRCS)
	@mv *.o $(OBJS_DIR)

all: $(NAME)
	
bonus: fclean objsdirbonus $(LIB)
	@ar r $(NAME) $(LIB_OBJS_DIR)$(OBJS) $(OBJS_DIR)$(OBJS)
	@echo "$(NAME), created!"

objsdirbonus:
	@mkdir -p $(OBJS_DIR)
	@$(CC) $(CC_FLAGS) -c $(INCLUDES_BONUS) $(INCLUDES) $(SRCS_BONUS)
	@mv *.o $(OBJS_DIR)

clean:
	@rm -rf $(OBJS_DIR)
	@rm -rf $(LIB_OBJS_DIR)
	
fclean: clean
	@rm -f $(LIB)
	@rm -f $(NAME)
	@rm -f $(LIB_DIR)$(LIB)

re: fclean all

.PHONY: lib printf obj_dir create_libft clean fclean re