#include "factory.hpp"

vehicle* vehicle_factory::factory_vehicle(string type) {
    vehicle *v;
    if(type == "car") {
        v = new car();
    }
    else if(type == "bike") {
        v = new bike();
    }
    return v;
}