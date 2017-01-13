/**
 * assign_3.c
 *
 * CS 5381 - Analysis of Algorithms
 * Assignment #3
 *
 * Creates a priority queue for a simplified agenda
 *  manager in a rule-based expert system shell.
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>

int max_heapify(A, i);
int heap_extract_max(A);
int build_max_heap(A);
int max_heap_insert(A, key);
int heapsort(A);

int main(int argc, char* argv[])
{
    // ensure proper usage
    if (argc != 1)
    {
        printf("Usage: ./recover\n");
        return 1;
    }
    
    // request input test file and open
    printf("Please input the test file: ");
    string input = get_string();
    FILE* file = fopen(input, "r");
    if (file == NULL)
    {
        printf("Invalid input file.\n");
        return 2;
    }
    
    // read the first line
    char line[300];
    fgets(line, 300, file);
    
    
    
    fclose(file);
}
    