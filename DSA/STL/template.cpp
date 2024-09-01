#include <iostream>
using namespace std;

template <class T>

class claculator
{
private:
    T val1, val2;

public:
    claculator(T value1, T value2)
    {
        val1 = value1;
        val2 = value2;
    }

    T Sum()
    {
        return (val1 + val2);
    }
};

int main()
{
    // For int
    claculator<int> myIntCal(4, 9);

    cout << "\nThe sum is: " << myIntCal.Sum();

    // For float
    claculator<float> myFloatCal(2.4, 9.7);

    cout << "\nThe sum is: " << myFloatCal.Sum();

    // For string
    claculator<string> myStringCal("I am ", "Khursheed");

    cout << "\nThe sum is: " << myStringCal.Sum();

    return 0;
}