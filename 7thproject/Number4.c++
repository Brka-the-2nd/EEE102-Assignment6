#include <iostream>
using namespace std;

const int SIZE = 17;
int arr[] = {3,6,7,9,2,4,5,7,9,1,2,4,3,5,7,8,9};

void output_array() {
    cout << "Array: ";
    for (int i = 0; i < SIZE; i++) cout << arr[i] << " ";
    cout << endl;
}

void linear_search(int key) {
    int count = 0;
    int indices[SIZE];

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == key) {
            indices[count++] = i;
        }
    }

    if (count > 0) {
        cout << "Number " << key << " Exists in the List" << endl;
        cout << "Number " << key << " Occurs " << count << " times" << endl;
        cout << "It Appears at Array Indices: ";
        for (int i = 0; i < count; i++) {
            cout << indices[i];
            if (i < count - 1) cout << ",";
        }
        cout << endl;
    } else {
        cout << "Number " << key << " Does not Exist in the List" << endl;
        cout << "Number " << key << " Occurs 0 times" << endl;
    }
}

int main() {
    int key;
    output_array();
    cout << "Enter the Search Key: ";
    cin >> key;
    linear_search(key);
    return 0;
}