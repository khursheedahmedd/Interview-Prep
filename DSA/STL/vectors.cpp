#include <iostream>
#include <vector>

using namespace std;

void Display(vector<int> vect)
{
    cout << "\n";
    for (int i = 0; i < vect.size(); i++)
    {
        cout << vect[i] << " ";
    }
}

int main()
{
    vector<int> vect;
    int val;

    for (int i = 0; i < 5; i++)
    {
        cout << "\nEnter the value to insert: ";
        cin >> val;
        vect.push_back(val);
    }

    Display(vect);

    return 0;
}