// Function Definitions
#include <stdio.h>
#include <conio.h>
#include <fmt/format.h>

#include "BMI.h"

BMI::BMI() {
    this->newName="";
    this->newHeight=0;
    this->newWeight=0.0;
}

BMI::BMI(string name, double height, double weight) {
    this->newName=name;
    this->newHeight=height;
    this->newWeight=weight;
}
BMI::~BMI(){}

BMI::setNombre(std::string nombre) const {
    this->newName=nombre;
}

std::string BMI::getNombre() const {
    return this->newName;
}

BMI::setHeight(double height) const {
    this->newHeight=height;
}

double BMI::getHeight() const {
    return this->newHeight;
}

BMI::setWeight(double weight) const {
    this->newWeight=weight;
}

double BMI::getWeight() const {
    return this->newWeight;
}

std::string toString() const {
    return "\t\tDATA PERSONA\n NOMBRE: %s\nHEIGHT: %lf, WEIGHT: %lf";
}