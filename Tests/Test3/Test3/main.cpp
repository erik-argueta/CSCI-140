#include <iostream>
#include <string>
using namespace std;

void welcome() {
	string name;
	cout << "Hello! Please enter your name: ";
	getline (cin, name);
	cout << "Hello " << name << "!" << endl << endl;
}

int main()
{
	
	welcome();
    string cont = "y";

    while (cont == "y" || cont == "Y")
    {
        int duplicate = 0;
        cout << "Please enter 20 values betwen 10-100: ";

        int i = 0, k = 0, arr[20] = { 0 }, n;
        int b;
        b = sizeof(arr);

        while (i < 20) {
            cin >> n;

            if (n >= 10 && n <= 100) {
                int flag = 0;
                for (int j = 0; j < k; j++)
                    if (arr[j] == n) {
                        flag = 1;
                        duplicate++;
                        break;
                    }
                if (flag == 0) {
                    arr[k] = n;
                    k++;
                }
            }
            i++;
        }
        cout << endl;
        cout << "The unique elements in the array are: " << endl;

        for (int j = 0; j < k - 1; j++)
            cout << arr[j] << " ";
        cout << "100" << endl;

        int size = *(&arr + 1) - arr - duplicate;
        cout << "Array size: "
            << size;
        size = 0;

        cout << endl;
        cout << "Would you like to continue? (y/n)" << endl;
        cin >> cont;
        cout << endl;
    }
    return 0;
}
