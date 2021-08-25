//
//  main.cpp
//  Module12-7
//
//  Created by Ольга Полевик on 24.08.2021.
//

#include <iostream>
#include <string>

using namespace std;

bool IsKPeriodic(const string &s, int K)
{
    if (s.length() % K != 0)
    {
        cout << "Строка не делится на " << K << " без остатка" << endl;
        return false;
    }
    
    for (int i = 1; i < s.length()/K; ++i)
    {
        for (int j = 0; j < K; ++j)
        {
            if (s[i * K + j] != s[j])
            {
                cout << "Строка не является кратной числу " << K << endl;
                return false;
            }
        }
    }
    cout << "Строка является кратной числу " << K << endl;
    return true;
}
 
int main()
{
    setlocale(LC_ALL, "");
    
    cout << "Enter you string" << endl;
    string S;
    cin >> S;
    
    cout << "Enter you number" << endl;
    int K;
    cin >> K;
    
    IsKPeriodic(S, K);
    
    return 0;
}
