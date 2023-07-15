#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

int minimumSafTime(int n, const std::vector<int>& tasks) {
    std::unordered_map<int, int> count;
    count.reserve(tasks.size()); // preallocate memory for better performance

    // count the frequency of each task
    int u = 0;
    for (const auto& task : tasks) {
        count.emplace(u++, task);
    }

    // find the maximum frequency of a task
    int max_count = 0;
    for (const auto& [_, freq] : count) {
        max_count = std::max(max_count, freq);
    }

    // calculate the minimum safe time
    int ans = (max_count - 1) * (n + 1);
    for (const auto& [_, freq] : count) {
        if (freq == max_count) {
            ans++;
        }
    }

    return std::max(static_cast<int>(tasks.size()), ans);
}

int main() {
    int m, n;
    std::cin >> m >> n;

    // check for invalid input values
    if (m <= 0 || n <= 0) {
        std::cerr << "Invalid input values!" << std::endl;
        return 1;
    }

    std::vector<int> tasks;
    tasks.reserve(n); // preallocate memory for better performance

    // read in the tasks
    int task;
    for (int i = 0; i < n; i++) {
        std::cin >> task;
        tasks.emplace_back(task);
    }

    int result = minimumSafTime(m, tasks);
    std::cout << result << std::endl;
    return 0;
}
