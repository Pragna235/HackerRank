#include <stdio.h>
int main()
{
    int d1, m1, y1, d2, m2, y2, fine1, fine2,fine3;
    scanf("%d %d %d", &d1, &m1, &y1);
    scanf("%d %d %d ", &d2, &m2, &y2);

    if((d1>=1 && d1<=31) && (m1>=1 && m1<=12) && (y1>=1 && y1<=3000) && (d2>=1 && d2<=31) && (m2>=1 && m2<=12) && (y2>=1 && y2<=3000))
    if ((d1<=d2 && m1<=m2 && y1<=y2) || ((y1==y2) && (m1<=m2) && (d1<=d2)) || ((y1<y2 ) && (m1>=m2) && (d1>=d2)) || ((y1==y2) && (m1<m2) && (d1>=d2)))
    {
        printf("0");
    }
    else if (m1==m2 && y1==y2 && d1>d2)
    {
        fine1=(d1-d2)*15;
        printf("%d",fine1);
    }
    else if (y1==y2 && m1>m2)
    {
        fine2=(m1-m2)*500;
        printf("%d", fine2);
    }
    else if (y1>y2)
    {
        fine3=10000;
        printf("%d ",fine3);
    }
    return 0;
}

