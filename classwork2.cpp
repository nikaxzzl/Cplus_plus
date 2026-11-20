#include <iostream>
#include <string>

struct car {
    std::string mark;
    unsigned probek;
    int god;
    std::string tup_dvigatela;
};

enum class num_car {id1, id2, id3, id4, id5};

void cars() {
    std::string id_car;
    std::cin >> id_car;

    if (id_car == "id1") {
        car bmw;
        bmw.mark = "BMW";
        bmw.probek = 111;
        bmw.god = 2007;
        bmw.tup_dvigatela = "inverter motor";
        std::cout << "Marka: " << bmw.mark << std::endl << "Probek: " << bmw.probek << std::endl << "God: " << bmw.god << std::endl  << "Tip motora: " << bmw.tup_dvigatela << std::endl;
    }
    else if (id_car == "id2") {
        car volvo;
        volvo.mark = "Volvo";
        volvo.probek = 11;
        volvo.god = 2018;
        volvo.tup_dvigatela = "inverter motor";
       std::cout << "Marka: " << volvo.mark << std::endl << "Probek: " << volvo.probek << std::endl << "God: " << volvo.god << std::endl  << "Tip motora: " << volvo.tup_dvigatela << std::endl;
    }
    else if (id_car == "id3") {
        car toyto;
        toyto.mark = "toyto";
        toyto.probek = 121;
        toyto.god = 2020;
        toyto.tup_dvigatela = "inverter motor";
        std::cout << "Marka: " << toyto.mark << std::endl << "Probek: " << toyto.probek << std::endl << "God: " << toyto.god << std::endl  << "Tip motora: " << toyto.tup_dvigatela << std::endl;
    }
    else if (id_car == "id4") {
        car lada;
        lada.mark = "lada";
        lada.probek = 11;
        lada.god = 2008;
        lada.tup_dvigatela = "inverter motor";
        std::cout << "Marka: " << lada.mark << std::endl << "Probek: " << lada.probek << std::endl << "God: " << lada.god << std::endl  << "Tip motora: " << lada.tup_dvigatela << std::endl;
    }
    else if (id_car == "id5") {
        car gelik;
        gelik.mark = "gelik";
        gelik.probek = 111;
        gelik.god = 2008;
        gelik.tup_dvigatela = "inverter motor";
        std::cout << "Marka: " << gelik.mark << std::endl << "Probek: " << gelik.probek << std::endl << "God: " << gelik.god << std::endl  << "Tip motora: " << gelik.tup_dvigatela << std::endl;
    }
    else {
        std::cout << "unknown id\n";
    }
}

int main() {
    cars();
    return 0;
}