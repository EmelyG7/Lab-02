#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void selectionSort(int [], int, long long int, long long int);
void insertionSort(int [], int, long long int, long long int);
void bubbleSort(int [], int, long long int, long long int);
void printarray(int array[], int val);

void startArray(int *, int);
void shuffle(int *, int);
void swap(int *, int *);

void repeatSelectionSort(int *);
void repeatInsertionSort(int *);
void repeatBubbleSort(int *);


int main() {
   printf("Lab-02 Prueba de funciones:\n| Selection Sort | Insertion Sort | Bubble Sort\n\n");
   int *array=NULL;
   repeatSelectionSort(array);
   repeatInsertionSort(array);
   repeatBubbleSort(array);
   return 0;
}

void swap(int *xp, int *yp)
{
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}

void printarray(int array[], int val)
{
   for (int i = 0; i < val; ++i) {
      printf("- %d ", array[i]);
   }

}
void selectionSort(int arr[], int n, long long int cont, long long int contSwap)
{
   int i, j, min_idx;

   // One by one move boundary of unsorted subarray
   for (i = 0; i < n-1; i++)
   {
      // Find the minimum element in unsorted array
      min_idx = i;

      for (j = i+1; j < n; j++) {
         cont++;
         if (arr[j] < arr[min_idx]){
            min_idx = j;
         }
      }
      // Swap the found minimum element with the first element
      if(min_idx != i) {
         swap(&arr[min_idx], &arr[i]);
         contSwap++;
      }

   }
   printf("| Condicionales: %*lld | Swap: %*lld |", 12, cont,12, contSwap);
}

void insertionSort(int arr[], int n, long long int cont, long long int contSwap) {
   int i, key, j;

   for (i = 1; i < n; i++) {
      key = arr[i];
      j = i - 1;
      /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
      cont++;
      while (j >= 0 && arr[j] > key) {
         arr[j + 1] = arr[j];
         j = j - 1;
         contSwap++;
      }
      arr[j + 1] = key;

   }
   printf("| Condicionales: %*lld | Swap: %*lld |", 12, cont,12, contSwap);
}

void bubbleSort(int arr[], int n, long long int cont, long long int contSwap)
{
   int i, j;

   for (i = 0; i < n - 1; i++)
      // Last i elements are already in place
      for (j = 0; j < n - i - 1; j++) {
         cont++;
         if (arr[j] > arr[j + 1]) {
            swap(&arr[j], &arr[j + 1]);
            contSwap++;
         }
      }
   printf("Condicionales: %*lld | Swap: %*lld |", 12, cont,12, contSwap);
}

