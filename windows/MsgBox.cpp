#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <sstream>
using std::stringstream;
int APIENTRY WinMain(_In_ HINSTANCE hInstace, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine,
_In_ int nCmdShow){

    int resp =MessageBox(NULL, "Vamos calcular o tamanho da tela?", "mensagem", MB_YESNO | MB_DEFBUTTON2 | MB_ICONQUESTION);

    if(resp == IDYES){
        int cxScreen = GetSystemMetrics(SM_CXSCREEN);
        int cyScreen = GetSystemMetrics(SM_CXSCREEN);

        stringstream text;
        text<< "Resolucao:" << cxScreen << "x" <<cyScreen;

        MessageBox(NULL, text.str().c_str(),"tamanho da tela", MB_OK| MB_ICONINFORMATION);
    } else {
        MessageBox(NULL, " um jogo deve conhecer o  tamanho da tela !", "Mensagem", MB_OK|MB_ICONWARNING);
    }
    return 0;

}