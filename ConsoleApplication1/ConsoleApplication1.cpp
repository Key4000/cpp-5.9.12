#include <iostream>

using namespace std;

//Строки 
// 
//int CountPair(std::string Str, std::string Pair){
//    int Count = 0;
//    std::string Buffer = "  ";
//    for (size_t i = 0; i < (Str.size() - 1); i++)
//    {
//        Buffer[0] = Str[i];
//        Buffer[1] = Str[i + 1];
//        if (Pair == Buffer) {
//            Count++;
//        }
//    }
//    return Count;
//};


//Массив Char(C-style)
int CountPair(const char CString[],const char Pair[]) {
    int Count = 0;
    char Buffer[2];
    for (size_t i = 0; CString[i] != '\0'; i++)
    {
        Buffer[0] = CString[i];
        Buffer[1] = CString[i + 1];
        if (Pair[0] == Buffer[0] && Pair[1] == Buffer[1]) {
            Count++;
        }
    }
    return Count;
};

int main()
{
    setlocale(LC_ALL, "");

    
    char CString[] = "abab";
    char Pair[] = "ab";
    std::cout << CountPair( "abab", "ab") << std::endl;
    
    
    
    
}

