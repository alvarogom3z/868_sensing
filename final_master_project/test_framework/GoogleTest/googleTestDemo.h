#ifndef GOOGLETESTDEMO_H
#define GOOGLETESTDEMO_H

int add(int x, int y){
    return x+y;
}

int power(int base, int exp){
    int result = 1;

    if(exp == 0){
        return 1;
    }

    for(int i = 0; i<exp; i++){
        result *= base;
    }
    return result;
}

#endif