#include <iostream>
using namespace std;

class Polynomial{

int *degCoeff;
int length;

public :
    // Default Constructor
    Polynomial(){
        degCoeff = new int[10] ();
        length = 10;
    }

    //Parameterised Constructor for operator overloads
    Polynomial (int * array, int size){
        degCoeff = array;          // Shallow copy on purpose
        length = size;
    }

    // Copy Constructor
    Polynomial(Polynomial const & p1){
        length = p1.length;
        degCoeff = new int [length] ();

        for (int i=0; i<length; i++){
            degCoeff[i] = p1.degCoeff[i];
        }
    }

    // Copy Assignment Operator
    void operator=(Polynomial const & p1){
        delete [] degCoeff;

        length = p1.length;
        degCoeff = new int [length] ();

        for (int i=0; i<length; i++){
            degCoeff[i] = p1.degCoeff[i];
        }
    }

    // Set coefficient for a particular degree
    void setCoefficient(int degree, int coefficient){
        while (degree >= length){
            int *newlist = new int[length*2] ();

            for (int i=0; i<length; i++){
                newlist[i] = degCoeff[i];
            }

            delete [] degCoeff;
            length *= 2;
            degCoeff = newlist;
        }
        
        degCoeff[degree] = coefficient;
    }



    // + operator overload
    Polynomial operator+(Polynomial const & p1) const {
        int more = max(length, p1.length);
        int *newlist = new int [more] ();

        int i=0;
        for (; i<length && i< p1.length; i++){
            newlist[i] = degCoeff[i] + p1.degCoeff[i];
        }

        for (; i < length; i++){
            newlist[i] = degCoeff[i];
        }

        for (; i < p1.length; i++){
            newlist[i] = p1.degCoeff[i];
        }

        Polynomial ptemp(newlist,more);
        return ptemp;
    }

    // - operator overload
    Polynomial operator-(Polynomial const & p1) const {
        int more = max(length, p1.length);
        int *newlist = new int [more] ();

        int i=0;
        for (; i<length && i< p1.length; i++){
            newlist[i] = degCoeff[i] - p1.degCoeff[i];
        }

        for (; i < length; i++){
            newlist[i] = degCoeff[i];
        }

        for (; i < p1.length; i++){
            newlist[i] = (-1) * p1.degCoeff[i];
        }

        Polynomial ptemp(newlist,more);
        return ptemp;
    }

    // * operator overload
    Polynomial operator*(Polynomial const & p1) const{
        int size = (length-1) * p1.length;
        int *newlist = new int [size] ();

        for (int i=0; i<length; i++){
            for (int j=0; j<p1.length; j++){
                int k=i+j;
                newlist[k]+=(degCoeff[i] * p1.degCoeff[j]); 
            }
        }

        Polynomial ptemp(newlist,size);
        return ptemp;
        
    }
    
    // Print whole expression
    void print() const {
        for (int i=0; i<length; i++){
            if (degCoeff[i]!=0){
                cout << degCoeff[i] << 'x' << i << " ";
            }
        }
        cout << endl;
    }   

};
