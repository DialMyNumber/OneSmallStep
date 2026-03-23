// https://www.notion.so/C-32caafc27d22802db095dcea8b8e86af?source=copy_link
// Vector based Inventory System

#include <iostream>
#include <vector>
#include <string>

class Item {
private:
	std::string name_;
	int price_;

public:
	Item() : name_(""), price_(0) {}

	Item(const std::string& name, int price)
		: name_(name), price_(price) {
	}

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
	std::vector<T> items;

public:
	Inventory() {}

	void AddItem(const T& item) {
		std::cout << "Adding item: " << item.GetName() << " ...";
		items.push_back(item);
		std::cout << "  item added: " << item.GetName() << std::endl;
	}

	void RemoveLastItem() {
		if (items.size() == 0) {
			std::cout << "Inventory is empty.\n";
		}
		else {
			std::cout << "Removing last item: " << items.back().GetName() << std::endl;
			items.pop_back();
		}
	}

	void PrintAllItems() {
		std::cout << "Item remain: ";
		for (const auto& item : items) {
			std::cout << item.GetName() << "  " << item.GetPrice() << "G  ";
		}
		std::cout << std::endl;
	}

	int GetCapacity() const {
		return items.capacity();
	}

	int GetSize() const {
		return items.size();
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
		myInventory.RemoveLastItem();
	}

	myInventory.PrintAllItems();

	return 0;
}
