#include <iostream>
#include <vector>

using namespace std;

// fungsi untuk menghapus nilai duplikat
void hapus(vector <int> & arr)
{
    int n = arr.size(); // mendapatkan ukuran vector
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                arr.erase(arr.begin() + j); // menghapus nilai duplikat
                n--; // mengurangi 1 pada ukuran vektor
                j--; // mengurangi 1 pada j supaya tidak terskip
            }
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

    // menampilkan vector yg belum dihapus duplikatnya
    cout << "Vector sebelum dihapus duplikatnya: \n";
    for (auto i: arr)
    {
        cout << i << " ";
    }
    cout << endl;

    // fungsi hapus duplikat
    hapus(arr);

    // menampilkan vector yg sudah dihapus duplikatnya
    cout << "Vector sesudah dihapus duplikatnya: \n";
    for (auto i: arr)
    {
        cout << i << " ";
    }
    cout << endl;
}