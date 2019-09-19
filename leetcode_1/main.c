#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* rmem;
    rmem = calloc(*returnSize, sizeof(int));
    int temp1,temp2, foundflag;
    temp2 = 0;
    foundflag = 0;
        for(temp1 = 0; temp1 < numsSize; temp1++){
            //if(nums[temp1]<target){
                    temp2 = temp1+1;
                while(temp2<numsSize){
                    //if(nums[temp2]>target){
                    //    temp2++;
                   // }
                  //  else{
                        if((nums[temp1]+nums[temp2]) == target){
                            *rmem = temp1;
                            *(rmem + 1) = temp2;
                            foundflag = 1;
                            break;
                        }
                        else{
                            temp2++;
                        }
                  //  }
                }
                if(foundflag == 1){
                    break;
                }
           // }
           // else{

           // }
        }
    return rmem;
}

int main()
{
int nums[] = {0, 4, 3, 0};
int numsSize = 4;
int target = 0;
int *opr = NULL;
int returnSize;
returnSize = 2;
opr = twoSum(nums,numsSize,target,&returnSize);
printf("%p\n",*opr);
printf("%p",*opr+1);
return 0;
}

