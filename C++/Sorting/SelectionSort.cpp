//      Selection Sort - AmanRaj1608

//      Including Libraries
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;

//      MACROS
#define ll long long
#define Rand_Max 10000000

void swap(ll int *a, ll int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(ll int arr[],ll int n) {
    for(ll int i=0; i<n-1; i++) {
        ll int min = i;
        for(ll int j=i+1; j<n; j++)
            if(arr[j] < arr[min])
                min = j;
        swap(&arr[min], &arr[i]);
    }
}

int main() {
    ll int n;
    cout << "Enter number of numbers to be added to sort\n";
    cin >> n;
    cout << "\nOperation to be performed on\n";
    cout << "1. Already Sorted array\n2. Reversed Sorted array\n3. Random Numbers Sorted array\n";
    int choice;
    cin >> choice;
    ll int arr[n];


    //      Filling array as per choice
    if(choice==1) {
        for(ll int i=0;i<n;++i) {
            ll int random_number = rand() % Rand_Max;
            arr[i] = random_number;
        }
        sort(arr,arr+n);
    }
    else if(choice==2) {
        for(ll int i=0;i<n;++i) {
            ll int random_number = rand() % Rand_Max;
            arr[i] = random_number;
        }
        sort(arr,arr+n,greater<ll int>());
    }
    else if(choice==3) {
        for(ll int i=0;i<n;++i) {
            ll int random_number = rand() % Rand_Max;
            arr[i] = random_number;
        }
    }

    //      Started clock
    auto start = high_resolution_clock::now();

        SelectionSort(arr,n);

    //      Stop clock and calculate time
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Time taken by function: " << duration.count() << " microseconds" << endl;
    return 0;
}
