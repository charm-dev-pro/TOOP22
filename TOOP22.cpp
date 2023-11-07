//Name: Giselle Johnson
//Program: In Class TOOP 22
//Date: 11/7/23


#include <iostream>
using namespace std;

class Grades {
    double grade1, grade2, grade3;
    public:
        void set_values (int, int, int);
        int avg () {return (grade1 + grade2 + grade3)/3;}
};

void Grades::set_values (int x, int y, int z){
    grade1 = x;
    grade2 = y;
    grade3 = z;
}

int main(){
    Grades Cadet1, Cadet2;
    Cadet1.set_values(90,85,95);
    Cadet2.set_values(80,70,60);
    cout << "Cadet 1 Grades: " << Cadet1.avg() << "\n";
    cout << "Cadet 2 Grades: " << Cadet2.avg() << "\n";
    
}

