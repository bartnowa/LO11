#include <iostream>
#include <iomanip>
#include <cmath>

/*
Niniejszy listing zawiera materia³y do nauki
na pierwszy du¿y sprawdzian z programowania
pt: "Podstawy programowania".
Zagadnienia skupiaj¹ siê na: we/wy, zmienne, sta³e,
instrukcje warunkowe i iteracje.

*/
using namespace std;

int main()
{
    /*
    //Zad 6 - wersja 2 ze zmienna pomocnicza
    int n, p=1, d=2, temp;
    cin >> n;
    for (int i=0 ; i<n ; i++)
    {
        cout << p << " ";
        temp = d;
        d = p + d;
        p = temp;
    }
    /*
    //Zad 6 - wersja 1
    int n, p = 1, d = 2;
    cin >> n;
    for (int i=0 ; i<n ; i++) {
        cout << p << " ";
        d = d + p;
        p = d - p;
    }


    /*
    //Zad 5
    int n, k, s=0;
    cin >> n;
    for (int i=1 ; i<n ; i++)
    {
        cin >> k;
        s+=k;
    }
    cout << (n*(n+1))/2 - s;


    /*
    //Zad 4
    int s = 0;
    for (int i=10 ; i<100 ; i++)
        s = s + i;
    cout << s;


    /*
    //Zad 3
    int n;
    cin >> n;
    for (int i=1 ; i<=n ; i++)
    {
        if (n%i==0) cout << i << " ";
    }


    /*
    //Zad 2
    for (int i=100 ; i<1000 ; i++)
        if (i%15==0) cout << i << " ";


    /*
    //Karta pracy 3
    //Zad 1
    int k;
    cin >> k;
    for (int i=0 ; i<k ; i++)
        cout << i*i*i + 3 << " ";


    /*
    //Zad 1.23
    int n, temp, s=0 ;
    cin >> n;
    for (int i=1 ; i<=n ; i++)
    {
        temp = 3*i-1;
        if (i%2==1) temp = temp*(-1);
        s = s + temp;
    }
    cout << s;

    /*
    //Zad 1.22a
    for (int i=2 ; i<16 ; i++)
    {
        if (i%3==0) cout << i << " ";
    }


    /*
    //Zad 1.21c
    int n;
    double w = 1.;
    cin >> n;
    for (int i=1 ; i<=n ; i++)
        w = w*((i+3.)/n);
    cout << w;


    /*
    //Zad 1.21b
    int n;
    double s=0.;
    cin >> n;
    for (int i=1 ; i<=n ; i++)
        s = s + (0.5/i);
    cout << s;


    /*
    //Zad 1.21a - wersja 2
    //Tak nie robiæ na razie, pisaæ w petli
    int n;
    cin >> n;
    cout << (2*n) / ((n*(n+1))/2.);
    /*
    //Zad 1.21a - wersja 1
    int n, s=0;
    cin >> n;
    for (int i=1 ; i<=n ; i++)
        s = s + i;
    cout << (double) (2*n)/s;


    /*
    //Zad 1.20c
    int n, s=0;
    cin >> n;
    for (int i=0 ; i<n ; i++)
        s = s + (6*i-10);
    cout << s;


    /*
    //Zad 1.20b - wersja 3
    int n;
    cin >> n;
    for (int i=-3 ; true ; i=i*(-2))
    {
        cout << i << " ";
        n--;
        if (n==0) break;
    }
    /*
    //Zad 1.20b - wersja 2
    int n, w=-3;
    cin >> n;
    for (int i=1 ; i<=n ; i++)
    {
        if (i==1) cout << w << " ";
            else
            {
                w = w*(-2);
                cout << w << " ";
            }
    }
    /*
    //Zad 1.20b - wersja 1
    int n;
    cin >> n;
    for (int i=0 ; i<n ; i++)
        if (i%2==0) cout << -3*pow(2,i) << " ";
            else cout << 3*pow(2,i) << " ";



    /*
    //Zad 1.20a - wersja 4
    //Najgorsze rozwi¹zanie, bo nie ma wprowadzania n
    for (int i=3 ; i<=48 ; i=i*2)
        cout << i << " ";
    /*
    //Zad 1.20a - wersja 3
    int n;
    cin >> n;
    for (int i=3 ; true ; i=i*2)
    {
        cout << i << " ";
        n--;
        if (n==0) break;
    }
    /*
    //Zad 1.20a - wersja 2
    int n, w=3;
    cin >> n;
    for (int i=1 ; i<=n ; i++)
    {
        if (i==1) cout << w << " ";
            else
            {
                w = w*2;
                cout << w << " ";
            }
    }
    /*
    //Zad 1.20a - wersja 1
    int n;
    cin >> n;
    for (int i=0 ; i<n ; i++)
        cout << 3*pow(2,i) << " ";


    /*
    //Zad 1.19d
    for (int i=12 ; i>=-12 ; i=i-4)
        if (i!=0) cout << i << " ";


    /*
    //Zad 1.19c
    for (int i=12 ; i>=-12 ; i=i-4)
        cout << i << " ";


    /*
    //Zad 1.19a
    for (int i=-4 ; i<=14 ; i=i+3)
        cout << i << " ";


    /*
    //Zad 1.16
    int x;
    cin >> x;
    if (x<1) cout << 2*x;
        else switch(x)
            {
                case 1 : cout << -10;           break;
                case 3 : cout << pow(x-1,4);    break;
                case 6 : cout << sqrt(x-4);     break;
                default: cout << 0;
            }

    /*
    //Zad 7
    int p, k, s;
    cin >> p >> k >> s;
    if ((k-p)>=3*s) cout << "TAK";
        else cout << "NIE";

    /*
    //Zad 6
    int a , p;
    cin >> a >> p;
    if((pow(a,p)-a)%p==0) cout << "TAK";
        else cout << "NIE";

    /*
    //Zad 5
    int a, b, c;
    cin >> a >> b >> c;
    if((c<a && c>b) || (c>a && c<b) cout << "TAK";
        else cout << "NIE";

    /*
    //Zad 4
    const int LIMIT = 20;
    int w;
    cin >> w;
    if (w<=LIMIT) cout << "TAK";
        else cout << "NIE";

    /*
    //Zad 3
    int wiek;
    cin >> wiek;
    if (wiek>=18) cout << "TAK";
        else cout << "NIE";

    /*
    //Zad 2
    int x;
    cin >> x;
    if (x>=100 && x<1000 && (x%13==0)) cout << "TAK";
        else cout << "NIE";

    /*
    //Karta Pracy 2
    //Zad 1
    int x;
    cin >> x;
    if (x%3==0) cout << "TAK";
        else cout << "NIE";

    /*
    //Zad 1.6
    int a;
    cin >> a;
    if (a%2==0) cout << "TAK";
        else cout << "NIE";

    /*
    //Zad 1.7
    int a, b, c;
    cin >> a >> b >> c;
    if (a>=b && a>=c) cout << a;
        else if (b>=a && b>=c) cout << b;
            else cout << c;

    /*
    //Zad 1.8 - wersja 1
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a<=b && a<=c && a<=d) cout << a;
        else if (b<=a && b<=c && b<=d) cout << b;
            else if (c<=a && c<=b && c<=d) cout << c;
                else if (d<=a && d<=b && d<=c) cout << d;
    /*
    //Zad 1.8 - wersja 2
    int a, b, c, d, temp;
    cin >> a >> b >> c >> d;
    temp = a;
    if (b<temp) temp = b;
    if (c<temp) temp = c;
    if (d<temp) temp = d;
    cout << temp;

    /*
    //Zad 1.11
    int a, b, c;
    cin >> a >> b >> c;
    double p;
    p = (a+b+c)/2.;
    cout << sqrt(p*(p-a)*(p-b)*(p-c));


    /*
    // Karta pracy 1
    // Zad 1
    int a, b;
    cin >> a >> b;
    cout << a*a + b*b;


    /*
    //Zad 2
    int a, b;
    cin >> a >> b;
    cout << (a+b)*(a+b);


    /*
    //Zad 3
    int a, b;
    cin >> a >> b;
    cout << (a-b)*(a-b)*(a-b);


    /*
    //Zad 4
    int a, b, c;
    cin >> a >> b >> c;
    cout << a*b*c;


    /*
    //Zad 5
    int a, b;
    cin >> a >> b;
    cout << 2*(a+b)/5;


    /*
    //Zad 6
    double b;
    cin >> b;
    cout << b/1.23;


    /*
    //Zad 7
    int a, b;
    cin >> a >> b;
    cout << a%b;
    */
}
