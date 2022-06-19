#define filas 8
#define columnas 8

// CONCURSE 3
// Exercise 1
void displaceArray(int array[], int logicSize, int k){
    int copyArray[logicSize];
    int i;
    for(i = 0; i < logicSize; i++){
        copyArray[i] = array[i];
    }
    for(i = 0; i < logicSize - k; i++){        
        array[i] = copyArray[i + k];
    }
    for(int j = 0; i < logicSize; j++){
        array[i] = copyArray[j];
        i++;
    }
}
// Exercise 2
int alinear(int array[][columnas]){
    // Para guardar la cantidad de cajas x columna    
    int cajasXColumna[columnas] = {0,0,0,0,0,0,0,0};
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            if(array[i][j] == 1){
                cajasXColumna[j]++;
            }
        }
    }
    // Para guardar la cantidad de movimientos necesarios x columna
    int movXColumnas[columnas] = {0,0,0,0,0,0,0,0};
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            if(i > j)
                movXColumnas[i] += cajasXColumna[j] * (i - j);
            else
                movXColumnas[i] += cajasXColumna[j] * (j - i);
        }
    }
    // Para hallar el índice del menor valor en la menor cantidad de movimientos
    int min = 100;
    int index;
    for(int i = 0; i < columnas; i++){
        if(movXColumnas[i] < min){
            min = movXColumnas[i];
            index = i;
        } else if(movXColumnas[i] == min){
            if(index > i) {
                index = i;
            }
        }
    }
    return index;
} 
// Exercise 3
int maxInArray(int array[], int logicSize){
    int max = 0;
    for(int i = 0; i < logicSize; i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}
void rotate(int array[], int size, int k){
    do {
    int copy[size];
    int newSize = maxInArray(array, size);
    for(int i = 0; i < size; i++){
        copy[i] = array[i];
        array[i] = 0;
    }    
    for(int i = 0; i < size; i++){
        for(int j = 0; j < copy[i]; j++){
            array[j]++;
        }
    }
    k--;
    } while(k > 0);
}