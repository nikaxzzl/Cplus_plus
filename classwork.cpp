#include <iostream>
#include <string>

int main() {

// Задание №1
    // std::string name;
    // std::string group;
    // int age {16};
    // double teaching_experienc {1.5};
    // bool project_readiness = false;
    // const int Kol_lesson = 2;
    // int completion_counter{0};
    // int savedCompleted {completion_counter};
    // std::cout << "Name: ";
    // std::getline(std::cin >> std::ws, name);
    // std::cout << "Group: ";
    // std::getline(std::cin >> std::ws, group);

    // std::cout << "\nSTUDENT PROFILE \n"  << "Name: " << name << "\n" << "Group: " << group << "\n" <<"Course: "<< "C++ " <<"\n" << "Age: " << age << "\n"<< "Experience: " << teaching_experienc << " years\n" << "Ready: " << std::boolalpha << project_readiness << "\n" << "Lessons: " << Kol_lesson << "\n";
    // std::cout << "Completed before: " << completion_counter << "\n";
    // completion_counter = 3;
    // std::cout << "Completed after:  " << completion_counter << "\n";
    // std::cout << "Saved completed:  " << savedCompleted  << "\n";
            
// Задание №2
    // std::string customer_name {};
    // std::string dish_name {};
    // const double portion_price {145.5};
    // int portions {3};
    // const double service_fee {20.0};
    // bool paid {false};

    // std::cout << "Customer: ";
    // std::getline(std::cin >> std::ws, customer_name);
    // std::cout << "Dish: ";    
    // std::getline(std::cin >> std::ws, dish_name);

    // std::cout << "\nCAFE ORDER\n" << "Name: " <<  customer_name << "\n" << "Dish: "<< dish_name << "\n" << "Portion price: " << portion_price << " RUB\n" << "Portions: " << portions << "\n" << "Subtotal: " << portion_price * portions << " RUB\n" << "Service: " << service_fee << " RUB\n" << "Total: " << portion_price * portions + service_fee << " RUB\n" << "Paid: " << std::boolalpha <<paid;
    
// Задание №3
    // std::string name {};
    // std::string name_sob {};
    // const int price_one {200};
    // int kol_bulet {3};
    // const int ser_free {25};
    // int Kol_v_b {0};
    // bool confirmation {false} ;
    // int savedIssued {Kol_v_b};
    // std::cout << "Organizer: ";
    // std::getline(std::cin >> std::ws, name);
    // std::cout << "Event: ";
    // std::getline(std::cin >> std::ws, name_sob);  
    // int total = price_one * kol_bulet + ser_free;
    // std::cout << "\nIT MEETUP TICKET\n" << "Organizer: IT Academy\n" << "Participant: " << name << "\n" << "Event: \"" << name_sob << "\"\n" << "Ticket price: " << price_one << " RUB\n" << "Tickets: " << kol_bulet << "\n" << "Service fee: " << ser_free << " RUB\n" << "Total: " << total << " RUB\n" << "Issued before: " << Kol_v_b << "\n" << "Confirmed before: " << std::boolalpha << confirmation << "\n";
    // Kol_v_b = kol_bulet; confirmation = true;
    // std::cout << "Issued after: " << Kol_v_b << "\n" << "Confirmed after: " << confirmation << "\n" << "Saved issued: " << savedIssued << "\n";

// инкримент ++
// дикримент --
//условная конструкция - это 
// using std::cout
// using std::cin
// switch (выражение){}
// case згач1: инструкция1
// default: инструкция
// каждый case заканчивается break
    int num1 {};
    int num2 {};
    std::string chet {};
    std::cout << "Введите число №1: ";
    std::cin >> num1;
    std::cout << "Введите число №2: ";
    std::cin >>num2;
    std::cout << "Введите действие которое хотите: ";
    std::cin >> chet;
    if (chet == "+"){
        std::cout << "Сложение: " << num1 + num2;
    }
    else if  (chet == "*"){
        std::cout << "Умножение: " << num1 * num2;
    }
    else if (chet == "-"){
        std::cout << "Вычитание: " << num1 - num2;
    }
    else if (chet == "/"){
        if (num2 == 0){
            std::cout << "Ошибка";
        }
        else {
        std::cout << "Деление: " <<num1 / num2;
        }
    }
    return 0;



}