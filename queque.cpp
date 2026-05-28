#include <iostream>
using namespace std;

class Queues
{
private:
    static const int max = 3;
    int FRONT, REAR;
    int queque_array[max];

public:
    Queues()
    {
        FRONT = -1;
        REAR = -1;
    }
    void insert()
    {
        int num;
        cout << "Enter a memeber: ";
        cin >> num;
        cout << endl;

        //cek apakah antrian prnuh
        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1))
        { 
            cout << "\nQueue overflow\n";
            return;
        }

    }

}
