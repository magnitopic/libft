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

SRCSB			=	ft_lstnew.c \
					ft_lstadd_front.c \
					ft_lstsize.c \
					ft_lstlast.c \
					ft_lstadd_back.c \
					ft_lstdelone.c \
					ft_lstclear.c \
					ft_lstiter.c \
					ft_lstmap.c 
OBJSB			= $(SRCSB:.c=.o)

SRCSPF			= 	ft_printf.c \
					ft_printalpha.c \
					ft_printnum.c
OBJSPF			= $(SRCSPF:.c=.o)

SRCSGNL			=	get_next_line.c \
					get_next_line_utils.c
OBJSGNL			= $(SRCSGNL:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS) $(OBJSPF) $(OBJSGNL)
				@ar rcs $(NAME) $(OBJS) $(OBJSPF) $(OBJSGNL)
				@printf "\nLibft compiled ✅\n"

bonus:			$(OBJS) $(OBJSB) $(OBJSPF) $(OBJSGNL)
				@ar rcs $(NAME) $(OBJS) $(OBJSB) $(OBJSPF) $(OBJSGNL)
				@printf "\nLibft bonus compiled ✅✨\n"

clean:
				@$(RM) $(OBJS) $(OBJSB) $(OBJSPF) $(OBJSGNL)
				@printf "\nRemoved Libft 🗑️\n"

fclean:			clean
				@$(RM) $(NAME)

re:				fclean $(NAME)
				@printf "\nLibft re-compiled 🔄\n"

.PHONY:			all clean fclean re bonus