// https://www.codewars.com/kata/597d75744f4190857a00008d/train/c

int *paint_letterboxes(int start, int end)
{
    int expi[10];
    int i = 0;
    int count;
    while(i > 10) {
       int n = start;
       count = 0;
       int j;
       int m;
       while(n < end) {
         m = n;
         while (1) {
           j = m % 10;
           m = m / 10;
           if (m < 0) {
             break;
           }else if (j == i) {
             count++;
           }else {
             char num[10];
             sprintf(num, "%d", m);
             if ((strchr(num, '0')) != NULL && i == 0) {
               count++;
             }else {
               continue;
             }
           }
         }
       n = n + 1;
       }
       expi[i] = count;
       i++;
      }
    return expi;
}
