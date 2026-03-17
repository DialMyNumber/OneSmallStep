// https://www.notion.so/C-326aafc27d2280718b1bf8b2f23e576f?source=copy_link
// CLI-based Character Stats System

#include <iostream>

enum Status {
	HP,				// 0
	MP,				// 1
	ATTACK,			// 2
	ARMOR,			// 3		
	STATUS_COUNT	// Total number of status types (for iteration/array size)
};

enum PotionCount {
	HPPotion,		// 0
	MPPotion,		// 1
	POTION_COUNT	// Total number of potion types (for iteration/array size)
};

bool isVaild(int hp, int mp, int val) {
	return hp > val && mp > val;
}

void setPotion(int count, int* p_HPPotion, int* p_MPPotion) {
	if (p_HPPotion != nullptr) {
		if (count < 0) {
			int available = *p_HPPotion;
			int used = std::min(available, -count);

			if (used == 0) {
				std::cout << "HP Potion is not enough!" << std::endl;
			}
			else {
				*p_HPPotion -= used;
				std::cout << "HP Potion used: " << used << std::endl;
				std::cout << "HP Potion remain: " << *p_HPPotion << std::endl;
			}
		}
		else {
			*p_HPPotion += count;
			std::cout << "HP Potion remain: " << *p_HPPotion << std::endl;
		}
	}

	if (p_MPPotion != nullptr) {
		if (count < 0) {
			int available = *p_MPPotion;
			int used = std::min(available, -count);

			if (used == 0) {
				std::cout << "MP Potion is not enough!" << std::endl;
			}
			else {
				*p_MPPotion -= used;
				std::cout << "MP Potion used: " << used << std::endl;
				std::cout << "MP Potion remain: " << *p_MPPotion << std::endl;
			}
		}
		else {
			*p_MPPotion += count;
			std::cout << "MP Potion remain: " << *p_MPPotion << std::endl;
		}
	}
}


int main(void) {
	int myCharacterStatus[STATUS_COUNT] = { 0, };

	do {
		std::cout << "Enter HP and MP: ";
		std::cin >> myCharacterStatus[HP] >> myCharacterStatus[MP];
		if ( !isVaild(myCharacterStatus[HP], myCharacterStatus[MP], 50) ) {	
			std::cout << "HP and MP must be greater than 50. Enter again." << std::endl;
		}
	} while ( !isVaild(myCharacterStatus[HP], myCharacterStatus[MP], 50) );

	do {
		std::cout << "Enter ATTACK and ARMOR: ";
		std::cin >> myCharacterStatus[ATTACK] >> myCharacterStatus[ARMOR];
		if (!isVaild(myCharacterStatus[ATTACK], myCharacterStatus[ARMOR], 0)) {
			std::cout << "ATTACK and ARMOR must be greater than 0. Enter again." << std::endl;
		}
	} while (!isVaild(myCharacterStatus[ATTACK], myCharacterStatus[ARMOR], 0));

	std::cout << "* You recieved the HP and MP potions: 5 each." << std::endl;

	int myCharacterPotion[POTION_COUNT] = { 0, };
  
	setPotion(5, &myCharacterPotion[HP], &myCharacterPotion[MP]);

	std::cout << "============================" << std::endl;

	int flag;
	do {
		std::cout << "1. HP up / 2. MP up / 3. ATTACK up / 4. ARMOR up / 5. Current Status / 6. Level up / 0. Exit" << std::endl;
		std::cout << "Enter the number: ";
		std::cin >> flag;
		switch (flag) {
		case 1:
		{
			int before = myCharacterPotion[HPPotion];
			setPotion(-1, &myCharacterPotion[HPPotion], nullptr);
			int used = before - myCharacterPotion[HPPotion];

			if (used > 0) {
				myCharacterStatus[HP] += 20;
			}
			std::cout << "Current HP: " << myCharacterStatus[HP] << std::endl;
			break;
		}
		case 2:
		{
			int before = myCharacterPotion[MPPotion];
			setPotion(-1, nullptr, &myCharacterPotion[MPPotion]);
			int used = before - myCharacterPotion[MPPotion];

			if (used > 0) {
				myCharacterStatus[MP] += 20;
			}
			std::cout << "Current MP: " << myCharacterStatus[MP] << std::endl;
			break;
		}
		case 3:
			myCharacterStatus[ATTACK] *= 2;
			std::cout << "ATTACK doubled." << std::endl
				<< "Current ATTACK: " << myCharacterStatus[ATTACK] << std::endl;
			break;

		case 4:
			myCharacterStatus[ARMOR] *= 2;
			std::cout << "ARMOR doubled." << std::endl
				<< "Current ARMOR: " << myCharacterStatus[ARMOR] << std::endl;
			break;

		case 5:
			std::cout << "HP : " << myCharacterStatus[HP] << ", MP : " << myCharacterStatus[MP]
				<< ", ATTACK : " << myCharacterStatus[ATTACK] << ", ARMOR : " << myCharacterStatus[ARMOR] 
				<< ", SHIELD: " << myCharacterStatus[SHIELD] << ", LEVEL : " << myCharacterStatus[LEVEL] << std::endl;
			break;

		case 6:
			std::cout << "Level Up! Received HP and MP potion, 1 each." << std::endl;
			setPotion(1, &myCharacterPotion[HP], &myCharacterPotion[MP]);
			myCharacterStatus[LEVEL] += 1;
			break;

		default:
			std::cout << "Choose a number between 1 and 6, or 0 to exit." << std::endl;
			break;
		}
    
		myCharacterStatus[SHIELD] += 1;		// +1 per input
		std::cout << std::endl;
	} while (flag != 0);

	return 0;
}
