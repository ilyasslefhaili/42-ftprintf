# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilefhail <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/21 03:29:53 by ilefhail          #+#    #+#              #
#    Updated: 2021/11/21 13:34:26 by ilefhail         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = @gcc -c

CFLAGS = -Wall -Wextra -Werror

AR = ar -rc

SRCS = ft_putchar_fd.c\
        ft_putnbr_fd.c\
        ft_printf.c\
        checktype.c\
        ft_strlen.c\
        ft_putstr_fd.c\
		ft_putunsnb.c\
		nbrlen.c\
		ft_convert_hexa.c\
		ft_print_adress.c\
		ft_convert_ghexa.c

# Colors
C_YELLOW = \033[0;33m
C_PURPLE = \033[1;35m
C_GREEN = \033[1;32m
C_BLUE = \033[1;34m
C_RED = \033[1;31m
C_RES = \033[0m

OBJS = $(subst .c,.o,$(SRCS))

all : $(NAME)

$(NAME) : $(OBJS)
	@$(CC) $(CFLAGS) $(SRCS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(C_GREEN)[printf.a created] $(C_RES)"

clean :
	@rm -f ./*.o

	@echo "$(C_YELLOW)[objects removed] $(C_RES)"


fclean : clean
	@rm -f $(NAME)
	@echo "$(C_RED)[printf.a removed] $(C_RES)"

re : fclean all