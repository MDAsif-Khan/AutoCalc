#include<iostream>
#include<cmath>
using namespace std;

class Calculator {
    double x,y;
    char sign;
    public:
        Calculator() {}
        Calculator(double p, double q) {
            x = p; y = q;
            cout << "Enter the sign operator, you want to do with this two numbers: ";
            cin >> sign;
            cout << endl;
            
            if (sign == '/') {
                cout << "The result of division is: " << (p/q) << endl;
            }
            else if (sign == '*') {
                cout << "The result of multiplication is: " << (p*q) << endl;
            }
            else if (sign == '+') {
                cout << "The result of addition is: " << (p+q) << endl;
            }
            else if (sign == '-') {
                cout << "The result of subtraction is: " << (p-q) << endl;
            }
            else {
                cout << "Error Operator!!!" << endl;
            }
        }
        
        ~Calculator() {}
};

class SciCal {
    double a, b;
    public:
        SciCal() {}
        SciCal(double a, double b) {
            cout << "The result of a power b is: " << pow(a,b) << endl;
            cout << "The result of a th root of b is: " << pow(b, (1/a)) << endl;
            cout << "The result of log a with base b is: " << ((log (a)) / (log (b))) << endl;
        }
        ~SciCal() {}
};

class Calc : public Calculator, public SciCal {
    double e,f;
    public:
        Calc() {
            cout << "The value of a: ";
            cin >> e;
            cout << "The value of b: ";
            cin >> f;
            cout << endl;
            initWork();
        }
        
        Calc(double e, double f) {
            initWork();
        }
        
        ~Calc() {}
        
        void initWork() {
            Calculator o1(e,f);
            cout << endl;
            SciCal o2(e,f);
        }
};

int main()
{
    Calc nums;
    return 0;
}