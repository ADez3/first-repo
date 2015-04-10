#include <stdio.h>
#include <stdlib.h>
 
int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    int polices = 0;
    int counter = 0;
    for(int i = 0; i < n; i++){
        int input;
        scanf("%d",&input);
        if(polices + input < 0){
            counter ++;
            polices = 0;
        }else{
           polices =  polices + input;
        }
    }
    
    printf("%d",counter);
 
    return 0;
}