#include <iostream>
#include <vector>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(vector <int> a) {
    long n = a.size();
    int lo = 0;
    int hi = n - 1;
    int mid = 0;
    while (mid <= hi) {
        switch (a[mid]) {
            case 0:
                swap(&a[lo++], &a[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(&a[mid], &a[hi--]);
                break;
        }
    }
    cout << "\nAfter Sorting\t:\t";
    for ( int i  = 0; i < n; i++ ) {
        cout << a[i] << "  ";
    }
    cout << endl;
}
int main() {
    int n;
    cout << "\nEnter Size\t:\t";
    cin >> n;
    vector<int> a(n);
    cout << "\nEnter Elements\n";
    for ( int i = 0; i < n; i++ ) {
        cin >> a[i];
    }
    sort(a);
    a.clear();
    cout <<  endl;
    return 0;
}
