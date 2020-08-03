#include<stdio.h>
#include <stdlib.h>

int find_dist_between_two_points(int x1, int y1, int x2, int y2)
{
    int dist1,dist2;
    dist1 = x2-x1;
    dist2 = y2-y1;
    return ( dist1*dist1 )+( dist2*dist2 );
}
int main()
{
   int x,x1,y,y1,z,z1,a,a1;
   scanf("%d %d %d %d %d %d %d %d",&x ,&x1 ,&y ,&y1 ,&z ,&z1 ,&a ,&a1);
    
   int D_xy = find_dist_between_two_points(x,x1,y,y1);
   int D_xz = find_dist_between_two_points(x,x1,z,z1);
   int D_xa = find_dist_between_two_points(x,x1,a,a1);
    
   if( (D_xy == D_xz && 2*D_xy == D_xa ) || ( D_xz == D_xa && 2*D_xz == D_xy )|| ( D_xy == D_xa && 2*D_xy == D_xz ))
   {
       printf( "square" );
   }
   else 
   {
      printf("rectangle");
   }
}
