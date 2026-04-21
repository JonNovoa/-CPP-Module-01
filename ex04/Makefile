NAME = sed_is_for_losers

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

# ===== TARGETS =====

# Target por defecto: compila el programa
all: $(NAME)

# Enlaza los archivos objeto en el ejecutable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Compila cada .cpp en su correspondiente .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Borra solo los archivos objeto
clean:
	rm -f $(OBJS)

# Borra los archivos objeto Y el ejecutable
fclean: clean
	rm -f $(NAME)

# Recompila todo
re: fclean all

.PHONY: all clean fclean re