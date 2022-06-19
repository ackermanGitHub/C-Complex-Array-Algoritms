// CONCURSE 1
// Exercise 1
void binaryConverter(int number){
    int binaryResult[20];
    int logicSize = 0;
    int i;
    for(i = 0; number != 0; i++){
        binaryResult[i] = number % 2;
        number = number / 2;
        logicSize++;
    }
    for (int j = logicSize - 1; j >= 0; j--)
    {
        printf("%d ", binaryResult[j]);
    }
}
// Exercise 2
void binaryConverter1(int number, int b){
    int binaryResult[20];
    int logicSize = 0;
    int i;
    for(i = 0; number != 0; i++){
        binaryResult[i] = number % b;
        number = number / b;
        logicSize++;
    }
    for (int j = logicSize - 1; j >= 0; j--)
    {
        printf("%d ", binaryResult[j]);
    }
}
// Exercise 3
int threeSum(int arr[], int logicSize, int sum){
    int i, j, k;
    int result = 0;
    for(i = 0; i < logicSize; i++){
        for(j = 0; j < logicSize; j++){
            for(k = 0; k < logicSize; k++){
                if(arr[i] + arr[j] + arr[k] == sum){
                    result++;
                    printf("%d + %d + %d = %d \n", arr[i], arr[j], arr[k], sum);
                }
            }
        }
    }
    return result;
}
// Exercise 4
void cesarCodifier(char arr[], int logicSize){
    for(int i = 0; i < logicSize; i++){
        if(arr[i] < 'N'){
            printf("%c ", arr[i] + 13);
        } else {
            printf("%c ", 'A' + arr[i] - 'N');
        }
    }
}