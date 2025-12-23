#include <stdio.h>
#include <tchar.h>
#include <math.h>
#include <stdlib.h>

int _tmain(int argc, _TCHAR* argv[]) 
{
    int nElems;
    int* iArray;
    int nSum;
    system("cls");
    printf("Input a count of elements in array\r\n");
    scanf_s("%d", &nElems);
    iArray = calloc(nElems, sizeof(int));
    if (iArray == NULL) return -1;
    nSum = 0;
    srand(time(NULL));
    for (int i = 0; i < nElems; i++)
    {
        iArray[i] = 1 + rand() / 1000;
    }
    printf("Inputed array : ");
    for (int i = 0; i < nElems; i++)
    {
        nSum += iArray[i];
        printf("%d ", iArray[i]);
    }
    free(iArray);
    printf("\r\nThe Sum of % d elements of the array is : % d\r\n",nElems, nSum);
    _fgetchar();
    fgetc(stdin);
}
