#include <iostream>
#include <chrono>
#include <thread>

enum Light {
    RED,
    YELLOW,
    GREEN
};

void changeLight(Light& currentLight) {
    switch (currentLight) {
        case RED:
            std::cout << "Red light" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(5));
            currentLight = GREEN;
            break;
        case YELLOW:
            std::cout << "Yellow light" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2));
            currentLight = RED;
            break;
        case GREEN:
            std::cout << "Green light" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(5));
            currentLight = YELLOW;
            break;
    }
}

int main() {
    Light currentLight = RED;
    while (true) {
        changeLight(currentLight);
    }
    return 0;
}
