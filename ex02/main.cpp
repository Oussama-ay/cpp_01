#include <string>
#include <iostream>

int	main()
{
	std::string stringVar = "HI THIS IS BRAIN";
	std::string	*stringPtr = &stringVar;
	std::string	&stringRef = stringVar;

	std::cout << "Part 1 :\n";
	// The memory address of the string variable.
	std::cout << "Address of stringVar: " << &stringVar << "\n";
	// The memory address held by stringPTR.
	std::cout << "Address of stringPtr: " << stringPtr << "\n";
	// The memory address held by stringREF.
	std::cout << "Address of stringRef: " << &stringRef << std::endl;

	std::cout << "\nPart 2 :\n";
	// The value of the string variable.
	std::cout << "Value of stringVar: " << stringVar << "\n";
	// The value pointed to by stringPTR.
	std::cout << "Value pointed to by stringPtr: " << *stringPtr << "\n";
	// The value pointed to by stringREF.
	std::cout << "Value pointed to by stringRef: " << stringRef << "\n";
}
