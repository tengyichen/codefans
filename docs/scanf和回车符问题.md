# scanf与\n的问题

## 现象

在社团活动遇到的一个bug  
源码（略作修改）：  

    scanf("%d %d\n",&a,&b);  
    printf("a=%d b=%d\n",a,b);

运行时效果:

    [root@localhost ~]#./a.out  
    1 2  
    
    
    3 4  
    a=1 b=2

在输入数据1 2后回车并没有按预期的输出a和b的值，并且多次按回车也无输出。直到再次输入数据按回车后，a和b的值才输出出来。

## 解释
    An '\n' - or any whitespace character - in the format string consumes an
    entire (possibly empty) sequence of whitespace characters in the input.
    So the scanf only returns when it encounters the next non-whitespace
    character, or the end of the input stream (e.g. when the input is
    redirected from a file and its end is reached, or after you closed stdin
    with Ctrl-D).

这里的\n并不代表换行符而是排除空格、回车等符合。