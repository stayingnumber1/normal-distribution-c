
#include<string.h>
#include<stdio.h>
#include<stdbool.h>

//--------------------------------------------------------
// FUNCTION populatedata
//--------------------------------------------------------
void populatedata(int data[138])
{
    memcpy(data, (int[138]){66,64,65,68,69,71,69,67,66,64,66,60,65,68,66,66,67,66,60,
                            63,69,64,66,68,65,65,71,65,70,67,66,69,67,68,70,60,66,63,
                            67,67,68,68,63,72,69,71,63,69,67,64,67,71,68,62,64,66,68,
                            65,65,66,62,67,63,67,64,67,67,64,69,69,64,62,63,63,70,65,
                            68,66,67,66,64,62,68,71,63,65,67,66,69,66,67,70,70,66,69,
                            66,64,62,64,64,61,67,65,67,68,69,71,65,61,71,69,67,61,66,
                            61,66,65,61,65,70,63,65,64,70,67,62,66,68,66,65,68,65,65,
                            70,68,68,62,63}, sizeof(int[138]));
}