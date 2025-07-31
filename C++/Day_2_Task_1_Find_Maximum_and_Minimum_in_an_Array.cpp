#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n;
    cout << "Enter the number of elements: " << endl;
    cin >> n;

    if (n <= 0)
    {
        cout << "Insertion failed! Value must be greater than 0." << endl;
        return 1;
    }

    //int* arr = new int[n]; // Dynamically allocated array

    vector<int> arr(n);

    cout << "Enter " << n << " elements: " << endl; // Fixed spacing issuecls;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int min_value = arr[0], max_value = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min_value)
        {
            min_value = arr[i];
        }
        if (arr[i] > max_value)
        {
            max_value = arr[i];
        }
    }

    cout << "Minimum Value is: " << min_value << endl;
    cout << "Maximum Value is: " << max_value << endl;

    //delete[] arr; // Free dynamically allocated memory
    return 0;
}
