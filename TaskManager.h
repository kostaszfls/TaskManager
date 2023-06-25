// TaskManager.h

#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

struct Task {
    std::string name;
    std::string description;
    int priority;
    bool completed;

    Task(const std::string& taskName, const std::string& taskDescription, int taskPriority)
        : name(taskName), description(taskDescription), priority(taskPriority), completed(false) {}
};

class TaskManager {
public:
    void createTask(const std::string& name, const std::string& description, int priority);
    void displayTasks();
    void markTaskAsCompleted(int index);
    void sortTasksByPriority();
    void saveTasksToFile(const std::string& filename);
    void loadTasksFromFile(const std::string& filename);

private:
    std::vector<Task> tasks;
};
