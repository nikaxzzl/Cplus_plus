#include <iostream>
namespace {
    int g_moisture{0};
    bool g_valveOpen{false};
    int g_operations{0};
    int g_waterUsed{0};
    const int max_operations {8};
    const int doOpen_moisture_max {60};
    const int pluse_moisture_max {85};
}

void statusPrint(){
    std::cout << "Valve open: " << g_valveOpen << std::endl << "Moisture: " << g_moisture << "%\n" <<  "Water used: " << g_waterUsed << " L\n";
}
int readMoisture(){
    std::cout << "Moisture: ";
    if (!(std::cin >> g_moisture))
    {
        std::cout << "Input error\n";
        return 1;
    }
    if (g_moisture < 0 || g_moisture > 100)
    {
        std::cout << "Invalid moisture\n";
        return 2;
    }
    return 0;
}
void doStatus(){
    ++g_operations;
    std::cout << "Status\n";
    statusPrint();
}
void doOpen(){
    if (g_valveOpen || g_moisture >= doOpen_moisture_max){
        std::cout << "Open denied\n";
        return;
    }
    g_valveOpen = true;
    ++g_operations;
    std::cout << "Valve opened\n";
    statusPrint();
}
void doClose(){
    g_valveOpen = false;
    ++g_operations;
    std::cout << "Valve closed\n";
    statusPrint();
}
void pulse(){
     if (g_valveOpen || g_moisture >= pluse_moisture_max) {
        std::cout << "Pulse denied\n";
        return;
    }
   g_moisture += 20;
   if (g_moisture > 100){
    g_moisture = 100;}
    g_waterUsed += 5;
    ++g_operations;
    std::cout << "Pulse completed\n";
   statusPrint();
}
int main()
{
    int error_cod = readMoisture();
    if (error_cod != 0){
        return error_cod;
    }
    std::cout << std::boolalpha;
    while (g_operations < max_operations)
    {
        int code{0};
        std::cout << "Action 0/1/2/3/4: ";
        if (!(std::cin >> code))
        {
            std::cout << "Input error\n";
            return 1;
        }

        if (code == 0)
        {
            break;
        }
        else if (code == 1)
        {
            doStatus();
        }
        else if (code == 2)
        {
            doOpen();
        }
        else if (code == 3)
        {
            doClose();
        }
        else if (code == 4)
        {
           pulse();
        }
        else
        {
            std::cout << "Unknown action\n";
        }
    }

    std::cout << "Operations: " << g_operations << "\n";
    std::cout << "Total water: " << g_waterUsed << " L\n";
    return 0;
}
