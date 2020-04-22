#ifndef TEXTO_H
#define TEXTO_H

#include <string>

#include "opencv2/objdetect.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

using namespace std;
using namespace cv;

class Texto {
    public:
        Texto();
        virtual ~Texto();
        void exibirT(string,Mat &m,int);
};

#endif // TEXTO_H
