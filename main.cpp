/*
 Project 4 - Part 1 / 9
 video: Chapter 2 Part 7
 Returning Values tasks 

 Create a branch named Part1

 Purpose:  This project will take you through the process of writing a class that wraps a numeric type, beginning with writing simple member functions and ending with a fully templated class with lots of functionality. 
 
 1) write 3 UDTs named FloatType, DoubleType, IntType.
 
 2) give each UDT the following member functions:
        add( lhs, rhs );
        subtract( lhs, rhs );
        multiply( lhs, rhs );
        divide( lhs, rhs );
 3) implement the appropriate action in the member function. 
         a) Be aware that floating point division by 0 is legal, but integer division by 0 will crash your program.  
         b) Handle this possible input when you write your divide() functions.
         c) you should warn the user if they're doing floating-point-division-by-zero but not prevent the division from happening
         d) you should warn AND prevent the division from happening if it is an integer-division-by-zero.
 
 4) make them return the correct primitive type. e.g. if you're implementing the FloatType::add function, your implementation would start like this:
        float FloatType::add( float lhs, float rhs )
 
 5) declare a few instances of each class in main() and call the member functions with the appropriate arguments.
        FloatType ft;
        auto result = ft.add(3.2f, 23.f );
 
 6) print out those results using std::cout:
        std::cout "result of ft.add(): " << result << std::endl;
 
 7) After you finish defining each type/function, click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

#include <iostream>

struct FloatType {

        float add( float lhs, float rhs ) {
            return lhs + rhs;
        }
        float subtract(float  lhs,float rhs ) {
            return lhs - rhs;
        }

         float multiply(float  lhs, float rhs ) {
            return lhs * rhs;
         }
        float divide( float lhs, float rhs ) {
            if(rhs == 0.f ) {
              std::cout << "Warning: Divide by zero" << std::endl;  
            }
            return lhs / rhs;
        }
};

struct DoubleType {
        double add( double lhs, double rhs ) {
            return lhs + rhs;
        }
        double subtract(double  lhs,double rhs ) {
            return lhs - rhs;
        }

         double multiply(double  lhs, double rhs ) {
            return lhs * rhs;
         }
        double divide( double lhs, double rhs ) {
            if(rhs == 0.0 ) {
            std::cout << "Warning: Divide by zero" << std::endl;  
            }
            return lhs / rhs;
        }

};

struct IntType {
        int add( int lhs, int rhs ) {
            return lhs + rhs;
        }
        int subtract(int  lhs,int rhs ) {
            return lhs - rhs;
        }

         int multiply(int  lhs, int rhs ) {
            return lhs * rhs;
         }
        int divide( int lhs, int rhs ) {
            if(rhs == 0 ) {
            std::cout << "Error: Divide by zero" << std::endl;  
            return 0;
            }
            return lhs / rhs;
        }
};

int main()
{
    FloatType ft1;
    auto result1 = ft1.add(3.2f, 23.f );
    std::cout << "result of ft.add(): " << result1 << std::endl;    

    FloatType ft2;
    auto result2 = ft2.divide(5.0f, 0.0f);
    std::cout << "result of ft.divide(): " << result2 << std::endl;

    DoubleType dt1;
    auto result3 = dt1.subtract(10.0, 6.0);
    std::cout << "result of dt.subtract(): " << result3 << std::endl;

    DoubleType dt2;
    auto result4 = dt2.divide(10.0, 0.0);
    std::cout << "result of dt.divide(): " << result4 << std::endl;

    IntType it1;
    auto result5 = it1.multiply(5, 300);
    std::cout << "result of it.multiply(): " << result5 << std::endl;

    IntType it2;
    auto result6 = it2.divide(5, 0);
    std::cout << "result of it.divide(): " << result6 << std::endl;

    std::cout << "good to go!" << std::endl;
}
