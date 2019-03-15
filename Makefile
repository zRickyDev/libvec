# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rporcu <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/15 19:31:17 by rporcu            #+#    #+#              #
#    Updated: 2019/03/16 00:24:16 by rporcu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re
NAME = libvec.a
SRC = vector_init.c \
	vector_op.c \
	vector_op2.c \
	vector_utils.c
SRCDIR = ./src
OBJDIR = ./obj
CCFLAGS = -Wall -Werror -Wextra
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))
IDIR = -I ./includes
LFLAGS = -lm

all: dir $(NAME)

dir:
	@mkdir -p $(OBJDIR)

$(NAME): $(OBJ)
	gcc $(CCFLAGS) $(LFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	gcc $(CCFLAGS) $(IDIR) -o $@ -c $<

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
