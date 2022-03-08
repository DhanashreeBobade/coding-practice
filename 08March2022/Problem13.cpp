#include <iostream>
using namespace std;
int main()
{
    string arr[] = {"January is a 31 day's month.", "February is a 28 day's month.", "March is a 31 day's month.",
                    "April is a 30 day's month.", "May is a 31 day's month.", "June is a 30 day's month.",
                    "July is a 31 day's month.", "August is a 31 day's month.", "September is a 30 day's month.",
                    "October is a 31 day's month.", "Novemberis a 30 day's month.",
                    "December is a 31 day's month."};

    int i;
    cout << "Enter any number from 1- 12 : ";
    cin >> i;
    --i;
    cout << arr[i];

    return 0;
}