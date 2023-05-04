#include<iostream>
using namespace std;
int main()
{
    // mendefinisikan variabel
    int i, j, k, l, m, row, star;
    // input ukuran, disimpan dalam variabel row
    cout<<"Input : ";
    cin>>row;
    // variabel untuk menentukan jumlah ikon bintang
    star = row-1;
    // perulangan pertama untuk bentuk bagian atas
    for(i=1; i<=row; i++)
    {
        // menggambar pola bintang
        for(j=1; j<=star; j++)
            cout<<"* ";
        // menggambar spasi, untuk bentuk diamond ditengah
        for(j=1; j<=(2*i-2); j++)
            cout<<"  ";
        // menggambar pola bintang
        for(j=1; j<=star; j++)
            cout<<"* ";
        // mengurangi nilai variabel star
        star--;
        // memberikan endline untuk setiap akhir baris
        if(star > 0)
            cout<<endl;
    }
    cout<<endl;
    star = 1;
    for(i=1; i<=(row-1); i++)
    {
        // menggambar pola bintang
        for(j=1; j<=star; j++)
            cout<<"* ";
        // menggambar spasi
        for(j=1; j<=(2*(row-i)-2); j++)
            cout<<"  ";
        // menggambar pola bintang
        for(j=1; j<=star; j++)
            cout<<"* ";
        star++;
        // endline untuk setiap akhir baris
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
