//
//  main.cpp
//  IF_Else
//
//  Created by Nguyen Dinh Huong on 08/08/2021.
//

#include <iostream>

using namespace std;

#define Pass 123456
int main()
{
    int Mk;
    cout << "Nhap mat khau cua ban : ";
    cin >> Mk;
    if (Mk == Pass)
    {
        cout << "Ban da nhap dung mat khau\n";
    }
    else
    {
        cout << "Ban da nhap sai mat khau\n";
    }
    cout << "Tam biet\n";
}

