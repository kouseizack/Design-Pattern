#include "vehicle.hpp"
#include "car.hpp"
#include "bike.hpp"

#include <iostream>
using namespace std;

class vehicle_factory {
    public:
        static vehicle* factory_vehicle(string vehicle_type);
};
