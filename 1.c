\\Zoho Interview 2 Round
\\name: VigneshRaj M
\\mailid: vrmvrm35@gmail.com
\\code

#include<stdio.h>
    int main()
    {
        int m=0,n=0,o=0,p=0,q=0;
        printf("enter the number to print the parten: ");
        scanf("%d",&n);
        for(m=1;m<=n+1;m++)
        {
            for(o=n+1;o>m;o--)
            {
                printf("  ");
            }
            for(p=m-1;p>=0;p--)
            {
                printf("%d ",p);
            }

            for(q=1;q<m;q++)
                printf("%d ",q);
            printf("\n");
        }
        return 0;
    }
