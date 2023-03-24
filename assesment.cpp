#include <iostream>
#include <string>
#include <vector>

using namespace std;

class vehicle
{
    string type;
    string brand;
    string model;
    string fuel;
    string origin;
    string status;

public:
    vehicle(string type, string brand, string model, string fuel, string origin, string status)
    {
        this->type = type;
        this->brand = brand;
        this->model = model;
        this->fuel = fuel;
        this->origin = origin;
        this->status = status;
    }

    void getDetails()
    {
        cout << "Vehicle: " << this->type << " " << this->brand << " " << this->model << " (" << fuel << ") engine" << endl;
        cout << "Origin: " << origin << endl;
        cout << "Status: " << status << endl;
    }
};

class Person
{
    string name;
    vector<vehicle> vehicles;

public:
    Person(string name)
    {
        this->name = name;
    }

    void newVehicle(vehicle v)
    {
        vehicles.push_back(v);
    }

    void printDetails()
    {
        cout << "Name of person is: " << name << endl;
        for (int i = 0; i < vehicles.size(); ++i)
        {
            vehicles[i].getDetails();
        }
    }
};

int main()
{
    vehicle car("Car", "Honda", "Accord", "Diesel", "Made in india", "new");
    vehicle bike("Bike", "Ducati", "", "Petrol", "Imported", "old");
    Person Sourabh("Sourabh");
    Sourabh.newVehicle(car);
    Sourabh.newVehicle(bike);
    Sourabh.printDetails();

    return 0;
}