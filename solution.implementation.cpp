#include

int main() {
    int lpage[10], pagetab[10], pframe[2][2], I, j;
    int size, msize, cnt, t, k, pos, logadd, m = 0;
    int frameno;
    long int l;
    int i;
    printf("\nEnter the memory size:");
    scanf("%d", & msize);
    printf("Enter the pase size:");
    scanf("%d", & size);
    cnt = (msize / size);
    printf("\nEnter the logical page: ");
    for (j = 0; j {
        scanf("%d", & lpage[j]);
      }
      t = 0; k = 0;
      for (j = 0; j {
          printf("\n");
          if (t {
              printf("%d value is %d\n", t, lpage[j]);
              t++;
            } else {
              t = 0;
              printf("%d value is %d\n", t, lpage[j]);
              t++;
            }
          }
          printf("\nEnter the page table value: ");
          for (i = 0; i {
              scanf("%d", & pagetab[i]);
            }
            printf("\nEnter the logical address: "); scanf("%d", & logadd);
            for (k = 0; k {
                if (logadd == lpage[k]) {
                  pos = (k / size);
                  m = k % size;
                  break;
                } else
                  continue;
              }
              printf("\nPage number : %d", pos); frameno = pagetab[pos]; printf("\nThe frame number is %d\n", frameno); printf("\nThe corresponding physical address is %d", (frameno * size) + m);
            }