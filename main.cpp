#include <iostream>
#include <string>

#include "BMI.h"

using namespace std;

int main(int argc, char** argv) {
    std::string nombre;
    double weight,height;
    cout<<"NOMBRE: ";
    cin>>nombre;
    cout<<"HEIGHT (in inches): ";
    cin>>height;    
    cout<<"WEIGHT: ";
    cin>>weight;  
    BMI student_1(nombre, height, weight);
    cout<<"\t\tDATOS PERSONA\n"<<"NOMBRE: "<<student_1.getNombre()<<"\n"<<
            "HEIGHT (in inches): "<<student_1.getHeight()<<"\n"<<
            "WEIGHT: "<<student_1.getWeight()<<endl;
    return 0;
}

