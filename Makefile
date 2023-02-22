# Libft
SRCS			=	ft_isalnum.c \
					ft_isprint.c \
					ft_memcmp.c \
					ft_putchar_fd.c \
					ft_strlcat.c \
					ft_strncmp.c \
					ft_substr.c \
					ft_atoi.c \
					ft_isalpha.c \
					ft_itoa.c \
					ft_memcpy.c \
					ft_putendl_fd.c \
					ft_strchr.c \
					ft_strlcpy.c \
					ft_strnstr.c \
					ft_tolower.c \
					ft_bzero.c \
					ft_isascii.c \
					ft_split.c \
					ft_memmove.c \
					ft_putnbr_fd.c \
					ft_strdup.c \
					ft_strlen.c \
					ft_strrchr.c \
					ft_toupper.c \
					ft_calloc.c \
					ft_isdigit.c \
					ft_memchr.c \
					ft_memset.c \
					ft_putstr_fd.c \
					ft_strjoin.c \
					ft_strmapi.c \
					ft_strtrim.c \
					ft_striteri.c 
OBJS			= $(SRCS:.c=.o)

# Lists
SRCSB			=	lists/ft_lstnew.c \
					lists/ft_lstadd_front.c \
					lists/ft_lstsize.c \
					lists/ft_lstlast.c \
					lists/ft_lstadd_back.c \
					lists/ft_lstdelone.c \
					lists/ft_lstclear.c \
					lists/ft_lstiter.c \
					lists/ft_lstmap.c \
					lists/ft_lstprint.c
OBJSB			= $(SRCSB:.c=.o)

# ft_printf
SRCSPF			= 	ft_printf.c \
					ft_printalpha.c \
					ft_printnum.c
OBJSPF			= $(SRCSPF:.c=.o)

# get_next_line
SRCSGNL			=	get_next_line.c \
					get_next_line_utils.c
OBJSGNL			= $(SRCSGNL:.c=.o)

# Compiler
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

# Colours
BLACK				=	\033[0;30m
RED					=	\033[0;31m
GREEN				=	\033[0;32m
YELLOW				=	\033[0;33m
BLUE				=	\033[0;34m
PURPLE				=	\033[0;35m
CYAN				=	\033[0;36m
WHITE				=	\033[0;37m
RESET				=	\033[0m

# Rules
all:			$(NAME)

$(NAME):		$(OBJS) $(OBJSPF) $(OBJSGNL)
				@ar rcs $(NAME) $(OBJS) $(OBJSPF) $(OBJSGNL)
				@printf "$(BLUE)==> $(CYAN)Libft compiled ✅\n\n$(RESET)"

bonus:			$(OBJS) $(OBJSB) $(OBJSPF) $(OBJSGNL)
				@ar rcs $(NAME) $(OBJS) $(OBJSB) $(OBJSPF) $(OBJSGNL)
				@printf "$(BLUE)==> $(CYAN)Libft bonus compiled ✅✨\n\n$(RESET)"

clean:
				@$(RM) $(OBJS) $(OBJSB) $(OBJSPF) $(OBJSGNL)
				@printf "\n$(BLUE)==> $(RED)Removed Libft 🗑️\n\n$(RESET)"

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)
				@printf "$(BLUE)==> $(CYAN)Libft re-compiled 🔄\n$(RESET)"

.PHONY:			all clean fclean re bonus