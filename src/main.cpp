#include <iostream>
#include <fstream>

using namespace std;

void encode(ifstream& plain)
{
        unsigned char a, b, c, d;
        for (;;)
        {
                int n = plain.get(); // ABCDEFGH
                if (plain.eof())
                {
                        break;
                }
                a = n >> 3; // 000ABCDE
                b = (n & 0x7); // 00000FGH
                c = (a ^ b) << 3; // AB(C^F)(D^G)(E^H)000
                d = c | b; // AB(C^F)(D^G)(E^H)FGH
                cout << (unsigned char) d;
        }
}

int main(void)
{
        ifstream input;

        input.open("messCypher.txt");

        encode(input);

}
