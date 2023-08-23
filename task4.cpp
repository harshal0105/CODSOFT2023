//to do list

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class ToDoList {
private:
    std::vector<std::string> tasks;

public:
    void addTask(const std::string &task) {
        tasks.push_back(task);
        std::cout << "Task added: " << task << std::endl;
    }

    void displayTasks() {
        if (tasks.empty()) {
            std::cout << "No tasks in the to-do list." << std::endl;
        } else {
            std::cout << "Tasks in the to-do list:" << std::endl;
            for (const std::string &task : tasks) {
                std::cout << "- " << task << std::endl;
            }
        }
    }
};

int main() {
    ToDoList toDoList;
    int choice;
    std::string task;

    do {
        cout << endl;
        std::cout << "To-Do List Application" << std::endl;
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. Display Tasks" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cout << endl;

        switch (choice) {
            case 1:
                std::cout << "Enter task: ";
                std::cin.ignore(); // Clear the newline from the buffer
                std::getline(std::cin, task);
                toDoList.addTask(task);
                break;

            case 2:
                toDoList.displayTasks();
                break;

            case 3:
                std::cout << "Exiting the application." << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please enter a valid option." << std::endl;
                break;
        }

    } while (choice != 3);

  return 0;
}