# Two Sum

## Deskripsi Soal
Diberikan sebuah *array* bilangan bulat bernama `nums` dan sebuah nilai `target`, kembalikan indeks dari dua angka sehingga keduanya jika dijumlahkan menghasilkan nilai `target`.

Anda dapat berasumsi bahwa setiap input **hanya memiliki tepat satu solusi**, dan Anda **tidak boleh** menggunakan elemen yang sama dua kali. 

Anda dapat mengembalikan jawaban dalam urutan apa pun.

---

## Contoh Kasus

### Contoh 1:
* **Input:** `nums = [2, 7, 11, 15]`, `target = 9`
* **Output:** `[0, 1]`
* **Penjelasan:** Penjumlahan dari `nums[0]` dan `nums[1]` adalah `2 + 7 = 9`, yang bernilai sama dengan `target`. Oleh karena itu, indeks `[0, 1]` dikembalikan.

### Contoh 2:
* **Input:** `nums = [3, 2, 4]`, `target = 6`
* **Output:** `[1, 2]`
* **Penjelasan:** Penjumlahan dari `nums[1]` dan `nums[2]` adalah `2 + 4 = 6`. Oleh karena itu, indeks `[1, 2]` dikembalikan.

### Contoh 3:
* **Input:** `nums = [3, 3]`, `target = 6`
* **Output:** `[0, 1]`
* **Penjelasan:** Penjumlahan dari `nums[0]` dan `nums[1]` adalah `3 + 3 = 6`. Oleh karena itu, indeks `[0, 1]` dikembalikan.

---

## Batasan (Constraints)
* `2 <= nums.length <= 10^4`
* `-10^9 <= nums[i] <= 10^9`
* `-10^9 <= target <= 10^9`
* **Hanya satu jawaban valid yang tersedia.**

---

## Kerangka Kode (C++ Template)

```cpp
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Tulis kode solusi Anda di sini
        
    }
};
