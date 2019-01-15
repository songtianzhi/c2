#include <stdio.h>

void main()
{
    char arr[1000];
    int index = 0;
    int code = 0;

    printf("进入敏感字符管理系统\n");
    
    while(1){

        printf("1--添加一个敏感字符\n");
        printf("1--删除最后一个敏感字符\n");
        printf("1--显示所以敏感字符\n");
        printf("1--替换敏感字符\n");
        printf("1--退出\n");

        printf("请输入相应的功能编号\n");
        scanf("%d",&code);

        
        if (code == 1) {
            char a ;
            printf("请输入要添加的敏感字符\n");

            scanf("%c",&a);
            scanf("%c",&a);

            arr[index] = a;
            index++;

            printf("添加成功，点击回车继续\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
            
        }
        if (code == 2) {
            
            index-=1;
            printf("删除成功，点击回车继续\n");

            char x;
            scanf("%c",&x);
            scanf("%c",&x);
            
        }
        if (code == 3) {
            int i;

            printf("显示所以敏感字符\n");

            
            for( i = 0; i < index; i++)
            {
                printf("%c\n",arr[i]);
            }
            
            printf("点击回车继续\n");

            char x;
            scanf("%c",&x);
            scanf("%c",&x);
            
        }
        if (code == 4) {
            
        }
        if (code == 5) {
            printf("退出系统\n");
            break;
        }
        
        
    
    }
    

} 