void repeatSelectionSort(int array[])
{
   int val, vueltas=5, n=8, temp;
   double prom_01= 0.0f, prom_02= 0.0f, prom_03 = 0.0f, prom_04= 0.0f, prom_05 = 0.0f;
   float prom_cond_01 = 0.0f, prom_cond_02 = 0.0f, prom_cond_03 = 0.0f, prom_cond_04 = 0.0f, prom_cond_05 = 0.0f;
   float prom_swap_01 = 0.0f, prom_swap_02 = 0.0f, prom_swap_03 = 0.0f, prom_swap_04 = 0.0f, prom_swap_05 = 0.0f;

   long long int  cont_01_1=0, contSwap_01_1=0;
   long long int  cont_01_2=0, contSwap_01_2=0;
   long long int  cont_01_3=0, contSwap_01_3=0;
   long long int  cont_01_4=0, contSwap_01_4=0;
   long long int  cont_01_5=0, contSwap_01_5=0;
   long long int  cont_01_6=0, contSwap_01_6=0;
   long long int  cont_01_7=0, contSwap_01_7=0;
   long long int  cont_01_8=0, contSwap_01_8=0;

   long long int  cont_02_1=0, contSwap_02_1=0;
   long long int  cont_02_2=0, contSwap_02_2=0;
   long long int  cont_02_3=0, contSwap_02_3=0;
   long long int  cont_02_4=0, contSwap_02_4=0;
   long long int  cont_02_5=0, contSwap_02_5=0;
   long long int  cont_02_6=0, contSwap_02_6=0;
   long long int  cont_02_7=0, contSwap_02_7=0;
   long long int  cont_02_8=0, contSwap_02_8=0;

   long long int  cont_03_1=0, contSwap_03_1=0;
   long long int  cont_03_2=0, contSwap_03_2=0;
   long long int  cont_03_3=0, contSwap_03_3=0;
   long long int  cont_03_4=0, contSwap_03_4=0;
   long long int  cont_03_5=0, contSwap_03_5=0;
   long long int  cont_03_6=0, contSwap_03_6=0;
   long long int  cont_03_7=0, contSwap_03_7=0;
   long long int  cont_03_8=0, contSwap_03_8=0;

   long long int  cont_04_1=0, contSwap_04_1=0;
   long long int  cont_04_2=0, contSwap_04_2=0;
   long long int  cont_04_3=0, contSwap_04_3=0;
   long long int  cont_04_4=0, contSwap_04_4=0;
   long long int  cont_04_5=0, contSwap_04_5=0;
   long long int  cont_04_6=0, contSwap_04_6=0;
   long long int  cont_04_7=0, contSwap_04_7=0;
   long long int  cont_04_8=0, contSwap_04_8=0;

   long long int  cont_05_1=0, contSwap_05_1=0;
   long long int  cont_05_2=0, contSwap_05_2=0;
   long long int  cont_05_3=0, contSwap_05_3=0;
   long long int  cont_05_4=0, contSwap_05_4=0;
   long long int  cont_05_5=0, contSwap_05_5=0;
   long long int  cont_05_6=0, contSwap_05_6=0;
   long long int  cont_05_7=0, contSwap_05_7=0;
   long long int  cont_05_8=0, contSwap_05_8=0;

   long long int Comparaciones_01[n], Comparaciones_02[n], Comparaciones_03[n], Comparaciones_04[n], Comparaciones_05[n];
   long long int Swaps_01[n], Swaps_02[n], Swaps_03[n], Swaps_04[n], Swaps_05[n];
   double timesaver_01[n], timesaver_02[n], timesaver_03[n], timesaver_04[n], timesaver_05[n];
   printf("\nArrays mejor caso por Selection Sort:\n", 164);
   int v =0;
   while(v!=vueltas){
      val=1000,  temp=val;
      printf("\t========== Prueba [%d] ============\n", v+1);
      for(int i = 0; i < n; i++)
      {
         array = malloc(sizeof(int) * val);

         //Llenar el arreglo
         for (int j = 0; j < val; j++) { // Generar un número aleatorio entre 0 y 999
            array[j] = rand()%val;
         }

         //Almacenar Datos
         if(v == 0){

            if(i==0){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_01_1, contSwap_01_1);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_1;
               Swaps_01[i] = contSwap_01_1;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==1){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_01_2, contSwap_01_2);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_2;
               Swaps_01[i] = contSwap_01_2;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==2){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_01_3, contSwap_01_3);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_3;
               Swaps_01[i] = contSwap_01_3;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==3){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_01_4, contSwap_01_4);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_4;
               Swaps_01[i] = contSwap_01_4;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==4){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_01_5, contSwap_01_5);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_5;
               Swaps_01[i] = contSwap_01_5;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==5){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_01_6, contSwap_01_6);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_6;
               Swaps_01[i] = contSwap_01_6;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==6){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_01_7, contSwap_01_7);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_7;
               Swaps_01[i] = contSwap_01_7;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==7){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_01_8, contSwap_01_8);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_8;
               Swaps_01[i] = contSwap_01_8;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }

         }else if(v == 1){
            if(i==0){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_02_1, contSwap_02_1);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_1;
               Swaps_02[i] = contSwap_02_1;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==1){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_02_2, contSwap_02_2);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_2;
               Swaps_02[i] = contSwap_02_2;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==2){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_02_3, contSwap_02_3);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_3;
               Swaps_02[i] = contSwap_02_3;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==3){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_02_4, contSwap_02_4);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_4;
               Swaps_02[i] = contSwap_02_4;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==4){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_02_5, contSwap_02_5);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_5;
               Swaps_02[i] = contSwap_02_5;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==5){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_02_6, contSwap_01_6);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_6;
               Swaps_02[i] = contSwap_02_6;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==6){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_02_7, contSwap_02_7);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_7;
               Swaps_02[i] = contSwap_02_7;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==7){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_02_8, contSwap_02_8);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_8;
               Swaps_02[i] = contSwap_02_8;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }

         }else if(v == 2){

            if(i==0){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_03_1, contSwap_03_1);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_1;
               Swaps_03[i] = contSwap_03_1;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==1){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_03_2, contSwap_03_2);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_2;
               Swaps_03[i] = contSwap_03_2;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==2){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_03_3, contSwap_03_3);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_3;
               Swaps_03[i] = contSwap_03_3;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==3){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_03_4, contSwap_03_4);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_4;
               Swaps_03[i] = contSwap_03_4;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==4){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_03_5, contSwap_03_5);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_5;
               Swaps_03[i] = contSwap_03_5;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==5){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_03_6, contSwap_03_6);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_6;
               Swaps_03[i] = contSwap_03_6;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==6){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_03_7, contSwap_03_7);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_7;
               Swaps_03[i] = contSwap_03_7;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==7){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_03_8, contSwap_03_8);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_8;
               Swaps_03[i] = contSwap_03_8;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }

         }else if(v == 3){

            if(i==0){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_04_1, contSwap_04_1);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_1;
               Swaps_04[i] = contSwap_04_1;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==1){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_04_2, contSwap_04_2);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_2;
               Swaps_04[i] = contSwap_04_2;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==2){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_04_3, contSwap_04_3);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_3;
               Swaps_04[i] = contSwap_04_3;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==3){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_04_4, contSwap_04_4);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_4;
               Swaps_04[i] = contSwap_04_4;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==4){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_04_5, contSwap_04_5);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_5;
               Swaps_04[i] = contSwap_04_5;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==5){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_04_6, contSwap_04_6);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_6;
               Swaps_04[i] = contSwap_04_6;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==6){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_04_7, contSwap_04_7);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_7;
               Swaps_04[i] = contSwap_04_7;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==7){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_04_8, contSwap_04_8);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_8;
               Swaps_04[i] = contSwap_04_8;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }

         }else if(v == 4){

            if(i==0){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_05_1, contSwap_05_1);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_1;
               Swaps_05[i] = contSwap_05_1;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==1){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_05_2, contSwap_05_2);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_2;
               Swaps_05[i] = contSwap_05_2;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];

               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==2){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_05_3, contSwap_05_3);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_3;
               Swaps_05[i] = contSwap_05_3;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==3){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_05_4, contSwap_05_4);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_4;
               Swaps_05[i] = contSwap_05_4;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==4){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_05_5, contSwap_05_5);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_5;
               Swaps_05[i] = contSwap_05_5;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==5){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_05_6, contSwap_05_6);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_6;
               Swaps_05[i] = contSwap_05_6;
               timesaver_05[i] = time_spent;
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==6){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_05_7, contSwap_05_7);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_7;
               Swaps_05[i] = contSwap_05_7;
               timesaver_05[i] = time_spent;

               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==7){
               double time_spent = 0.0;
               clock_t begin = clock();
               selectionSort(array, val, cont_05_8, contSwap_05_8);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_8;
               Swaps_05[i] = contSwap_05_8;
               timesaver_05[i] = time_spent;
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }
            prom_05+=timesaver_05[i];
            prom_cond_05+=(float)Comparaciones_05[i];
            prom_swap_05+=(float)Swaps_05[i];
         }

         free(array);

         if(i==0){
            val = 10000;
         }else if(i==1){
            val = 50000;
            //size = 1000;

         }else if(i==2){
            val = 80000;
            //size = 1000;

         }else if(i==3){
            val = 100000;
            //size = 1000;

         }else if(i==4){
            val = 500000;
            //size = 1000;

         }else if(i==5){
            val = 750000;
            //size = 1000;

         }else if(i==6){
            val = 1000000;
            //size = 1000;

         }

      }
      if(v == 0){
         prom_01/=(float)n;
         prom_cond_01/=(float)n;
         prom_swap_01/=(float)n;
         printf("Promedio tiempo: %f |Promedio Cond: %f | Promedio Swaps: %f |\n\n", 164, prom_01, prom_cond_01, prom_swap_01);
      }else if(v == 1){
         prom_02/=(float)n;
         prom_cond_02/=(float)n;
         prom_swap_02/=(float)n;
         printf("Promedio tiempo: %f |Promedio Cond: %f | Promedio Swaps: %f |\n\n", 164, prom_02, prom_cond_02, prom_swap_02);
      }else if(v == 2){
         prom_03/=(float)n;
         prom_cond_03/=(float)n;
         prom_swap_03/=(float)n;
         printf("Promedio tiempo: %f |Promedio Cond: %f | Promedio Swaps: %f |\n\n", 164, prom_03, prom_cond_03, prom_swap_03);
      }else if(v == 3){
         prom_04/=(float)n;
         prom_cond_04/=(float)n;
         prom_swap_04/=(float)n;
         printf("Promedio tiempo: %f |Promedio Cond: %f | Promedio Swaps: %f |\n\n", 164, prom_04, prom_cond_04, prom_swap_04);
      }else if(v == 4){
         prom_05/=(float)n;
         prom_cond_05/=(float)n;
         prom_swap_05/=(float)n;
         printf("Promedio tiempo: %f |Promedio Cond: %f | Promedio Swaps: %f |\n\n", 164, prom_05, prom_cond_05, prom_swap_05);
      }
      v++;
   }

}

