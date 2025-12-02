#include <iostream>
#include <chrono>
#include <thread>

void func() {
    std::chrono::time_point<std::chrono::high_resolution_clock> begin = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(std::chrono::milliseconds(20));


}

int main() {



    return 0;
}