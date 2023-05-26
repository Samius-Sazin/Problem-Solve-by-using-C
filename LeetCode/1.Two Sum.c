int* twoSum(int* arr, int  n, int target, int* returnSize){

int *ret = malloc(sizeof(int) * 2);
ret[0] = 1;
ret[1] = 1;

for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                *returnSize = 2;
                ret[0] = i;
                ret[1] = j;
                return ret;
            }
        }
    }
*returnSize = 0;
return NULL;
}
