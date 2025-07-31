#include<iostream>
using namespace std;

/* TASK 2: Count Even and Odd Numbers in an Array
1.Accept the number of elements (N) from the user.
2.Take N integer inputs and store them in an array.
3.Display the count of even and odd numbers.*/

int main()
{
    int n;

    cout << "Enter the no of elements : "<< endl;

    cin >> n;

    if (n <= 0)
    {
        cout << "Insertion failed no of elements must be greater than 0" << endl;
        return 1;
    }

    int* arr = new int[n];
    cout << " " << endl;
    cout << "Enter " << n << " Elements " << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int evencount = 0, oddcount = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    
    cout << " " << endl;
    cout << "Even count in the above elements is" << evencount << endl;
    cout << "Odd count in the above elements is" << oddcount <<endl;

    delete[] arr;
    return 0;
}