//Name: Giselle Johnson
//Program: In Class TOOP 22
//Date: 11/7/23


#include <iostream>
using namespace std;

// Class that initializes 3 variables (grade1...), creates a public function (set_values), and a function that returns the calculated results
class Grades {
    //Creating variables that can only be accessed by the class
    double grade1, grade2, grade3;
    //public function that can be accessed outside the class
    public:
        void set_values (int, int, int);
        int avg () {
            return (grade1 + grade2 + grade3)/3;
            }
};

// This is the function created in Grades that is referenced using Grades::
// This functino recieves 3 values (x...) and sets them equal to the varibales in the class Grades
// This can reference the variables because it direcly references the class, and the class has access to those variables
void Grades::set_values (int x, int y, int z){
    //setting values given to the variables in the class
    grade1 = x;
    grade2 = y;
    grade3 = z;
}

// The main function creates two objects (Cadet1...) and using those objects, sends its attributes (80...) to the set_values function which then referneces the class which uses the avg function which returns their average grade
// This creates 2 objects, both with different names, Cadet1 and Cadet2
int main(){
    // creating objects for the Grades class
    Grades Cadet1, Cadet2;
    //Setting values to the objects created referencing the set_values function which references the Grades class and sets the values
    Cadet1.set_values(90,85,95);
    Cadet2.set_values(80,70,60);
    //Prints the average after calling the avg function because the object hsa been initiated with the Grades class and those values have been inputed for that object
    cout << "Cadet 1 Grades: " << Cadet1.avg() << "\n";
    cout << "Cadet 2 Grades: " << Cadet2.avg() << "\n";

}

