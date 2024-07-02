#include <iostream>
#include <fstream>

int main() {
    std::string filename;
    std::cout << "Please enter file name (example 'test.cpp') ::: >>> ";
    std::cin >> filename;
    std::ofstream outputFile(filename); // Создаем объект ofstream и открываем файл для записи

    if (!outputFile) {
        std::cerr << "Failed to create file!\n";
        return 1;
    }

    // Файл успешно создан и открыт для записи
    std::cout << "File " << filename << " created successfully!\n";

    // Закрываем файл после использования
    outputFile.close();

    return 0;
}
