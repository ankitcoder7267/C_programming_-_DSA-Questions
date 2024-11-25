#include<stdio.h>

int main() {

    char g;
    printf("Enter character : ");
    scanf("%c", &g);
    
    switch (g)
    {    
        case 'A': printf("Prcentage range 90 - 100");
                  break;
            
        case 'B': printf("Prcentage range 80 - 90");
                  break;
            
        case 'C': printf("Prcentage range 70 - 80");
                  break;
            
        case 'D': printf("percentage range 60 - 70");
                  break;
            
        case 'E': printf("percentage range 50 - 60");
                  break;
            
        case 'F': printf("Fail ");
                  break;
            
        default: printf("Invalid  Gradge");
        
        }
    
    return 0;
}