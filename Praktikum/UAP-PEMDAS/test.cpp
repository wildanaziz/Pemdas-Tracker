#include <iostream>
using namespace std;

void fungsi_array(int n) {
    for (int i = 1; i <= n; i++)
    {
        int coef = 1;
        for (int k = n-i; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << coef << " ";
            coef=coef*(i-j)/j;
        }
        
        cout << "\n";
    }
    
}

int main() {
    int input;
    cout << "Masukkan baris";
    cin >> input;
    fungsi_array(input);

    return 0;
}
