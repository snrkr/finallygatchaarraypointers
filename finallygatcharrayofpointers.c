#include <stdio.h>
#include <assert.h>

int main()
{
    const char *t[2];   //********  //array of pointers// so there are two pointers t[0] and t[1]   ***********//
    char arr[] = "ewwerewwrwrwerwerwer";
    t[0] = arr;
    
    //t[0] is pointer
    //t[1] is also pointer
    //after assignment arr to t[0] both of them point to same location
    
    assert(t[0] == arr);
    
    printf("%s\n", t[0]);
    printf("t first element=> %c\n",t[0][0]);
    printf("arr first element=> %c",arr[0]);
    
    return 0;
}
