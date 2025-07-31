#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

// Inline function to validate priority
inline bool isValidPriority(int priority) {
    return priority >= 1 && priority <= 5;
}

class TaskManager {
private:
    struct Task {
        std::string description;
        int priority; // 1 (highest) to 5 (lowest)
        Task(std::string desc, int pri) : description(desc), priority(pri) {}
    };
    
    std::vector<Task> tasks;

    // Helper function to sort tasks
    void sortTasks() {
        auto compareByPriority = [](const Task& a, const Task& b) {
            if (a.priority == b.priority) {
                return a.description < b.description;
            }
            return a.priority < b.priority;
        };
        std::sort(tasks.begin(), tasks.end(), compareByPriority);
    }

public:
    // Add task
    void addTask(const std::string& description, int priority) {
        auto validateInput = [](const std::string& desc, int pri) {
            return !desc.empty() && isValidPriority(pri);
        };

        if (validateInput(description, priority)) {
            tasks.emplace_back(description, priority);
            std::cout << "Task added: " << description << " (Priority: " << priority << ")\n";
        } else {
            std::cout << "Invalid input! Description cannot be empty and priority must be between 1 and 5.\n";
        }
    }

    // Display one task
    inline void displayTask(const Task& task) const {
        std::cout << "Task: " << task.description << ", Priority: " << task.priority << "\n";
    }

    // Display all tasks
    void displayTasks() const {
        if (tasks.empty()) {
            std::cout << "No tasks available.\n";
            return;
        }

        auto formatOutput = [](const Task& task) {
            std::string priorityStr;
            switch (task.priority) {
                case 1: priorityStr = " [Critical]"; break;
                case 2: priorityStr = " [High]"; break;
                case 3: priorityStr = " [Medium]"; break;
                case 4: priorityStr = " [Low]"; break;
                case 5: priorityStr = " [Very Low]"; break;
                default: priorityStr = " [Unknown]"; break;
            }
            return task.description + priorityStr + " (Priority: " + std::to_string(task.priority) + ")";
        };

        std::cout << "\nAll Tasks:\n";
        for (const auto& task : tasks) {
            std::cout << formatOutput(task) << "\n";
        }
    }

    // Sort and display tasks by priority
    void sortTasksByPriority() {
        sortTasks();
        std::cout << "Tasks sorted by priority.\n";
        displayTasks();
    }

    // Filter tasks by min priority
    void filterTasksByPriority(int minPriority) {
        if (!isValidPriority(minPriority)) {
            std::cout << "Invalid priority! Must be between 1 and 5.\n";
            return;
        }

        auto filterByPriority = [minPriority](const Task& task) {
            return task.priority >= minPriority;
        };

        std::cout << "\nTasks with priority " << minPriority << " or lower:\n";
        std::vector<Task> filteredTasks;
        std::copy_if(tasks.begin(), tasks.end(), std::back_inserter(filteredTasks), filterByPriority);

        if (filteredTasks.empty()) {
            std::cout << "No tasks found with priority " << minPriority << " or lower.\n";
        } else {
            for (const auto& task : filteredTasks) {
                displayTask(task);
            }
        }
    }
};

int main() {
    TaskManager tm;
    std::string description;
    int priority;
    int choice;

    do {
        std::cout << "\nTask Manager Menu:\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. Display All Tasks\n";
        std::cout << "3. Sort Tasks by Priority\n";
        std::cout << "4. Filter Tasks by Priority\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        std::cin.ignore(); // Clear newline from input buffer

        switch (choice) {
            case 1:
                std::cout << "Enter task description: ";
                std::getline(std::cin, description);
                std::cout << "Enter priority (1-highest to 5-lowest): ";
                std::cin >> priority;
                tm.addTask(description, priority);
                break;
            case 2:
                tm.displayTasks();
                break;
            case 3:
                tm.sortTasksByPriority();
                break;
            case 4:
                std::cout << "Enter minimum priority (1-highest to 5-lowest): ";
                std::cin >> priority;
                tm.filterTasksByPriority(priority);
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
