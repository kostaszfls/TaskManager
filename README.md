# Task Manager v1.0

The Task Manager is a simple console-based application that allows users to manage their tasks. It provides features such as creating tasks, viewing tasks, marking tasks as completed, and saving tasks to a file for later use.

## Features

### 1. Create Task

Allows you to create a new task by providing a name, description, and priority. Tasks are stored in memory and can be accessed and modified throughout the session.

### 2. View Tasks

Displays a list of all the tasks, including their name, description, priority, and status (completed or pending). You can easily see an overview of all your tasks and their details.

### 3. Mark Task as Completed

Enables you to mark a task as completed based on its index in the task list. Once marked as completed, the status of the task will be updated accordingly.

### 4. Save Tasks to File

Allows you to save the tasks to a file for later use. You can choose a filename and store the tasks in a comma-separated format. This ensures that your tasks persist even after closing the application.

### 5. Load Tasks from File

Enables you to load tasks from a previously saved file. By providing the filename, you can retrieve and load tasks into the Task Manager, replacing any existing tasks.

## Prerequisites

To compile and run the Task Manager application, you need to have a C++ compiler installed on your machine, such as GCC or Clang.

## Getting Started

Follow these steps to compile and run the Task Manager application:

#### 1. Clone the repository:

$ git clone https://github.com/kostaszfls/TaskManager.git

#### 2. Navigate to the project directory:

$ cd task-manager

#### 3. Compile the source files:

$ g++ main.cpp TaskManager.cpp -o task-manager

#### 4. Run the application:

$ ./task-manager

#### 5. The application menu will be displayed. Follow the on-screen instructions to interact with the Task Manager.



## Future Enhancements

The Task Manager v1.0 provides core functionality for managing tasks. However, there are several possible enhancements that can be considered for future versions, including:

- User authentication: Implement a login system to allow multiple users to manage their tasks separately.
- Task filtering and sorting: Add options to filter and sort tasks based on priority, completion status, or other criteria.
- Task reminders: Implement reminders or notifications for upcoming or overdue tasks.
- Task deadlines: Allow users to set deadlines for tasks and receive alerts when nearing the due date.
- Data persistence: Explore database integration to provide long-term data storage and synchronization across multiple devices.
- Graphical user interface (GUI): Develop a graphical interface to enhance the user experience and provide more intuitive task management.

## Contributing

Contributions to the Task Manager application are welcome! If you find any bugs, have feature suggestions, or would like to contribute enhancements, please submit a pull request on the GitHub repository.

## License

The Task Manager application is released under the [MIT License](https://opensource.org/licenses/MIT). Feel free to modify and use it according to your needs.

