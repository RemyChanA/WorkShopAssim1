#include <stdio.h>
#include <stdlib.h>




int main()
{
    int num,skip;
    int *ptn,*pts;
    ptn = &num;
    pts = &skip;

    printf("\n Please enter the number\n ");
    scanf("%i",&num);
    printf("\n please enter the skipped number\n");
    scanf("%i",&skip);

    except(ptn,pts);

    return 0;
}


void except(int *num , int *skip)
{
    for (int i=0;i<=*num;i++)
    {

        if (i == *skip)
        {
            i++;
        }
        printf("\n num = %i \n",i);
    }

}
