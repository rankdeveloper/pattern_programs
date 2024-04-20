//right half pyramid
#include <stdio.h>

int main() {


char  arr[5]={'A','B','C','D','E'};



for(int i=0; i<4;  i++){
    for(int j=0; j<=i; j++){
        printf("%c" , arr[j]);
    }
    
    printf("\n");
}

    return 0;
}

// output:
// A
// AB
// ABC
// ABCD