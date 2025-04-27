NAME		=		whatever
CXX			=		c++
FLAGS		=		-Wall -Wextra -Werror
STANDARD	=		--std=c++17
SRCS		=		main.cpp
OBJS		=		$(SRCS:.cpp=.o)

all:	$(NAME)

%.o: %.cpp
	$(CXX) $(FLAGS) $(STANDARD) -o $@ -c $<

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
