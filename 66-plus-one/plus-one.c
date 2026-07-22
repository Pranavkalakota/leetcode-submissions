/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne (int* digits, int digitsSize, int* returnSize) {
    int *resultArr = (int*) malloc(sizeof(int) * (digitsSize + 1));
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        } else {
            digits[i] = 0;
        }
    }
    resultArr[0] = 1;
    for (int i = 1; i <= digitsSize; i++) {
        resultArr[i] = 0;
    }
    *returnSize = digitsSize + 1;
    return resultArr;
}