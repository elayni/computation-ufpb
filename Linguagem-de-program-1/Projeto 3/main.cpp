  /**Detector de face com o uso da linguagem C++ e do opencv *
    *Discentes: Elayni, Erisson, Gabriel e Joison.            *
    *Versão 3.0 para Windows                                 *
    */

#include <iostream>
#include <ctime>
#include <chrono>
//#include <unistd.h>  //biblioteca apenas para Linux (para uso do unsleep)

#include "face_count.h"
#include "texto.h"

using namespace chrono;

int main() {

    long frameCounter = 0;
    int tick = 0;
    clock_t ti, tf;
    VideoCapture capture;
    Mat frame;
    CascadeClassifier cascade;
    double scale = 2;
    double g = 60,timet = 1;
    int x;
    string cascadeName;
    FaceCount face;

    cascadeName = "/opencv/sources/data/haarcascades/haarcascade_frontalface_alt.xml";

    time_t timeBegin = time(0);

    if( !cascade.load( cascadeName )) {
        cerr << "ERRO" << endl;
        return -1;
    }

    try {
        if(!capture.open(0))
            cout << "Capture from camera #0 didn't work" << endl;
    }
    catch(exception& e) {
        cout << " Excecao capturada " << e.what() << endl;
    }

    if( capture.isOpened( )) {
        cout << "Camera esta sendo aberta ..." << endl;

        steady_clock::time_point t1 = steady_clock::now();

        do {
            frameCounter++;
            ti=clock();

            time_t timeNow = time(0) - timeBegin;

            try {
                capture >> frame;
                flip(frame,frame,1);

            }
            catch (Exception& e) {
                cout << " Excecao2 capturada frame: " << e.what() << endl;
                //usleep(1000000);
                continue;
            }
            catch (exception& e) {
                cout << " Excecao3 capturada frame: " << e.what() << endl;
                //usleep(1000000);
                continue;
            }

            if( frame.empty( ))
                break;

            steady_clock::time_point t2 = steady_clock::now();
            duration <double> tempo = duration_cast<duration<double>>(t2-t1);
            timet = tempo.count();

            face.detectarFace(frame, cascade, scale);

            tf = clock();

            char c = (char)waitKey(10);
            if( c == 27 || c == 'q' || c == 'Q' )
                break;

        }
        while(timet < g);
    }

    x = face.getCont()/(g/60);
    cout << "Passaram "<< x-1 <<" Pessoas por Minuto." << endl;

    return 0;
}
