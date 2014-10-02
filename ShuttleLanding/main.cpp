#include <iostream>
// #include "stdio.h"
#include <cmath>
#include "SpaceObject.h"

using namespace std;

// Masses of objects in [kg]
const double solar_mass = 198855E30;
const double earth_mass = 597219E24;
const double shuttle_mass = 2E6;

// Radiuses of objects in [m]
const double solar_radius = 6955E8;
const double earth_radius = 6371E3;
const double shuttle_radius = 50;

// Gravitational constant [N * m^ * kg^(-2)]
const double G = 6.6738480E-11;

double count_force(SpaceObject object_1, SpaceObject object_2)
{
    // Calculating a distance between two objects by the formula
    // r = sqrt((x1-x2)^2 + (y1-y2)^2 + (z1-z2)^2)
    double distance_12 = sqrt(pow((object_1.get_x()-object_2.get_x()), 2) +
                             pow((object_1.get_y()-object_2.get_y()), 2) +
                             pow((object_1.get_z()-object_2.get_z()), 2));

    // Calculating the force using Newton's law of universal gravitation
    double force = (G * object_1.get_mass() * object_2.get_mass()) / pow(distance_12, 2);

    return force;
}

int main()
{
    // Distances from Sun to objects [m]
    double earth_distance = 1496E8;
    double shuttle_distance = 1498E8;

    // Defining our objects
    SpaceObject Sun;
    SpaceObject Earth;
    SpaceObject Shuttle;

    // Creating objects by setting x, y, z, mass
    Sun.create_object(0, 0, 0, solar_mass);
    Earth.create_object(earth_distance, 0, 0, earth_mass);
    Shuttle.create_object(shuttle_distance, 0, 0, shuttle_mass);

    count_force(Sun, Earth);

    return 0;
}
