/*
Nama    = Muhamad Ilham Habib
NPM     = 140810180018
Kelas   = B
Deskripsi = Program tentang mhw
*/
#include <iostream>
using namespace std;
struct ElemList
{
    char npm[14];
    char nama[40];
    float ipk;
    ElemList *next;
};
typedef ElemList *pointer;
typedef pointer list, ex;

void createList(list &First)
{
    First = NULL;
}
void createElmt(pointer &pBaru)
{
    pBaru = new ElemList;
    cout << "Nama     : ";
    cin.ignore();
    cin.getline(pBaru->nama, 30);
    cout << "NPM      : ";
    cin.ignore();
    cin.getline(pBaru->npm, 40);
    cout << "IPK      : ";
    cin >> pBaru->ipk;
    pBaru->next = NULL;
}
insertSortNama(list &First, pointer pBaru)
{
    int n, index;
    for (int i = 1; i < n; i++)
    {
        ex = [i];
        index = First[i];
        while (index > 0 && First[index - 1].npm > ex.npm)
        {
            First[index] = First[index - 1];
            index = list - 1;
        }
        list[index] = ex;
    }
    void traversal(list First, pointer & pBantu)
    {
        pBantu = First;
        int i = 1;
        cout << setw(5) << "No" << setw(23) << " Nama" << setw(18) << " NPM" << setw(18) << "IPK" << endl;
        do
        {
            cout << setw(5) << i << setw(23) << pBantu->npm << setw(18) << pBantu->nama << setw(18) << pBantu->ipk << endl;
            pBantu = pBantu->next;
            i++;
        } while (pBantu != NULL);
        {
            cout << endl;
        }
}
int main(){
        pointer pBaru;
        pointer pBantu;
        list First;
        int pilihan;
        char jawab;
        createList(First);
        do
        {
            system("cls");
            cout << "Pilih Menu : \n"
                 << endl;
            cout << "1. Insert First" << endl;
            cout << "2. Insert Last" << endl;
            cout << "3. Tampilkan Data ( traversal )" << endl;
            cout << "\nMasukan Pilihan : ";
            cin >> pilihan;
            switch (pilihan)
            {
            case 1:
                createElmt(pBaru);
                insertFirst(First, pBaru);
                break;

            case 2:
                createElmt(pBaru);
                insertLast(First, pBaru);
                break;

            case 3:
                cout << "\n====================================================================\n";
                traversal(First);
                break;

            case 6:
                return 0;
                break;
            }

            cout << "Ingin Ke Menu lagi? (Y/N) ";
            cin >> jawab;
            cin.ignore();
            if (jawab == 'Y' || jawab == 'y')
            {
                system("cls");
            }
            else
                cout << "\n=====================================================================\n";
            traversal(First);
        } while (jawab == 'Y' || jawab == 'y');
    }
