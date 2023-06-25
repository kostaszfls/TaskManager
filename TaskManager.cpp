// TaskManager.cpp

#include "TaskManager.h"

void TaskManager::createTask(const std::string& name, const std::string& description, int priority) {
    tasks.emplace_back(name, description, priority);
}

void TaskManager::displayTasks() {
    std::cout << "Task List:" << std::endl;
    std::cout << "-------------------------" << std::endl;
    for (const auto& task : tasks) {
        std::cout << "Task Name: " << task.name << std::endl;
        std::cout << "Description: " << task.description << std::endl;
        std::cout << "Priority: " << task.priority << std::endl;
        std::cout << "Status: " << (task.completed ? "Completed" : "Pending") << std::endl;
        std::cout << "-------------------------" << std::endl;
    }
}

void TaskManager::markTaskAsCompleted(int index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].completed = true;
        std::cout << "Task marked as completed." << std::endl;
    } else {
        std::cout << "Invalid task index. Please try again." << std::endl;
    }
}

void TaskManager::sortTasksByPriority() {
    std::sort(tasks.begin(), tasks.end(), [](const Task& task1, const Task& task2) {
        return task1.priority > task2.priority;
    });
}

void TaskManager::saveTasksToFile(const std::string& filename) {
    std::ofstream file(filename);

    if (file.is_open()) {
        for (const auto& task : tasks) {
            file << task.name << "," << task.description << "," << task.priority << "," << task.completed << std::endl;
        }

        file.close();
        std::cout << "Tasks saved to file successfully!" << std::endl;
    } else {
        std::cout << "Error: Unable to open file for saving tasks." << std::endl;
    }
}

void TaskManager::loadTasksFromFile(const std::string& filename) {
    std::ifstream file(filename);

    if (file.is_open()) {
        tasks.clear();

        std::string line;
        while (std::getline(file, line)) {
            std::string name, description;
            int priority;
            bool completed;

            // Parse the line and extract task information
            size_t commaPos1 = line.find(',');
            size_t commaPos2 = line.find(',', commaPos1 + 1);
            size_t commaPos3 = line.find(',', commaPos2 + 1);

            name = line.substr(0, commaPos1);
            description = line.substr(commaPos1 + 1, commaPos2 - commaPos1 - 1);
            priority = std::stoi(line.substr(commaPos2 + 1, commaPos3 - commaPos2 - 1));
            completed = line.substr(commaPos3 + 1) == "1";

            tasks.emplace_back(name, description, priority);
            tasks.back().completed = completed;
        }

        file.close();
        std::cout << "Tasks loaded from file successfully!" << std::endl;
    } else {
        std::cout << "Error: Unable to open file for loading tasks." << std::endl;
    }
}
