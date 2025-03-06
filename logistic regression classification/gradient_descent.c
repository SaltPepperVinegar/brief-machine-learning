#include<stdio.h>
#include<math.h>

#define learn_rate 0.0002

int x[10] = {31, 38, 48, 52, 63, 67, 75, 84, 89, 99}, y[10] = {553, 590, 608, 682, 752, 725, 834, 752, 845, 960};

float sigmoid_function(float x, float a, float b){
    return 1/(1+exp(-(a*x+b)));
}




int main(){
    float f;
    f = sigmoid_function(10,1,1);
    printf("sigmoid test: %f\n",f);
    return 0;
}

/*

void LR_gradient_descent(float t0, stepSize, f1,f2 , gradient, epislon){
    float t = t0

    int count = 0;

    while(1){
        count += 1;
        t = 
    }
}


*/




