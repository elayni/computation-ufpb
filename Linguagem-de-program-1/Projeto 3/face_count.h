#ifndef FACE_COUNT_H
#define FACE_COUNT_H
#include <exception>
#include "texto.h"

using namespace std;
using namespace cv;

class FaceCount {
    public:
        FaceCount();
        void detectarFace(Mat &img, CascadeClassifier &cascade, double scale);
        virtual ~FaceCount();
        void correctBug(int);

        Texto txt;
        int getCont();
        double getClock();
        void setClock(double);
        double getMed();
        void setMed(double);

    protected:
        int cont = 0;
        int comparador1 = 0;
        int comparador2 = 0;
        int dif = 0;
        int filtro = 0;
	    double med;
        double clock;

};

#endif // FACE_COUNT_H
