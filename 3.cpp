#include <iostream>
#include <vector>

using namespace std;

// fungsi untuk memindah nilai 0 ke depan vector
void movezero(vector <int>& arr)
{
    int i = 0, zero = 0, n = arr.size();
    while (i < n)
    {
        // kondisi untuk jika arr[i] = 0
        if (arr[i] == 0)
        {
            arr.erase(arr.begin() + i); // nilai 0 di arr[i] di hapus
            zero++; // menambah angka 0 yang akan ditambahkan nanti
            i--; // mengurangi 1 pada i supaya tidak terskip
            n--; // mengurangi 1 pada ukuran vector
        }
        i++;
    }
    // penambahan nilai 0 kembali di bagian depan vector
    for (int i = 0; i < zero; i++)
    {
        arr.insert(arr.begin(), 0);
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

    // menampilkan vector yg belum dipindah 0 nya
    cout << "Vector sebelum dipindah nolnya: \n";
    for (auto i: arr)
    {
        cout << i << " ";
    }
    cout << endl;

    // fungsi pindah 0
    movezero(arr);

    // menampilkan vector yg sudah dipindah 0 nya
    cout << "Vector sesudah dipindah nolnya: \n";
    for (auto i: arr)
    {
        cout << i << " ";
    }
    cout << endl;

}