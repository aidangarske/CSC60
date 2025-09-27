/* getRange.c
 * Aidan Garske
 * CSC 60 fall 2025
 * 9/27/25
*/

/* Calculates the number of ints between two numbers */
int getRange(int firstNum, int lastNum) {
    
    if (firstNum > lastNum) {
        int temp = firstNum;
        firstNum = lastNum;
        lastNum = temp;
    }
    
    int count = lastNum - firstNum - 1;
    return (count > 0) ? count : 0;
}
