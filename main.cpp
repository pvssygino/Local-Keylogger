#include <iostream>

int main() {
	
	int menu = 0;

	std::cout << "Opzioni:" << std::endl;
	std::cout << "1. Cattura Tastiera" << std::endl;
	std::cout << "2. Cattura WebCam" << std::endl;
	std::cout << "3. Cattura Microfono" << std::endl;
	std::cout << "4. Screenshot" << std::endl;
	std::cout << "> ";

	while (true) {
		std::cin >> menu;
		switch (menu) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			std::cout << "\nComando inseristente!\n" << std::endl;
		}
	}
}