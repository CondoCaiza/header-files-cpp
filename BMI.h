// Header ==>Function Declarations
#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI {
public:
    // Default Constructor
    BMI();
    
    // Overload Constructor
    BMI(std::string, double, double);
    
    // Destructor
    ~BMI();
    
    // Access Functions
    std::string getNombre() const;
    //get Nombre - returns name of patient
    double getHeight() const;
    // getHeight - returns height of patient
    double getWeight() const;
    // getWeight - returns weight of patient
    std::string toString() const;
    // get DataPersona of patient
    void setNombre(std::string) const;    
    //  setNombre - asignacion de value of patient
    void setHeight(double) const;    
    //  setHeight - asignacion de value of patient
    void setWeight(double) const;    
    //  setWeight - asignacion de value of patient
    
private:
    //Member Variables
    string newName;
    double newHeight;
    double newWeight;
};

#endif /* BMI_H */

