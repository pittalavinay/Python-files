// #include <iostream>

// // Define a namespace
// namespace EngineControl {
//     int speed = 100;
//     void displaySpeed() {
//         std::cout << "Engine Speed: " << speed << " RPM\n";
//     }
// }

// namespace BrakeSystem {
//     int speed = 0;
//     void displaySpeed() {
//         std::cout << "Brake System Speed: " << speed << " RPM\n";
//     }
// }

// int main() {
//     // Access namespace members
//     EngineControl::displaySpeed(); // Calls EngineControl's function
//     BrakeSystem::displaySpeed();  // Calls BrakeSystem's function
//     return 0;
// }

// #include <iostream>

// // Inline function
// inline int calculateFuel(int airFlow) {
//     return airFlow * 2; // Simplified fuel calculation
// }

// int main() {
//     int airFlow = 50;
//     std::cout << "Fuel Amount: " << calculateFuel(airFlow) << "\n";
//     return 0;
// }

// #include <iostream>

// // Macro for constant
// #define MAX_RPM 8000

// // Macro for function-like operation
// #define CALCULATE_TORQUE(rpm) ((rpm) * 0.1)

// // Conditional compilation macro
// #define DEBUG_MODE

// int main() {
//     int rpm = 6000;
//     std::cout << "Max RPM: " << MAX_RPM << "\n";
//     std::cout << "Torque: " << CALCULATE_TORQUE(rpm) << " Nm\n";

// #ifdef DEBUG_MODE
//     std::cout << "Debug mode enabled\n";
// #endif
//     return 0;
// }

// #include <iostream>

// int main() {
//     int rpm = 6000; // Integer from sensor
//     double preciseRpm = rpm; // Implicit cast: int to double
//     float voltage = 5.0f; // Float from ADC
//     double preciseVoltage = voltage; // Implicit cast: float to double

//     std::cout << "Precise RPM: " << preciseRpm << "\n";
//     std::cout << "Precise Voltage: " << preciseVoltage << "\n";

//     // Implicit cast in arithmetic
//     int wheelSpeed = 100;
//     double distance = wheelSpeed * 1.5; // int to double for multiplication
//     std::cout << "Distance: " << distance << "\n";

//     return 0;
// }


// #include <iostream>

// int main() {
//     double speed = 120.75; // Sensor reading
//     int roundedSpeed = static_cast<int>(speed); // static_cast: double to int
//     float voltage = 5.5f;
//     int adcValue = static_cast<int>(voltage * 1024 / 5.0); // ADC conversion

//     std::cout << "Rounded Speed: " << roundedSpeed << "\n";
//     std::cout << "ADC Value: " << adcValue << "\n";

//     // Casting in class hierarchy
//     class Base {};
//     class Derived : public Base {};
//     Derived d;
//     Base* b = static_cast<Base*>(&d); // Upcast
//     std::cout << "Base Pointer: " << b << "\n";

//     return 0;
// }

// #include <iostream>

// class Sensor {
// public:
//     virtual ~Sensor() {} // Enable polymorphism
// };

// class TemperatureSensor : public Sensor {
// public:
//     void readTemp() { std::cout << "Reading temperature\n"; }
// };

// class PressureSensor : public Sensor {
// public:
//     void readPressure() { std::cout << "Reading pressure\n"; }
// };

// int main() {
//     Sensor* sensor = new TemperatureSensor();
//     TemperatureSensor* tempSensor = dynamic_cast<TemperatureSensor*>(sensor);
    
//     if (tempSensor) {
//         tempSensor->readTemp(); // Safe downcast
//     } else {
//         std::cout << "Invalid cast\n";
//     }

//     PressureSensor* pressureSensor = dynamic_cast<PressureSensor*>(sensor);
//     if (!pressureSensor) {
//         std::cout << "Cast to PressureSensor failed\n";
//     }

//     delete sensor;
//     return 0;
// }


// #include <iostream>

// void legacyFunction(int* data) {
//     *data = 100; // Modifies data
// }

// int main() {
//     const int sensorValue = 50;
//     int* modifiableValue = const_cast<int*>(&sensorValue); // Remove const
//     legacyFunction(modifiableValue);

//     std::cout << "Modified Sensor Value: " << sensorValue << "\n"; // Undefined behavior

//     // Adding const
//     int rpm = 6000;
//     const int* constRpm = const_cast<const int*>(&rpm); // Add const
//     std::cout << "Const RPM: " << *constRpm << "\n";

//     return 0;
// }



// #include <iostream>
// #include <cstdint> // Include for uint32_t and uint8_t

// int main() {
//     int sensorData = 0x1234; // Raw sensor data
//     void* rawPtr = reinterpret_cast<void*>(&sensorData); // int* to void*
//     std::cout << "Raw Pointer: " << rawPtr << "\n";

//     // Reinterpret raw bytes as a float
//     int rawBytes = 0x41C80000; // Float 25.0 in IEEE 754
//     float* floatPtr = reinterpret_cast<float*>(&rawBytes);
//     std::cout << "Reinterpreted Float: " << *floatPtr << "\n";

//     // Memory-mapped register simulation
//     uint32_t registerValue = 0xFF;
//     volatile uint8_t* regPtr = reinterpret_cast<volatile uint8_t*>(&registerValue); // Fixed typo
//     std::cout << "Register Byte: " << static_cast<int>(*regPtr) << "\n";

//     return 0;
// }




#include<iostream>
using namespace std;

class Myclass
{
private:
    string name;
    int age;
    
public:
    Myclass(string n, int a) : name(n), age(a){};
    Myclass(const Myclass& other)
    {
        name = other.name;
        age = other.age;
    }
    
    void display()
    {
        cout << "Name: " << name << ", " << "Age: " << age <<endl;
    }
};

int main()
{
    Myclass m("Surya",23); 
    
    // = new Myclass("Surya", 23);
    // m->display();
    Myclass m2 = m;
    m2.display();

    m.display();
    
    return 0;
}