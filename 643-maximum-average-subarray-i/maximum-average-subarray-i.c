/* 
int maxAvg = 0;
for (i = 0; i < n - k + 1; i++) 
    int sum = 0;
    int average = 0;
    for (j = i; j < k; j++)
        sum += a[j]
    average = sum / k;
    if (average > maxAvg) {
        maxAvg = average;
    } 
*/

double findMaxAverage(int* nums, int numsSize, int k) {
    double maxAvg = -10e4;
    double sum = 0.0;
    double avg = 0.0;
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }
    maxAvg = sum / k;
    for (int i = 1; i < numsSize - k + 1; i++) {
        sum = sum - nums[i - 1] + nums[i + k - 1];
        avg = sum / k;
        if (maxAvg < avg) {
            maxAvg = avg;
        }
    }
    return maxAvg;
}