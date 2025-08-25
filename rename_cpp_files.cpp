#include <iostream>
#include <filesystem>
#include <vector>
#include <algorithm>
#include <chrono>

namespace fs = std::filesystem;

// Function to get creation time of a file (cross-platform)
std::time_t getCreationTime(const fs::path& filePath) {
    auto ftime = fs::last_write_time(filePath); // Use last_write_time if creation_time is unavailable
    auto sctp = std::chrono::time_point_cast<std::chrono::system_clock::duration>(
        ftime - fs::file_time_type::clock::now() + std::chrono::system_clock::now()
    );
    return std::chrono::system_clock::to_time_t(sctp);
}

int main() {
    std::string directory = "."; // Current directory (change if needed)
    std::vector<fs::path> cppFiles;

    // Collect all .cpp files
    for (const auto& entry : fs::directory_iterator(directory)) {
        if (entry.path().extension() == ".cpp") {
            cppFiles.push_back(entry.path());
        }
    }

    // Sort files by creation time (oldest first)
    std::sort(cppFiles.begin(), cppFiles.end(), [](const fs::path& a, const fs::path& b) {
        return getCreationTime(a) < getCreationTime(b);
    });

    // Rename files with prefix 1_, 2_, etc.
    int counter = 1;
    for (const auto& file : cppFiles) {
        fs::path newName = file.parent_path() / (std::to_string(counter) + "_" + file.filename().string());
        
        try {
            fs::rename(file, newName);
            std::cout << "Renamed file: " << counter++ << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error renaming " << file << ": " << e.what() << std::endl;
        }
    }

    return 0;
}