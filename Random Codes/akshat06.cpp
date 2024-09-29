#include <iostream>
#include <list>
#include <vector>
#include <map>

void listOperations() {
    std::list<int> myList;
    int choice, element;

    do {
        std::cout << "\nList Operations Menu:" << std::endl;
        std::cout << "1. Insert Element" << std::endl;
        std::cout << "2. Delete Element" << std::endl;
        std::cout << "3. Display List" << std::endl;
        std::cout << "4. Exit List Operations" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter element to insert: ";
                std::cin >> element;
                myList.push_back(element);
                std::cout << "Element inserted into list." << std::endl;
                break;
            case 2:
                if (!myList.empty()) {
                    myList.pop_back();
                    std::cout << "Element deleted from list." << std::endl;
                } else {
                    std::cout << "List is empty. Cannot delete." << std::endl;
                }
                break;
            case 3:
                std::cout << "Elements in the list: ";
                for (const auto& el : myList) {
                    std::cout << el << " ";
                }
                std::cout << std::endl;
                break;
            case 4:
                std::cout << "Exiting List Operations." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 4);
}

void vectorOperations() {
    std::vector<int> myVector;
    int choice, element;

    do {
        std::cout << "\nVector Operations Menu:" << std::endl;
        std::cout << "1. Insert Element" << std::endl;
        std::cout << "2. Delete Element" << std::endl;
        std::cout << "3. Display Vector" << std::endl;
        std::cout << "4. Exit Vector Operations" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter element to insert: ";
                std::cin >> element;
                myVector.push_back(element);
                std::cout << "Element inserted into vector." << std::endl;
                break;
            case 2:
                if (!myVector.empty()) {
                    myVector.pop_back();
                    std::cout << "Element deleted from vector." << std::endl;
                } else {
                    std::cout << "Vector is empty. Cannot delete." << std::endl;
                }
                break;
            case 3:
                std::cout << "Elements in the vector: ";
                for (const auto& el : myVector) {
                    std::cout << el << " ";
                }
                std::cout << std::endl;
                break;
            case 4:
                std::cout << "Exiting Vector Operations." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 4);
}

void mapOperations() {
    std::map<int, std::string> myMap;
    int choice, key;
    std::string value;

    do {
        std::cout << "\nMap Operations Menu:" << std::endl;
        std::cout << "1. Insert Element" << std::endl;
        std::cout << "2. Delete Element" << std::endl;
        std::cout << "3. Display Map" << std::endl;
        std::cout << "4. Exit Map Operations" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter key to insert: ";
                std::cin >> key;
                std::cout << "Enter value to insert: ";
                std::cin >> value;
                myMap[key] = value;
                std::cout << "Element inserted into map." << std::endl;
                break;
            case 2:
                std::cout << "Enter key to delete: ";
                std::cin >> key;
                if (myMap.find(key) != myMap.end()) {
                    myMap.erase(key);
                    std::cout << "Element deleted from map." << std::endl;
                } else {
                    std::cout << "Key not found in map. Cannot delete." << std::endl;
                }
                break;
            case 3:
                std::cout << "Elements in the map:" << std::endl;
                for (const auto& pair : myMap) {
                    std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
                }
                break;
            case 4:
                std::cout << "Exiting Map Operations." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 4);
}

int main() {
    char option;
    do {
        std::cout << "\nChoose a container to perform operations:" << std::endl;
        std::cout << "1. List" << std::endl;
        std::cout << "2. Vector" << std::endl;
        std::cout << "3. Map" << std::endl;
        std::cout << "4. Exit Program" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> option;

        switch (option) {
            case '1':
                listOperations();
                break;
            case '2':
                vectorOperations();
                break;
            case '3':
                mapOperations();
                break;
            case '4':
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (option != '4');

    return 0;
}
