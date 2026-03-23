// https://www.notion.so/C-32caafc27d22802db095dcea8b8e86af?source=copy_link
// Dynamic Array based Vector-style Inventory System

#include <iostream>
#include <string>

class Item {
private:
	std::string name_;
	int price_;

public:
	Item() : name_(""), price_(0) {}

	Item(const std::string& name, int price)
		: name_(name), price_(price) {}

	void SetName(std::string str) {
		name_ = str;
	}

	const std::string& GetName() const {
		return name_;
	}

	void SetPrice(int iprice) {
		price_ = iprice;
	}

	int GetPrice() const {
		return price_;
	}

	void Clear()
	{
		name_ = "";
		price_ = 0;
	}

};

template <typename T>
class Inventory {
private:
	T* pItems_;
	int capacity_;
	int size_;

public:
	Inventory() : capacity_(10), size_(0) {
		pItems_ = new T[capacity_];
	}

	~Inventory() {
		delete[] pItems_;
	}


	void AddItem(const T& item) {
		std::cout << "Adding item: " << item.GetName() << " ... ";

		if (GetCapacity() == GetSize()) {
			std::cout << "Failed to add item. Inventory is full. Double Inventory capacity.";

			int newCap = GetCapacity() * 2;
			T* tempItems_ = new T[newCap];

			for (int i = 0; i < capacity_; ++i) {
				tempItems_[i] = pItems_[i];
			}

			delete[] pItems_;
			pItems_ = tempItems_;
			tempItems_ = nullptr;
			capacity_ = newCap;
		}

		pItems_[size_] = item;
		size_++;
		std::cout << "  item added: " << item.GetName() << std::endl;
	}

	void RemoveLastItem() {
		if (GetSize() == 0) {
			std::cout << "Inventory is empty.\n";
		}
		else {
			size_--;
		}
	}

	void PrintAllItems() {
		std::cout << "Item Remain: ";

		for (int i = 0; i < GetSize(); ++i) {
			std::cout << pItems_[i].GetName() << " " << pItems_[i].GetPrice() << "G  ";
		}
		std::cout << std::endl;
	}

	void SetCapacity(int cap) {
		capacity_ = cap;
	}
	int GetCapacity() const {
		return capacity_;
	}

	void SetSize(int num) {
		size_ = num;
	}
	int GetSize() const {
		return size_;
	}
};

int main(void) {
	Inventory<Item> myInventory;

	for (int i = 1; i <= 10; ++i) {
		Item myItem("Item" + std::to_string(i), i * 100);
		myInventory.AddItem(myItem);
	}

	Item tempItem("Item99", 9999);
	myInventory.AddItem(tempItem);

	std::cout << "Inventory size: " << myInventory.GetSize()
		<< ".  Inventory Capacity: " << myInventory.GetCapacity() << std::endl;
	myInventory.PrintAllItems();


	for (int i = 0; i < 10; ++i) {
		std::cout << "Removing Last item...\n";
		myInventory.RemoveLastItem();
	}

	myInventory.PrintAllItems();

	return 0;
}
