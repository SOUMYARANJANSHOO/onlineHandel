#include <sapi.h>
#include<iostream>
#include <string>
using namespace std;
int main()
{
  ISpVoice* pVoice=NULL;
  HRESULT hr;
  wstring input;
 a=CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
 if (FAILED(a))
 {   
 cout << "ERROR 404 FAILED INITIALIZING COM\n";
 exit(1);
 }
 HRESULT CoInitializeEx(LPVOID pvReserved, DWORD dwCoInit);
 hr = CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL,       IID_ISpVoice, (void **)&pVoice);
 
if( SUCCEEDED( hr ) )
{   getline(wcin,input);    
    hr = pVoice->Speak(input.c_str(), 0, NULL);
    pVoice->Release();
    pVoice = NULL;
}
return 0;
}