#include <iostream>

using namespace std;

string encryptDecrypt(string toEncrypt) {
    char key[2] = {'A', 'B'}; //Any chars will work, add more chars if you want
    string output = toEncrypt;
    
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key[i % (sizeof(key) / sizeof(char))];
    
    return output;
}

int main()
{
    
    cout << "Text to encrypt/decrypt: ";
    string tenc;
    cin >> tenc;
    string encrypted = encryptDecrypt(tenc);
    cout << "Result:" << encrypted << "\n";
    
    return 0;
}