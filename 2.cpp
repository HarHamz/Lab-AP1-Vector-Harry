#include <iostream>
#include <vector>

using namespace std;

int freq, num;

// fungsi untuk menghapus nilai duplikat
void frekuensi(vector <int> arr)
{
    
    int n = arr.size(); // mendapatkan ukuran vector
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            freq++;
        }
    }
}

int main(void)
{
    vector <int> arr = {1,2,2,3,3,3,5};

    cout << "Masukkan angka yang mau dicari frekuensinya: ";
    cin >> num;

    frekuensi(arr);

    if (freq > 0)
    {
        cout << "Frekuensi dari angka " << num << " di dalam array adalah " << freq << endl;
    }
    else
    {
        cout << "Angka tidak ditemukan\n";
    }
}