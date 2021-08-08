//
//  main.cpp
//  If_Else_IfElse
//
//  Created by Nguyen Dinh Huong on 08/08/2021.
//

#include <iostream>

using namespace std;

int main()
{
    int diemtrungbinh;
    
    cout << "Nhap diem trung binh cua ban : " ;
    cin >> diemtrungbinh;
    
    if (diemtrungbinh<=3.5)
    {
        cout << "Xep loai yeu" ;
    }else if(diemtrungbinh>3.5 && diemtrungbinh<=6.5)
    {
        cout << "Xep loai trung binh";
    }else if(diemtrungbinh>6.5 && diemtrungbinh<=8)
    {
        cout << "Xep loai kha";
    }else if(diemtrungbinh>8 && diemtrungbinh<10)
    {
        cout << "Xep loai gioi";
    }else if(diemtrungbinh == 10)
    {
        cout << "Xep loai xuat sac";
    }else
    {
        cout << "Nhap lai diem di ban";
    }
    cout << "\nTam biet ban\n";
    return 0;
    
}