void repeatInsertionSort(int array[])
{
   int val, vueltas=5, n=8, temp;
   double prom_01= 0.0f, prom_02= 0.0f, prom_03 = 0.0f, prom_04= 0.0f, prom_05 = 0.0f;
   float prom_cond_01 = 0.0f, prom_cond_02 = 0.0f, prom_cond_03 = 0.0f, prom_cond_04 = 0.0f, prom_cond_05 = 0.0f;
   float prom_swap_01 = 0.0f, prom_swap_02 = 0.0f, prom_swap_03 = 0.0f, prom_swap_04 = 0.0f, prom_swap_05 = 0.0f;

   long long int  cont_01_1=0, contSwap_01_1=0;
   long long int  cont_01_2=0, contSwap_01_2=0;
   long long int  cont_01_3=0, contSwap_01_3=0;
   long long int  cont_01_4=0, contSwap_01_4=0;
   long long int  cont_01_5=0, contSwap_01_5=0;
   long long int  cont_01_6=0, contSwap_01_6=0;
   long long int  cont_01_7=0, contSwap_01_7=0;
   long long int  cont_01_8=0, contSwap_01_8=0;

   long long int  cont_02_1=0, contSwap_02_1=0;
   long long int  cont_02_2=0, contSwap_02_2=0;
   long long int  cont_02_3=0, contSwap_02_3=0;
   long long int  cont_02_4=0, contSwap_02_4=0;
   long long int  cont_02_5=0, contSwap_02_5=0;
   long long int  cont_02_6=0, contSwap_02_6=0;
   long long int  cont_02_7=0, contSwap_02_7=0;
   long long int  cont_02_8=0, contSwap_02_8=0;

   long long int  cont_03_1=0, contSwap_03_1=0;
   long long int  cont_03_2=0, contSwap_03_2=0;
   long long int  cont_03_3=0, contSwap_03_3=0;
   long long int  cont_03_4=0, contSwap_03_4=0;
   long long int  cont_03_5=0, contSwap_03_5=0;
   long long int  cont_03_6=0, contSwap_03_6=0;
   long long int  cont_03_7=0, contSwap_03_7=0;
   long long int  cont_03_8=0, contSwap_03_8=0;

   long long int  cont_04_1=0, contSwap_04_1=0;
   long long int  cont_04_2=0, contSwap_04_2=0;
   long long int  cont_04_3=0, contSwap_04_3=0;
   long long int  cont_04_4=0, contSwap_04_4=0;
   long long int  cont_04_5=0, contSwap_04_5=0;
   long long int  cont_04_6=0, contSwap_04_6=0;
   long long int  cont_04_7=0, contSwap_04_7=0;
   long long int  cont_04_8=0, contSwap_04_8=0;

   long long int  cont_05_1=0, contSwap_05_1=0;
   long long int  cont_05_2=0, contSwap_05_2=0;
   long long int  cont_05_3=0, contSwap_05_3=0;
   long long int  cont_05_4=0, contSwap_05_4=0;
   long long int  cont_05_5=0, contSwap_05_5=0;
   long long int  cont_05_6=0, contSwap_05_6=0;
   long long int  cont_05_7=0, contSwap_05_7=0;
   long long int  cont_05_8=0, contSwap_05_8=0;

   long long int Comparaciones_01[n], Comparaciones_02[n], Comparaciones_03[n], Comparaciones_04[n], Comparaciones_05[n];
   long long int Swaps_01[n], Swaps_02[n], Swaps_03[n], Swaps_04[n], Swaps_05[n];
   double timesaver_01[n], timesaver_02[n], timesaver_03[n], timesaver_04[n], timesaver_05[n];
   printf("\nArrays mejor caso por Insertion Sort:\n", 164);
   int v =0;
   while(v!=vueltas){

      val=1000,  temp=val;
      printf("\t========== Prueba [%d] ============\n", v+1);
      for(int i = 0; i < n; i++)
      {
         array = malloc(sizeof(int) * val);

         //Llenar el arreglo
         for (int j = 0; j < val; j++) { // Generar un número aleatorio entre 0 y 999
            array[j] = rand()%val;
         }

         //Almacenar Datos
         if(v == 0){

            if(i==0){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_01_1, contSwap_01_1);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_1;
               Swaps_01[i] = contSwap_01_1;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==1){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_01_2, contSwap_01_2);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_2;
               Swaps_01[i] = contSwap_01_2;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==2){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_01_3, contSwap_01_3);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_3;
               Swaps_01[i] = contSwap_01_3;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==3){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_01_4, contSwap_01_4);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_4;
               Swaps_01[i] = contSwap_01_4;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==4){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_01_5, contSwap_01_5);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_5;
               Swaps_01[i] = contSwap_01_5;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==5){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_01_6, contSwap_01_6);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_6;
               Swaps_01[i] = contSwap_01_6;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==6){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_01_7, contSwap_01_7);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_7;
               Swaps_01[i] = contSwap_01_7;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==7){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_01_8, contSwap_01_8);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_8;
               Swaps_01[i] = contSwap_01_8;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }

         }else if(v == 1){
            if(i==0){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_02_1, contSwap_02_1);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_1;
               Swaps_02[i] = contSwap_02_1;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==1){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_02_2, contSwap_02_2);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_2;
               Swaps_02[i] = contSwap_02_2;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==2){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_02_3, contSwap_02_3);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_3;
               Swaps_02[i] = contSwap_02_3;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==3){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_02_4, contSwap_02_4);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_4;
               Swaps_02[i] = contSwap_02_4;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==4){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_02_5, contSwap_02_5);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_5;
               Swaps_02[i] = contSwap_02_5;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==5){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_02_6, contSwap_01_6);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_6;
               Swaps_02[i] = contSwap_02_6;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==6){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_02_7, contSwap_02_7);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_7;
               Swaps_02[i] = contSwap_02_7;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==7){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_02_8, contSwap_02_8);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_8;
               Swaps_02[i] = contSwap_02_8;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }

         }else if(v == 2){

            if(i==0){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_03_1, contSwap_03_1);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_1;
               Swaps_03[i] = contSwap_03_1;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==1){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_03_2, contSwap_03_2);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_2;
               Swaps_03[i] = contSwap_03_2;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==2){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_03_3, contSwap_03_3);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_3;
               Swaps_03[i] = contSwap_03_3;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==3){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_03_4, contSwap_03_4);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_4;
               Swaps_03[i] = contSwap_03_4;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==4){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_03_5, contSwap_03_5);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_5;
               Swaps_03[i] = contSwap_03_5;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==5){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_03_6, contSwap_03_6);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_6;
               Swaps_03[i] = contSwap_03_6;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==6){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_03_7, contSwap_03_7);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_7;
               Swaps_03[i] = contSwap_03_7;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==7){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_03_8, contSwap_03_8);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_8;
               Swaps_03[i] = contSwap_03_8;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }

         }else if(v == 3){

            if(i==0){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_04_1, contSwap_04_1);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_1;
               Swaps_04[i] = contSwap_04_1;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==1){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_04_2, contSwap_04_2);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_2;
               Swaps_04[i] = contSwap_04_2;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==2){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_04_3, contSwap_04_3);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_3;
               Swaps_04[i] = contSwap_04_3;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==3){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_04_4, contSwap_04_4);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_4;
               Swaps_04[i] = contSwap_04_4;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==4){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_04_5, contSwap_04_5);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_5;
               Swaps_04[i] = contSwap_04_5;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==5){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_04_6, contSwap_04_6);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_6;
               Swaps_04[i] = contSwap_04_6;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==6){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_04_7, contSwap_04_7);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_7;
               Swaps_04[i] = contSwap_04_7;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==7){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_04_8, contSwap_04_8);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_8;
               Swaps_04[i] = contSwap_04_8;
               timesaver_04[i] = time_spent;

               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }

         }else if(v == 4){

            if(i==0){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_05_1, contSwap_05_1);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_1;
               Swaps_05[i] = contSwap_05_1;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==1){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_05_2, contSwap_05_2);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_2;
               Swaps_05[i] = contSwap_05_2;
               timesaver_05[i] = time_spent;

               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];

               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==2){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_05_3, contSwap_05_3);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_3;
               Swaps_05[i] = contSwap_05_3;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==3){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_05_4, contSwap_05_4);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_4;
               Swaps_05[i] = contSwap_05_4;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==4){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_05_5, contSwap_05_5);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_5;
               Swaps_05[i] = contSwap_05_5;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==5){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_05_6, contSwap_05_6);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_6;
               Swaps_05[i] = contSwap_05_6;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==6){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_05_7, contSwap_05_7);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_7;
               Swaps_05[i] = contSwap_05_7;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==7){
               double time_spent = 0.0;
               clock_t begin = clock();
               insertionSort(array, val, cont_05_8, contSwap_05_8);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_8;
               Swaps_05[i] = contSwap_05_8;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }

         }

         free(array);
         if(i==0){
            val = 10000;
         }else if(i==1){
            val = 50000;
            //size = 1000;

         }else if(i==2){
            val = 80000;
            //size = 1000;

         }else if(i==3){
            val = 100000;
            //size = 1000;

         }else if(i==4){
            val = 500000;
            //size = 1000;

         }else if(i==5){
            val = 750000;
            //size = 1000;

         }else if(i==6){
            val = 1000000;
            //size = 1000;

         }
      }
      if(v == 0){
         prom_01/=(float)n;
         prom_cond_01/=(float)n;
         prom_swap_01/=(float)n;
         printf("Promedio tiempo: %f |Promedio Cond: %f | Promedio Swaps: %f |\n\n", 164, prom_01, prom_cond_01, prom_swap_01);
      }else if(v == 1){
         prom_02/=(float)n;
         prom_cond_02/=(float)n;
         prom_swap_02/=(float)n;
         printf("Promedio tiempo: %f |Promedio Cond: %f | Promedio Swaps: %f |\n\n", 164, prom_02, prom_cond_02, prom_swap_02);
      }else if(v == 2){
         prom_03/=(float)n;
         prom_cond_03/=(float)n;
         prom_swap_03/=(float)n;
         printf("Promedio tiempo: %f |Promedio Cond: %f | Promedio Swaps: %f |\n\n", 164, prom_03, prom_cond_03, prom_swap_03);
      }else if(v == 3){
         prom_04/=(float)n;
         prom_cond_04/=(float)n;
         prom_swap_04/=(float)n;
         printf("Promedio tiempo: %f |Promedio Cond: %f | Promedio Swaps: %f |\n\n", 164, prom_04, prom_cond_04, prom_swap_04);
      }else if(v == 4){
         prom_05/=(float)n;
         prom_cond_05/=(float)n;
         prom_swap_05/=(float)n;
         printf("Promedio tiempo: %f |Promedio Cond: %f | Promedio Swaps: %f |\n\n", 164, prom_05, prom_cond_05, prom_swap_05);
      }
      v++;
   }

}

