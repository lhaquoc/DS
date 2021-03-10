#include <stdio.h>

#define squared(x) x*x
#define squared2(x) (x*x)
#define squared3(x) (x)*(x)
#define squared4(x) ((x)*(x))

int findNumbers(int* nums, int numsSize);

int main() {
    // int nums[7] = {437,315,322,431,686,264,442};
    // printf("%d\n", findNumbers(nums, 686));
    float ans = 18.0/squared(2+1);
    float ans2 = 18.0/squared2(2+1);
    float ans3 = 18.0/squared3(2+1);
    float ans4 = 18.0/squared4(2+1);
    printf("ans = %f\n", ans);
    printf("ans2 = %f\n", ans2);
    printf("ans3 = %f\n", ans3);
    printf("ans4 = %f\n", ans4);

    int val = 0xCAFE;   
    int bits = val&0xF;

    if(bits == 0x7 || bits == 0xB || bits >= 0xD)
    {
        
    }

    printf("%#8x\n", bits);

    val = (0xFF & val) << 8 | (val >> 8);
    printf("%#8x\n", val);

    val = val >> 4 | ((val&0xF) << 12);
    printf("%#8x\n", val);


    return 0;
}
int findNumbers(int* nums, int numsSize){
    int count = 0;
    
    for(int i=0;i<numsSize;i++)
    {
        if((nums[i]>9 && nums[i]<100) || (nums[i]>999 && nums[i]<10000) || nums[i]==100000)
            count += 1;
    }
    return count;
}