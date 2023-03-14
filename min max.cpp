/* 1 - Б “Максимум и минимум в матрице”
Объявите двумерный целочисленный массив размером 5х5.Заполните
его случайными числами из диапазона[0…1000].
Найдите максимальное и минимальное значения среди всех элементов
данного массива.Выведите на экран найденные максимальное и
минимальное значения, и индексы соответствующих элементов.Также
выведите и сам массив.*/


#include <iostream>
#include <cstdlib>
#include <ctime>




int main()
{
    srand(time(0));

    int arr[5][5];

    int max_y = 0;
    int min_y = 0;
    int max_x = 0;
    int min_x = 0;

    std::cout << std::endl;

    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            arr[y][x] =std::rand() % 1001;
            std::cout << arr[y][x] << ' ';

            if (arr[max_y][max_x] < arr[y][x])
            {
                max_y = y;
                max_x = x;
            }

            if (arr[min_y][min_x] > arr[y][x])
            {
                min_y = y;
                min_x = x;
            }
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    printf("max value = %d at index [%d][%d]\n", arr[max_y][max_x], max_y, max_x);
    printf("min value = %d at index [%d][%d]\n", arr[min_y][min_x], min_y, min_x);
    return 0;
}