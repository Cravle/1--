
#include "main.h"

int main()
{
    int x;
    int y;

    setlocale(LC_ALL, "rus");
    SUM* a;
    a = new SUM(4, 6);
    if (!a) {
        cout << "error" << endl;
        return 1;

    }
    cout << "a)" << endl;
    a->get();
    a->getSum();
    delete a;
   
    SUM amas;
    
   
    cout << "__________________________________________________________\n\nb)" << endl;
    cout << "Введите x , y > ";
    cin >> x;
    cin >> y;
 
        amas.setA(x);
        amas.setB(y);
        amas.getSum();


       
    
   
    



}

