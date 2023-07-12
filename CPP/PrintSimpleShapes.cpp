#include <iostream>
#include <string>
using namespace std;


    class PrintSimpleShapes {
        public:
       
       void printTriangle()
        {
            cout << "\nTriangle:\n    *\n   ***\n  *****";
        }

        void printSquare()
        {
            cout << "\nSquare:\n   @@@\n   @ @\n   @@@";
        }

        void printRectangle()
        {
            cout << "\nRectangle:\n   #####\n   #   #\n   #####";
        }

        void printDiamond()
        {
            cout << "\nDiamond:\n     %\n   %   %\n     %";
        }
        
        ;
    };

    int main()
    {
        PrintSimpleShapes shapeObj1;
        shapeObj1.printTriangle();
        shapeObj1.printSquare();
        shapeObj1.printRectangle();
        shapeObj1.printDiamond();

       
        return 0;
    }

