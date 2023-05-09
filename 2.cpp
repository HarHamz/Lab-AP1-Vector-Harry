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
    int n, size;
    vector <int> arr;
    cout << "Masukkan ukuran vector: ";
    cin >> size;

    for (int i = 1; i <= size; i++)
    {
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> n;
        arr.push_back(n);
    }

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