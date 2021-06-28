#include <iostream>
#include <vector>
using namespace std;

template<class T>
void arrayOutput(vector<T> &a)
{
    for(int i; i < a.size(); i++) 
    {
        cout << a[i] << " ";
    }
}

template<class T>
void arrayInput(vector<T> &a)
{
    int n;
    cin >> n;
    if(n < 1)  
        return;
    a.resize(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

template<class T>
void arrayFloatOutput(vector<T> &a)
{
    for(int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}

void arrayFloatInput(vector<float> &a)
{
    float x;
    while(cin >> x)
    {
        a.push_back(x);
    }
}

// tao mang
template<class T>
void intarrayMake(vector<T> &a, T elements[], int n)
{
    int i = 0;
    a.resize(0);
    while(i < n)
    {
        a.push_back(elements[i]);
        i++;
    }
}

// xuat mang
template<class T>
void intarrayOutput(vector<T> &a, ostream& outDev)
{
    for(int i = 0; i < a.size(); i++)
    {
        outDev << a[i] << " ";
    }
    outDev << endl;
}

// ghep mang
template<class T>
void intarrayCat(vector<T> &dest, vector<T> &src)
{
    int size1 = dest.size();
    int size2 = src.size();
    int idx = size1;
    int newSize = size1 + size2;
    int i = 0;
    dest.resize(newSize);
    while(i < size2) {
        dest[idx] = src[i];
        idx++;
        i++;
    }
}

// cat mang
template<class T>
void intarrayCutFrom(vector<T>& a, int pos, vector<T>& b)
{
    int size = a.size();
    int j = pos;
    if(j < 0 || j > size)
        return;
    b.resize(0);
    while(j < size)
    {
        b.push_back(a[j]);
        j++;
    }
    a.resize(pos);
}

// chen phan tu
template<class T>
void intarrayInsert(vector<T>& a, int pos, int element)
{
    if(pos < 0 || pos > a.size())
        return;
    vector<int> b;
    intarrayCutFrom(a, pos, b);
    a.push_back(element);
    intarrayCat(a, b);
}

int main()
{
    /* vector<float> a;
    cout << "Input an array, first is the number of elements:" << endl;
    // arrayInput(a);
    arrayFloatInput(a);
    cout << "Element(s) in the array: ";
    // arrayOutput(a);
    arrayFloatOutput(a);
    cout << endl;
    return 0; */

    int x[] = {3, 5, 2, 4, 9, 7, 8, 6};
    int n = sizeof(x) / sizeof(x[0]);
    vector<int> a, b, c;
    
    intarrayMake(a, x, n);
    cout << "a: "; intarrayOutput(a, cout);
    intarrayCutFrom(a, 3, b);
    cout << "a now: "; intarrayOutput(a, cout);
    cout << "b: "; intarrayOutput(b, cout);
    intarrayCat(b, a);
    cout << "b now: "; intarrayOutput(b, cout);
    a.pop_back();
    cout << "a now: "; intarrayOutput(a, cout);
    intarrayInsert(b, 3, 999);
    cout << "b now: "; intarrayOutput(b, cout);
}