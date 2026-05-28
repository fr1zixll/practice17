#include <iostream>
#include <cmath>
#include <random>
#include <ctime>
#include <string>

struct Point{
    float* arr1 = new float[2];

    float* arr2 = new float[2];

    float* arr3 = new float[2];

    float* arr4 = new float[2];

    ~Point() {
        delete[] arr1;
        delete[] arr2;
        delete[] arr3;
        delete[] arr4;
    }
};

Point p;

void rand_array(){

    for (int i = 0; i < 2; i++){

        p.arr1[i] = rand() % 100;

        std::string input = std::to_string(p.arr1[i]);

        try {
            size_t pos;

            std::stof(input, &pos);

            if (pos != input.length()) {
                throw std::invalid_argument("Extra character");
            }
        }

        catch (...) {
            std::cout << "Error!\n";
        }
    }

    for (int i = 0; i < 2; i++){
        std::cout << p.arr1[i] << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < 2; i++){

        p.arr2[i] = rand() % 100;

        std::string input = std::to_string(p.arr2[i]);

        try {
            size_t pos;

            std::stof(input, &pos);

            if (pos != input.length()) {
                throw std::invalid_argument("Extra character");
            }
        }

        catch (...) {
            std::cout << "Error!\n";
        }
    }

    for (int i = 0; i < 2; i++){
        std::cout << p.arr2[i] << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < 2; i++){

        p.arr3[i] = rand() % 100;

        std::string input = std::to_string(p.arr3[i]);

        try {
            size_t pos;

            std::stof(input, &pos);

            if (pos != input.length()) {
                throw std::invalid_argument("Extra character");
            }
        }

        catch (...) {
            std::cout << "Error!\n";
        }
    }

    for (int i = 0; i < 2; i++){
        std::cout << p.arr3[i] << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < 2; i++){

        p.arr4[i] = rand() % 100;

        std::string input = std::to_string(p.arr4[i]);

        try {
            size_t pos;

            std::stof(input, &pos);

            if (pos != input.length()) {
                throw std::invalid_argument("Extra character");
            }
        }

        catch (...) {
            std::cout << "Error!\n";
        }
    }

    for (int i = 0; i < 2; i++){
        std::cout << p.arr4[i] << " ";
    }

    std::cout << std::endl;
}

void user_coord(){

    std::cout << "Point 1:\n";
    for (int i = 0; i < 2; i++) {

        std::string input;

        std::cout << "arr1[" << i << "] = ";

        while (true) {

            std::cin >> input;

            try {

                size_t pos;

                p.arr1[i] = std::stof(input, &pos);

                if (pos != input.length()) {
                    throw std::invalid_argument("Extra character");
                }

                break;
            }

            catch (...) {

                std::cout << "Error! Try again: ";
            }
        }
    }

    std::cout << "\nPoint 1: ";
    for (int i = 0; i < 2; i++) {
        std::cout << p.arr1[i] << " ";
    }

    std::cout << "\nPoint 2:\n";
    for (int i = 0; i < 2; i++) {

        std::string input;

        std::cout << "arr2[" << i << "] = ";

        while (true) {

            std::cin >> input;

            try {

                size_t pos;

                p.arr2[i] = std::stof(input, &pos);

                if (pos != input.length()) {
                    throw std::invalid_argument("Extra character");
                }

                break;
            }

            catch (...) {

                std::cout << "Error! Try again: ";
            }
        }
    }

    std::cout << "\nPoint 2: ";
    for (int i = 0; i < 2; i++) {
        std::cout << p.arr2[i] << " ";
    }

    std::cout << "\nPoint 3:\n";
    for (int i = 0; i < 2; i++) {

        std::string input;

        std::cout << "arr3[" << i << "] = ";

        while (true) {

            std::cin >> input;

            try {

                size_t pos;

                p.arr3[i] = std::stof(input, &pos);

                if (pos != input.length()) {
                    throw std::invalid_argument("Extra character");
                }

                break;
            }

            catch (...) {

                std::cout << "Error! Try again: ";
            }
        }
    }

    std::cout << "\nPoint 3: ";
    for (int i = 0; i < 2; i++) {
        std::cout << p.arr3[i] << " ";
    }

    std::cout << "\nPoint 4:\n";
    for (int i = 0; i < 2; i++) {

        std::string input;

        std::cout << "arr4[" << i << "] = ";

        while (true) {

            std::cin >> input;

            try {

                size_t pos;

                p.arr4[i] = std::stof(input, &pos);

                if (pos != input.length()) {
                    throw std::invalid_argument("Extra character");
                }

                break;
            }

            catch (...) {

                std::cout << "Error! Try again: ";
            }
        }
    }

    std::cout << "\nPoint 4: ";
    for (int i = 0; i < 2; i++) {
        std::cout << p.arr4[i] << " ";
    }

    std::cout << std::endl;
}

void examination(){
    std::string input;
    int number;

    while (true) {
        std::cout << "Put your number:: ";
        std::cin >> input;

        try {
            size_t pos;

            number = std::stoi(input, &pos);

            if (pos != input.length()) {
                throw std::invalid_argument("Extra character");
            }

            std::cout << "Your number: " << number << std::endl;
            break;
        }
        catch (...) {
            std::cout << "Error! Try again.\n";
        }
    }
}

void menu(int& choice){

    std::cout << "___MENU:___" << std::endl;

    std::cout << "Enter your choice: \n" << "\n Random coordinates - 1" << "\n Put your some coordinates - 2" << std::endl;

    std::string input;

    while (true) {

        std::cin >> input;

        try {

            size_t pos;

            choice = std::stoi(input, &pos);

            if (pos != input.length()) {
                throw std::invalid_argument("Extra character");
            }

            break;
        }

        catch (...) {

            std::cout << "Error! Try again: ";
        }
    }

    switch(choice){
        case 1:
            rand_array();
            break;

        case 2:
            user_coord();
            break;

        default:
            std::cout << "Error!";
    }
}

int main(){

    srand(time(0));

    int choice = 0;

    menu(choice);

    return 0;
}