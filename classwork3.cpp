#include <iostream>
#include <string>
int calculateStandardFee(int weightKg){
    if (weightKg < 1 || weightKg > 20)
        return -1;
    return 200 +weightKg *30;
}
int calculateExperessFee(int weightKg){
    if(weightKg < 1 || weightKg > 15)
        return -1;
    return 400 + weightKg * 50;
}
int main(){
    const int weight{18};
    std::cout << "Standard: " << calculateStandardFee(weight) << std::endl;
    std::cout << "Express: " << calculateExperessFee(weight) << std::endl;
    return 0;
}