#include "vehicle.hpp"
#include <string.h>
#include "factory.hpp"
#include <iostream>
using namespace std;

int main(){
    string vehicle_type;
    std::cin>>vehicle_type;
    vehicle *v;
    v = vehicle_factory::factory_vehicle(vehicle_type);

    v->create_vehicle();
    return 0;
}