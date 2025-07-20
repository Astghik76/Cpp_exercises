#include <iostream>

int main() {
    int N, M;
    std::cout << "Enter width (N) and height (M): ";
    std::cin >> N >> M;

    // Առաջին տող
    std::cout << "/";
    for (int i = 0; i < N - 2; i++) {
        std::cout << "*";
    }
    std::cout << "\\" << std::endl;

    // Միջին տողերը
    for (int j = 0; j < M - 2; j++) {
        std::cout << "*";
        for (int i = 0; i < N - 2; i++) {
            std::cout << " ";
        }
        std::cout << "*" << std::endl;
    }

    // Վերջին տող
    std::cout << "\\";
    for (int i = 0; i < N - 2; i++) {
        std::cout << "*";
    }
    std::cout << "/" << std::endl;

    return 0;
}

