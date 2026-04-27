#include "Harl.hpp"

int main(void)
{
	Harl harl;

	std::cout << "=== Test 1: DEBUG ===" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "=== Test 2: INFO ===" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "=== Test 3: WARNING ===" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "=== Test 4: ERROR ===" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "=== Test 5: INVALID ===" << std::endl;
	harl.complain("INVALID");
	std::cout << std::endl;

	std::cout << "=== Test 6: UNKNOWN ===" << std::endl;
	harl.complain("UNKNOWN");
	std::cout << std::endl;

	std::cout << "=== Test 7: debug (minúsculas) ===" << std::endl;
	harl.complain("debug");
	std::cout << std::endl;

	return (0);
}