// Noah Miller


#include <iostream>


double getRadius() {

    double radiusEntered = 0;

    //querry sphere radius and returns it
    std::cout << "\nEnter  the radius of the sphere\n";
    std::cin >> radiusEntered;
   
    return radiusEntered;
}

double getWeight() {
    
    double weightEntered = 0;

    std::cout << "\nEnter  the weight of the sphere\n";
    std::cin >> weightEntered;
   
    return weightEntered;
}
int main()
{
    //declare variables
    int exitQuerry = 1;
    const double pi = 3.141592;
    const double waterWeight = 62.4;

    double radius = 0;
    double weight = 0;
    double buoyancyForce;
    double volume = 0;
    double density = 0;


    
    while (exitQuerry == 1) {
    //querry sphere radius
    radius = getRadius();


    //display entered radius
    std::cout << "\nYou entered ";
    std::cout << radius;
    std::cout << "\n";
  



    //gets weight
    weight = getWeight();

    //displays weight entered 
    std::cout << "\nYou entered ";
    std::cout << weight;
    std::cout << "\n";
    

    volume = 4.0 / 3.0 * pi * radius * radius * radius;
    std::cout << "\nYour volume is  ";
    std::cout << volume;

    buoyancyForce = volume * waterWeight;
    std::cout << "\nYour buoyancy force is\n ";
    std::cout << buoyancyForce;

    density = weight / volume;

    if (density < waterWeight) {
        std::cout << "\nYour sphere floats !!!\n";

    }
    else {
        std::cout << "\nYour sphere sinks\n";
    }
    std::cout << "\n";
    
    std::cout << "\nRecalculate? (1 = yes, 0 = exit) \n";
    std::cin >> exitQuerry;
    
}
    system("pause");
    }

    
   



