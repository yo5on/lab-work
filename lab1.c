#include<stdio.h>
main(){
    int ch;
    printf("1.creating a array\n2.displaying array element\n3.inserting a element\n4.deleting a element\nEnter your choice :");
    scanf("%d",&ch);
    printf("%d",ch);
    switch(ch){
        case 1:
        create();
        break;
        case 2:
        display();
        break;
        case 3:
        insert();
        break;
        case 4:
        delete();
        break;
        default :
        printf("invalid choice");
    }
}
create(){
    int a[];
    printf("Enter the size")
}