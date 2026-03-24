// https://www.notion.so/C-32daafc27d228097b338e25d745e1e1e?source=copy_link
// Potion crafting alchemist workshop (Recipe system)

#include <iostream>
#include <vector>
#include <string>

class PotionRecipe {
private:
    std::string potionName;
    std::vector<std::string> ingredients;

public:

    PotionRecipe(const std::string& name, const std::vector<std::string>& ingredients)
        : potionName(name), ingredients(ingredients) {
    }

    std::string GetpotionName() const {
        return potionName;
    }
    void SetpotionName(const std::string& name) {
        potionName = name;
    }

    const std::vector<std::string>& Getingredients() const {
        return ingredients;
    }

    void Setingredients(const std::vector<std::string>& ingredient) {
        ingredients = ingredient;
    }
};


class AlchemyWorkshop {
private:
    std::vector<PotionRecipe> recipes;

public:
    void addRecipe(const std::string& name, const std::vector<std::string>& ingredients) {
        recipes.push_back(PotionRecipe(name, ingredients));
        std::cout << ">> New recipe: '" << name << "' has been added." << std::endl;
    }

    void displayAllRecipes() const {
        if (recipes.empty()) {
            std::cout << "No recipes added yet." << std::endl;
            return;
        }

        std::cout << "\n--- [ Recipes List ] ---" << std::endl;
        for (size_t i = 0; i < recipes.size(); ++i) {
            std::cout << "- Recipe: " << recipes[i].GetpotionName() << std::endl;
            std::cout << "  > ingredients needed: ";

            const std::vector<std::string>& temp = recipes[i].Getingredients();
            int j = 0;
            for (std::string ingredient : temp) {
                ++j;
                std::cout << ingredient;
                if (j < temp.size()) {
                    std::cout << ", ";
                }
            }
            std::cout << std::endl;
        }
        std::cout << "---------------------------\n";
    }

    void searchbyName(const std::string& name) {
        bool flag = false;
        for (size_t i = 0; i < recipes.size(); ++i) {
            if (recipes[i].GetpotionName().find(name) != std::string::npos) {
                std::cout << "Recipe name: " << recipes[i].GetpotionName() << std::endl;
                flag = true;
            }

            for (const auto& ingredient : recipes[i].Getingredients()) {
                int j = 0;
                if (ingredient.find(name) != std::string::npos) {
                    ++j;
                    std::cout << "Recipe name: " << recipes[i].GetpotionName() << std::endl;
                    flag = true;
                }
            }
        }

        if (!flag) {
            std::cout << "No such recipe\n";
        }
    }
};

int main() {

    AlchemyWorkshop myWorkshop;

    while (true) {
        std::cout << "\nAlchemist Workshop System" << std::endl;
        std::cout << "1. Add a recipe" << std::endl;
        std::cout << "2. Show entire recipes" << std::endl;
        std::cout << "3. Search recipes" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Choose: ";

        int choice;
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cout << "Invalid input. Enter the number." << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        if (choice == 1) {
            std::string name;
            std::cout << "Recipe: ";
            std::cin.ignore(10000, '\n');
            std::getline(std::cin, name);

            std::vector<std::string> ingredients_input;
            std::string ingredient;
            std::cout << "Enter the ingredients needed. (Type 'End' to end)" << std::endl;

            while (true) {
                std::cout << "Ingredient: ";
                std::getline(std::cin, ingredient);

                if (ingredient == "End") {
                    break;
                }
                ingredients_input.push_back(ingredient);
            }

            if (!ingredients_input.empty()) {
                myWorkshop.addRecipe(name, ingredients_input);
            }
            else {
                std::cout << ">> Canceled adding the recipe since there's no input ingredient." << std::endl;
            }

        }
        else if (choice == 2) {
            myWorkshop.displayAllRecipes();

        }
        else if (choice == 3) {
            std::cout << "Type name of recipe or ingredient: ";
            std::string name;
            std::cin >> name;
            myWorkshop.searchbyName(name);

        }
        else if (choice == 4) {
            std::cout << "Closing Workshop..." << std::endl;
            break;

        }
        else {
            std::cout << "Wrong choice. Try again." << std::endl;
        }
    }

    return 0;
}
