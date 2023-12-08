#include <bits/stdc++.h>
#include <cassert>

#define ll long long

using namespace std;

namespace qwe1 {
    template<typename T>
    istream& operator>>(istream& in, vector<T>& v) {
        for (T& i : v)
            in >> i;
        return in;
    }

    void f(istream& in, ostream& out) {
        ll n;
        in >> n;
        vector<string> v(n);
        in >> v;
        sort(v.begin(), v.end(), [](string& f, string& s) {
            return f + s > s + f;
            });
        for (string i : v)
            out << i;
    }

    void test1() {

        {
            istringstream in("4\n2\n20\n004\n66");
            ostringstream out;
            f(in, out);
            assert(out.str() == "66220004");
        }
    }
    
    void test2() {

        {
            istringstream in("2\n100\n1009999999999");
            ostringstream out;
            f(in, out);
            assert(out.str() == "1009999999999100");
        }
    }
    
    void test3() {

        {
            istringstream in("2\n1001\n100");
            ostringstream out;
            f(in, out);
            assert(out.str() == "1001100");
        }
    }
    
    void test4() {

        {
            istringstream in("2 101 10110");
            ostringstream out;
            f(in, out);
            assert(out.str() == "10110110");
            //                   10110101
        }
    }

    void tests() {
        test1();
        test2();
        test3();
        test4();
        cout << "tests end\n";
    }
}

int main1()
{
    using namespace qwe1;
    //tests();
    //while (true)
    f(cin, cout);
    return 0;
}
