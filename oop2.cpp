#include <iostream>
#include <string>
using namespace std;

class company
{
private:
    int id[10];
    string name;
    int contact_No[10000];
   static int count;

public:

    void inforamtion(void);
    void display(void);
};

int company::count;

void company::inforamtion(void)
{

    // worker();

    cout << "Enter the id of " << count + 1 << "  Employe" << endl;
    cin >> id[count];
    cout << "Enter the Name of " << count + 1 << " Employe" << endl;
    cin >> name;
    cout << "Enter the Contact number of " << count + 1 << "  Employe" << endl;
    cin >> contact_No[count];
    count++;
}
void company::display(void)
{
    int i;
    for (i = 0; i < count; i++)
    {
        cout << "\nThe detail of employe " << i + 1 << "is " << endl;
        cout << id[i] << endl
             << name << endl
             << contact_No[i] << endl;
    }
}
int main()
{
    company anish;
    // anish.worker();
    anish.inforamtion();
    anish.inforamtion();
  anish.inforamtion();
    anish.display();

    return 0;
}