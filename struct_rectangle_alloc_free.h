#ifndef _STRUCT_RECTANGLE_ALLOC_FREE_H
#define _STRUCT_RECTANGLE_ALLOC_FREE_H



#define VTX_CNT (4)
#define DESC_LENGTH (50)
#define POOL_SIZE (512)


typedef struct point_t
{
    int a;
    int b;     
}point;


typedef struct Rectangle_t
{
     point v[VTX_CNT];
     char desc[DESC_LENGTH];
     int id;
     int pool_index;
     struct Rectangle_t *next;
}Rectangle;
extern int alloc_free();
#endif
     
