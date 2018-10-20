#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    /*
    //Zad 1.29a (zakladamy ze n jest nieparzyste)
    //Warunku nieparzystosci nie wymagam na razie
    int n;
    cin >> n;
    for (int i=0 ; i<n ; i++)
    {
        if (i==0 || i==n-1)
            cout << setw(n/2+1) << "*" << endl;
        else
        {
            if (i<n/2)
                cout << setw(n/2+1-i) << "*"
                << setw(2*i) << "*" << endl;
            if (i==n/2)
                cout << "*"
                << setw(n-1) << "*" << endl;
            if (i>n/2)
                cout << setw(i-n/2+1) << "*"
                << setw(2*(n-i-1)) << "*" << endl;
        }
    }

    /*
    //Zadanie Trojkat 4
    //     *
    //    ***
    //   *****
    //  *******
    // *********

    int n;
    cin >> n;
    for (int i=0 ; i<n ; i++)
    {
        cout << setw(n-i);
        for (int j=0 ; j<2*i+1 ; j++)
        {
            cout << "*";
        }
            cout << endl;
    }

    /*
    //Zadanie Trojkat 3
    //     *
    //    **
    //   ***
    //  ****
    // *****

    int n;
    cin >> n;
    for (int i=0 ; i<n ; i++)
    {
        cout << setw(n-i);
        for (int j=0 ; j<=i ; j++)
        {
            cout << "*";
        }
            cout << endl;
    }

    /*
    //Zadanie Trojkat 2
    // *****
    // ****
    // ***
    // **
    // *

    int n;
    cin >> n;
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<n-i ; j++)
        {
            cout << "*";
        }
            cout << endl;
    }

    /*
    //Zadanie Trojkat 1
    // *
    // **
    // ***
    // ****
    // *****

    int n;
    cin >> n;
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<=i ; j++)
        {
            cout << "*";
        }
            cout << endl;
    }

    /*
    //Zadanie Prostokat n x m
    // *****
    // *****
    // *****
    // *****
    // *****

    int n, m;
    cin >> n >> m;
    for (int i=0 ; i<n ; i++)
    {
        for (int j=0 ; j<m ; j++)
        {
            cout << "*";
        }
            cout << endl;
    }

    /*
    //Zad 1.28c
    int k;
    cin >> k;
    for (int i=0 ; i<k ; i++)
    {
        cout << "*";
        for (int j=0 ; j<i+1 ; j++)
        {
            if (i%2==0) cout << "|";
            else cout << "-";
        }
    }

    /*
    //Zad 1.28b
    int k;
    cin >> k;
    for (int i=0 ; i<k ; i++)
    {
        for (int j=0 ; j<=i ; j++) cout << "*";
        if (i%2==0) cout << "&&";
        else cout << "^^";
    }

    /*
    //Zad 1.28a
    int k;
    cin >> k;
    for (int i=0 ; i<k ; i++)
    {
        cout << "*-|";
    }
    */
}
