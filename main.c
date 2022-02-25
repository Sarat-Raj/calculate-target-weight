// Online C compiler to run C program online
#include <stdio.h>
void calc(float c, float t, float *p){
    static int w = 0;
    *(p+w) = c;
    if(*(p+w) >= (t-0.01)){
        printf("\nc: %f",*(p+w));
        printf("\tw: %d",w);
        printf("\tM: %d",(w/4));
        w++;
        *(p+w) = *((p+w-1)) - 0.01*(*(p+w-1));
        calc(*(p+w), t, p);
    }
    else {
        printf("\ninvalid");
    }
}

int main() {
    // Write C code here
    int arr[100]={0};
    float current_weight, target_weight;
    printf("Current Weight: ");
    scanf("%f",&current_weight);
    printf("Target Weight: ");
    scanf("%f",&target_weight);
    calc(current_weight, target_weight, &arr[0]);
    return 0;
}
