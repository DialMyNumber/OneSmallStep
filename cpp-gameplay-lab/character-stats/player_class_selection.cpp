// https://www.notion.so/C-328aafc27d228086b0e7f15f001ffa6d?source=copy_link
// CLI-based Player Character Class Selection System

#include <iostream>

class firstClass {

public:
	virtual void basicAttack() = 0;		// pure virtual function
};


class Warrior : public firstClass {

public:
	void basicAttack() {
		std::cout << "Swing sword." << std::endl;
	}
};


class Magician : public firstClass {

public:
	void basicAttack() {
		std::cout << "Spell fireball." << std::endl;
	}
};


class Archer : public firstClass {

public:
	void basicAttack() {
		std::cout << "Shoot wood arrow." << std::endl;
	}

};


class Thief : public firstClass {

public:
	void basicAttack() {
		std::cout << "Throw knife." << std::endl;
	}
};


class Pirate : public firstClass {

public:
	void basicAttack() {
		std::cout << "Shoot iron bullet." << std::endl;
	}
};


int main() {
	firstClass* player = nullptr;
	int playerClassNumber;

	do {
		std::cout << "1. Warrior  /  2. Magician  /  3. Thief  /  4. Archer  /  5. Pirate\n" << "Choose the number: ";
		std::cin >> playerClassNumber;

		switch (playerClassNumber)
		{
		default:
			std::cout << "Choose a number 1 to 5.\n" << std::endl;
			break;

		case 1:
			player = new Warrior();
			std::cout << "Player Class Changed : Warrior.\n";
			break;
		case 2:
			player = new Magician();
			std::cout << "Player Class Changed : Magician.\n";
			break;
		case 3:
			player = new Thief();
			std::cout << "Player Class Changed : Thief.\n";
			break;
		case 4:
			player = new Archer();
			std::cout << "Player Class Changed : Archer.\n";
			break;
		case 5:
			player = new Pirate();
			std::cout << "Player Class Changed : Pirate.\n";
			break;
		}

	} while (playerClassNumber < 1 || playerClassNumber > 5);

	for (int i = 0; i < 3; ++i) {
		player->basicAttack();
	}

	delete player;
	player = nullptr;

	return 0;
}
