# Variables
CXX       = c++                   # Compiler
CXXFLAGS  = -Wall -Wextra -Werror -std=c++98 # Compilation flags
INCLUDES  = -Iinclude             # Include path for header files
SRCS      = src/main.cpp src/PhoneBook.cpp src/Contact.cpp # Source files
OBJS      = $(SRCS:.cpp=.o)       # Object files
TARGET    = phonebook             # Executable name

# Default target: Build the program
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Compile .cpp files into .o files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Clean: Remove object files
clean:
	rm -f $(OBJS)

# Full clean: Remove object files and the executable
fclean: clean
	rm -f $(TARGET)

# Rebuild: Clean and build the project
re: fclean all

# Declare phony targets to avoid conflicts with files of the same name
.PHONY: all clean fclean re

