#include <iostream>
#include <limits>
#include "TaskManager.h"

int main() {
    TaskManager taskManager;
    char choice;

    while (true) {
        std::cout << "Task Manager Menu" << std::endl;
        std::cout << "1. Create Task" << std::endl;
        std::cout << "2. View Tasks" << std::endl;
        std::cout << "3. Mark Task as Completed" << std::endl;
        std::cout << "4. Save Tasks to File" << std::endl;
        std::cout << "5. Load Tasks from File" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "Enter your choice (1-6): ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining characters and newline

        if (choice == '1') {
            std::string name, description;
            int priority;

            std::cout << "Enter task name: ";
            std::getline(std::cin, name);

            std::cout << "Enter task description: ";
            std::getline(std::cin, description);

            std::cout << "Enter task priority (1-5): ";
            std::cin >> priority;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining characters and newline

            taskManager.createTask(name, description, priority);
            std::cout << "Task created successfully!" << std::endl;
        }
        else if (choice == '2') {
            taskManager.displayTasks();
        }
        else if (choice == '3') {
            int index;
            std::cout << "Enter the index of the task to mark as completed: ";
            std::cin >> index;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining characters and newline

            taskManager.markTaskAsCompleted(index);
        }
        else if (choice == '4') {
            std::string filename;
            std::cout << "Enter the filename to save the tasks to: ";
            std::getline(std::cin, filename);

            taskManager.saveTasksToFile(filename);
            std::cout << "Tasks saved to file successfully!" << std::endl;
        }
        else if (choice == '5') {
            std::string filename;
            std::cout << "Enter the filename to load the tasks from: ";
            std::getline(std::cin, filename);

            taskManager.loadTasksFromFile(filename);
            std::cout << "Tasks loaded from file successfully!" << std::endl;
        }
        else if (choice == '6') {
            std::cout << "Exiting the Task Manager application. Goodbye!" << std::endl;
            break; // Exit the loop and terminate the program
        }
        else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}
