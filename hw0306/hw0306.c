//
//  hw0306.c
//  hw0306
//
//  Created by michaelleong on 30/04/2021.
//

#include <stdio.h>
#include <stdint.h>

void max( int32_t a, int32_t b ) {
    if ( a >= b ) {
        printf( "%d", a );
    }
    else {
        printf( "%d", b );
    }
    
    return;
}

void myMax(int32_t a, int32_t b) {
    printf("%d", (a>=b)*a + (b>a)*b);
}

int main() {
    //max(9,2);
    myMax(-1, -1);
    
    return 0;
}




