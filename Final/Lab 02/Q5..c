#include<stdio.h>
#include<stdlib.h>
struct Box{
int length;
int width;
int height;
};
struct Box boxSum(struct Box box1, struct Box box2){
struct Box newBox;
newBox.length = box1.length + box2.length;
newBox.width = box1.width + box2.width;
newBox.height = box1.height + box2.height;
return newBox;
}
int main()
{
struct Box box1, box2, newBox;
box1.length = 10;
box1.width = 5;
box1.height = 3;
box2.length = 5;
box2.width = 3;
box2.height = 1;
newBox = boxSum(box1, box2);
printf("Box 1 length = %d\n", box1.length);
printf("Box 1 width = %d\n", box1.width);
printf("Box 1 height = %d\n\n", box1.height);
printf("Box 2 length = %d\n", box2.length);
printf("Box 2 width = %d\n", box2.width);
printf("Box 2 height = %d\n\n", box2.height);
printf("New box length = %d\n", newBox.length);
printf("New box width = %d\n", newBox.width);
printf("New box height = %d\n", newBox.height);
return 0;
}
