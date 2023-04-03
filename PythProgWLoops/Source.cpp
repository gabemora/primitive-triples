#include <cmath>
#include <iostream>
using namespace std;

//this program implements Euclid's formula to formulate pythagorean triples. I have added extra constraints
//these extra constraints allow the program to print out ONLY primitive pythaogrean triples
//along with a referenced pdf by David Joyce of Clark University and a book, "Exploring the Real Numbers" 
//this program will help me define primitive pythagorean triples into an abstract view rather than a triangle
//eventual research I may do is plot all points, do modular arithmetic etc
//hopefully this program and subsequent research adds to the beauty of mathematics and influences others
//that stumble on it, just I did in October 2022

int main()
{ 

    int sideA = 0;
    int sideB = 0;
    int sideC = 0;

    for (int m = 2; m < 50; m++) {
        for (int n = 1; n < m; n++) {

            while (m != 1) {

                if ((m + n) % 2 == 0 || m % n ==0 && n >1) { // to combat 2 odd imputs and n divides m. ex: m = 6, n = 3.
                    cout << "Nonprimitive or invalid inputs." << endl;
                }
                else if (m > n > 0 && m % 2 == 0 || n % 2 == 0 && m % n > 0) { //constraints that allows for Euclid's algorithm

                    sideA = pow(m, 2) - pow(n, 2);// Euclid's algorithm 
                    sideB = 2 * m * n;// Euclid's algorithm 
                    sideC = pow(m, 2) + pow(n, 2);// Euclid's algorithm 
                    cout << m << " " << n << endl; // allows user to pair m and n with its corresponding primitive triple
                    cout << sideA << " " << sideB << " " << sideC << endl;
                }
                else if (m > n > 0 && n == 1) { // deals with a bug I encountered that wasn't printing when n=1

                    sideA = pow(m, 2) - pow(n, 2);// Euclid's algorithm 
                    sideB = 2 * m * n;// Euclid's algorithm 
                    sideC = pow(m, 2) + pow(n, 2);// Euclid's algorithm 
                    cout << m << " " << n << endl;// allows for user to pair m and n with its corresponding primitive triple
                    cout << sideA << " " << sideB << " " << sideC << endl;
                }
                cout << endl;
                break; // ends while loop to allow m and n to increment until m = 49 and n = 48. 
            }
        }
    }
    return 0;
}