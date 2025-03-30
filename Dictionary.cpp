//Note:The template file will be copied to a new file. When you change the code of the template file you can create new file with this base code. 
#include <iostream>  
using namespace std;  

int main() {  
    string usernametrue = "BURSTFADEPARINBATOYA";  
    string username;  
    string passwordtrue = "YABURSTFADEPARINBATO";  
    string password;  

    cout << "name mo: ";  
    cin >> username;  

    cout << "pass: ";  
    cin >> password;  

    if (username == usernametrue && password == passwordtrue) {  
        float numa, numb, numc, numd, nume;  
        
        cout << "1st number: " << endl;  
        cin >> numa;  

        cout << "2nd number: " << endl;  
        cin >> numb; 
        
        cout << "3rd number: " << endl;
        cin >> numc;
        
        cout << "4th number: " << endl;
        cin >> numd;
        
        cout << "5th number: " << endl;
        cin >> nume;
        
        cout << numa + numb + numc + numd + nume << endl;
        cout << numa - numb - numc - numd - nume << endl;
        cout << numa * numb * numc * numd * nume << endl;
        cout << numa / numb / numc / numd / nume << endl;  
    } else {  
        cout << "Baonam" << endl;  
    }  

    return 0;  
}