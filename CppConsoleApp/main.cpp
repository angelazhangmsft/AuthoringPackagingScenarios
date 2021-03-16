#include "pch.h"
#include <iostream>

using namespace winrt;
using namespace Windows::Foundation;
using namespace std;

int main()
{
    init_apartment();
    AuthoringDemo::Example ex;
    ex.SampleProperty(42);
    wcout << ex.SampleProperty() << endl;
    wcout << ex.SayHello().c_str() << endl;
}
