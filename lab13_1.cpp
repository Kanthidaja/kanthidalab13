#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){
  double sum = 0;
  double power = 0,multip = 1.0, oneoverx = 0, max = A[0],min = A[0];
 for(int i=0;i<N;i++){
      if(A[i]>max){
        max = A[i];
    }
    if(A[i]<min){
        min = A[i];
    }
    sum += A[i];
    power += pow(A[i],2);
    multip *= A[i];
    oneoverx += 1/A[i];
  }
  B[0] = sum/N; 
  B[1] = sqrt((power/N)-pow(B[0],2));
  B[2] = pow(multip,(1.0/N));
  B[3] = N / (oneoverx);
  B[4] = max;
  B[5] = min;

}