void repeatBubbleSort(int *array)
{
   int val, vueltas=5, n=8, temp;
   double prom_01= 0.0f, prom_02= 0.0f, prom_03 = 0.0f, prom_04= 0.0f, prom_05 = 0.0f;
   float prom_cond_01 = 0.0f, prom_cond_02 = 0.0f, prom_cond_03 = 0.0f, prom_cond_04 = 0.0f, prom_cond_05 = 0.0f;
   float prom_swap_01 = 0.0f, prom_swap_02 = 0.0f, prom_swap_03 = 0.0f, prom_swap_04 = 0.0f, prom_swap_05 = 0.0f;

   long long int  cont_01_1=0, contSwap_01_1=0;
   long long int  cont_01_2=0, contSwap_01_2=0;
   long long int  cont_01_3=0, contSwap_01_3=0;
   long long int  cont_01_4=0, contSwap_01_4=0;
   long long int  cont_01_5=0, contSwap_01_5=0;
   long long int  cont_01_6=0, contSwap_01_6=0;
   long long int  cont_01_7=0, contSwap_01_7=0;
   long long int  cont_01_8=0, contSwap_01_8=0;

   long long int  cont_02_1=0, contSwap_02_1=0;
   long long int  cont_02_2=0, contSwap_02_2=0;
   long long int  cont_02_3=0, contSwap_02_3=0;
   long long int  cont_02_4=0, contSwap_02_4=0;
   long long int  cont_02_5=0, contSwap_02_5=0;
   long long int  cont_02_6=0, contSwap_02_6=0;
   long long int  cont_02_7=0, contSwap_02_7=0;
   long long int  cont_02_8=0, contSwap_02_8=0;

   long long int  cont_03_1=0, contSwap_03_1=0;
   long long int  cont_03_2=0, contSwap_03_2=0;
   long long int  cont_03_3=0, contSwap_03_3=0;
   long long int  cont_03_4=0, contSwap_03_4=0;
   long long int  cont_03_5=0, contSwap_03_5=0;
   long long int  cont_03_6=0, contSwap_03_6=0;
   long long int  cont_03_7=0, contSwap_03_7=0;
   long long int  cont_03_8=0, contSwap_03_8=0;

   long long int  cont_04_1=0, contSwap_04_1=0;
   long long int  cont_04_2=0, contSwap_04_2=0;
   long long int  cont_04_3=0, contSwap_04_3=0;
   long long int  cont_04_4=0, contSwap_04_4=0;
   long long int  cont_04_5=0, contSwap_04_5=0;
   long long int  cont_04_6=0, contSwap_04_6=0;
   long long int  cont_04_7=0, contSwap_04_7=0;
   long long int  cont_04_8=0, contSwap_04_8=0;

   long long int  cont_05_1=0, contSwap_05_1=0;
   long long int  cont_05_2=0, contSwap_05_2=0;
   long long int  cont_05_3=0, contSwap_05_3=0;
   long long int  cont_05_4=0, contSwap_05_4=0;
   long long int  cont_05_5=0, contSwap_05_5=0;
   long long int  cont_05_6=0, contSwap_05_6=0;
   long long int  cont_05_7=0, contSwap_05_7=0;
   long long int  cont_05_8=0, contSwap_05_8=0;

   long long int Comparaciones_01[n], Comparaciones_02[n], Comparaciones_03[n], Comparaciones_04[n], Comparaciones_05[n];
   long long int Swaps_01[n], Swaps_02[n], Swaps_03[n], Swaps_04[n], Swaps_05[n];
   double timesaver_01[n], timesaver_02[n], timesaver_03[n], timesaver_04[n], timesaver_05[n];
   printf("\nArrays mejor caso por Bubble Sort:\n", 164);
   int v =0;
   while(v!=vueltas){

      val=1000,  temp=val;
      printf("\t========== Prueba [%d] ============\n", v+1);
      for(int i = 0; i < n; i++)
      {
         array = malloc(sizeof(int) * val);

         //Llenar el arreglo
         for (int j = 0; j < val; j++) { // Generar un número aleatorio entre 0 y 999
            array[j] =rand()%val;
         }

         //Almacenar Datos
         if(v == 0){

            if(i==0){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_01_1, contSwap_01_1);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_1;
               Swaps_01[i] = contSwap_01_1;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==1){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_01_2, contSwap_01_2);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_2;
               Swaps_01[i] = contSwap_01_2;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==2){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_01_3, contSwap_01_3);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_3;
               Swaps_01[i] = contSwap_01_3;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==3){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_01_4, contSwap_01_4);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_4;
               Swaps_01[i] = contSwap_01_4;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==4){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_01_5, contSwap_01_5);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_5;
               Swaps_01[i] = contSwap_01_5;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==5){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_01_6, contSwap_01_6);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_6;
               Swaps_01[i] = contSwap_01_6;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==6){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_01_7, contSwap_01_7);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_7;
               Swaps_01[i] = contSwap_01_7;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==7){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_01_8, contSwap_01_8);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_01[i] = cont_01_8;
               Swaps_01[i] = contSwap_01_8;
               timesaver_01[i] = time_spent;
               prom_01+=timesaver_01[i];
               prom_cond_01+=(float)Comparaciones_01[i];
               prom_swap_01+=(float)Swaps_01[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }

         }else if(v == 1){
            if(i==0){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_02_1, contSwap_02_1);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_1;
               Swaps_02[i] = contSwap_02_1;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==1){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_02_2, contSwap_02_2);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_2;
               Swaps_02[i] = contSwap_02_2;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==2){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_02_3, contSwap_02_3);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_3;
               Swaps_02[i] = contSwap_02_3;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==3){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_02_4, contSwap_02_4);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_4;
               Swaps_02[i] = contSwap_02_4;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==4){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_02_5, contSwap_02_5);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_5;
               Swaps_02[i] = contSwap_02_5;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==5){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_02_6, contSwap_01_6);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_6;
               Swaps_02[i] = contSwap_02_6;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==6){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_02_7, contSwap_02_7);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_7;
               Swaps_02[i] = contSwap_02_7;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==7){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_02_8, contSwap_02_8);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_02[i] = cont_02_8;
               Swaps_02[i] = contSwap_02_8;
               timesaver_02[i] = time_spent;
               prom_02+=timesaver_02[i];
               prom_cond_02+=(float)Comparaciones_02[i];
               prom_swap_02+=(float)Swaps_02[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }

         }else if(v == 2){

            if(i==0){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_03_1, contSwap_03_1);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_1;
               Swaps_03[i] = contSwap_03_1;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==1){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_03_2, contSwap_03_2);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_2;
               Swaps_03[i] = contSwap_03_2;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==2){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_03_3, contSwap_03_3);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_3;
               Swaps_03[i] = contSwap_03_3;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==3){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_03_4, contSwap_03_4);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_4;
               Swaps_03[i] = contSwap_03_4;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==4){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_03_5, contSwap_03_5);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_5;
               Swaps_03[i] = contSwap_03_5;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==5){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_03_6, contSwap_03_6);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_6;
               Swaps_03[i] = contSwap_03_6;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==6){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_03_7, contSwap_03_7);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_7;
               Swaps_03[i] = contSwap_03_7;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==7){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_03_8, contSwap_03_8);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_03[i] = cont_03_8;
               Swaps_03[i] = contSwap_03_8;
               timesaver_03[i] = time_spent;
               prom_03+=timesaver_03[i];
               prom_cond_03+=(float)Comparaciones_03[i];
               prom_swap_03+=(float)Swaps_03[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }

         }else if(v == 3){

            if(i==0){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_04_1, contSwap_04_1);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_1;
               Swaps_04[i] = contSwap_04_1;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==1){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_04_2, contSwap_04_2);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_2;
               Swaps_04[i] = contSwap_04_2;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==2){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_04_3, contSwap_04_3);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_3;
               Swaps_04[i] = contSwap_04_3;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==3){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_04_4, contSwap_04_4);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_4;
               Swaps_04[i] = contSwap_04_4;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==4){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_04_5, contSwap_04_5);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_5;
               Swaps_04[i] = contSwap_04_5;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==5){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_04_6, contSwap_04_6);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_6;
               Swaps_04[i] = contSwap_04_6;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==6){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_04_7, contSwap_04_7);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_7;
               Swaps_04[i] = contSwap_04_7;
               timesaver_04[i] = time_spent;
               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==7){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_04_8, contSwap_04_8);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_04[i] = cont_04_8;
               Swaps_04[i] = contSwap_04_8;
               timesaver_04[i] = time_spent;

               prom_04+=timesaver_04[i];
               prom_cond_04+=(float)Comparaciones_04[i];
               prom_swap_04+=(float)Swaps_04[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }

         }else if(v == 4){

            if(i==0){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_05_1, contSwap_05_1);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_1;
               Swaps_05[i] = contSwap_05_1;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==1){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_05_2, contSwap_05_2);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_2;
               Swaps_05[i] = contSwap_05_2;
               timesaver_05[i] = time_spent;

               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];

               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==2){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_05_3, contSwap_05_3);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_3;
               Swaps_05[i] = contSwap_05_3;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==3){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_05_4, contSwap_05_4);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_4;
               Swaps_05[i] = contSwap_05_4;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==4){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_05_5, contSwap_05_5);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_5;
               Swaps_05[i] = contSwap_05_5;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==5){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_05_6, contSwap_05_6);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_6;
               Swaps_05[i] = contSwap_05_6;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==6){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_05_7, contSwap_05_7);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_7;
               Swaps_05[i] = contSwap_05_7;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }else if(i==7){
               double time_spent = 0.0;
               clock_t begin = clock();
               bubbleSort(array, val, cont_05_8, contSwap_05_8);
               clock_t end = clock();
               time_spent += (double) (end - begin) / CLOCKS_PER_SEC;
               Comparaciones_05[i] = cont_05_8;
               Swaps_05[i] = contSwap_05_8;
               timesaver_05[i] = time_spent;
               prom_05+=timesaver_05[i];
               prom_cond_05+=(float)Comparaciones_05[i];
               prom_swap_05+=(float)Swaps_05[i];
               printf(" Tiempo: %*f segundos | Tama%co: %*d|\n", 8, time_spent, 164, 8, val);
            }

         }

         free(array);

         if(i==0){
            val = 10000;
         }else if(i==1){
            val = 50000;
            //size = 1000;

         }else if(i==2){
            val = 80000;
            //size = 1000;

         }else if(i==3){
            val = 100000;
            //size = 1000;

         }else if(i==4){
            val = 500000;
            //size = 1000;

         }else if(i==5){
            val = 750000;
            //size = 1000;

         }else if(i==6){
            val = 1000000;
            //size = 1000;

         }
      }
      if(v == 0){
         prom_01/=(float)n;
         prom_cond_01/=(float)n;
         prom_swap_01/=(float)n;
         printf("Promedio tiempo: %f |Promedio Cond: %f | Promedio Swaps: %f |\n\n", 164, prom_01, prom_cond_01, prom_swap_01);
      }else if(v == 1){
         prom_02/=(float)n;
         prom_cond_02/=(float)n;
         prom_swap_02/=(float)n;
         printf("Promedio tiempo: %f |Promedio Cond: %f | Promedio Swaps: %f |\n\n", 164, prom_02, prom_cond_02, prom_swap_02);
      }else if(v == 2){
         prom_03/=(float)n;
         prom_cond_03/=(float)n;
         prom_swap_03/=(float)n;
         printf("Promedio tiempo: %f |Promedio Cond: %f | Promedio Swaps: %f |\n\n", 164, prom_03, prom_cond_03, prom_swap_03);
      }else if(v == 3){
         prom_04/=(float)n;
         prom_cond_04/=(float)n;
         prom_swap_04/=(float)n;
         printf("Promedio tiempo: %f |Promedio Cond: %f | Promedio Swaps: %f |\n\n", 164, prom_04, prom_cond_04, prom_swap_04);
      }else if(v == 4){
         prom_05/=(float)n;
         prom_cond_05/=(float)n;
         prom_swap_05/=(float)n;
         printf("Promedio tiempo: %f |Promedio Cond: %f | Promedio Swaps: %f |\n\n", 164, prom_05, prom_cond_05, prom_swap_05);
      }
      v++;
   }
}

