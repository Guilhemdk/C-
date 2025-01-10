# Variables
CXX 		= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98
TARGET 		= megaphone
SRC 		= megaphone.cpp
OBJS  		= $(SRC:.cpp=.o)

# Default target
all: $(TARGET)

# Rule for building the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Clean target to remove the generated executable
%o:%.cpp
	$(CXX) $(CXXFLAGS)
clean:
	rm -f $(OBJS)

# Full clean target (future-proof for object files, logs, etc.)
fclean: clean
	rm -f $(TARGET)

# Rebuild target
re: fclean all

# Phony targets
.PHONY: all clean fclean re


