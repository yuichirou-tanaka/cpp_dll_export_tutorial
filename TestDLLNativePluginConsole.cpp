// TestDLLNativePluginConsole.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>


//#ifdef __WINDOWS
    #define DLLEXPORT __declspec(dllexport)
//#else
    //#define DLLEXPORT 
//#endif

extern "C" {
    DLLEXPORT int IntTest(int x) {
        x *= 2;
        return x;
    }
}


int main()
{
    //std::cout << "Hello World!\n";
    int id =   IntTest(2);
    std::cout << id << std::endl;
}
