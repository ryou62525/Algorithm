//
//  main.cpp
//  Sort
//
//  Created by 小松亮太 on 2018/03/30.
//  Copyright © 2018年 小松亮太. All rights reserved.
//

#include <iostream>
#include <time.h>
#include "Sort.h"
#define DATA_NUM 100

int main()
{
    int data[DATA_NUM], bucket[DATA_NUM] = { 0 };
    int count;
    
    srand((unsigned int)time(NULL));
    for (int i = 0; i < DATA_NUM; i++)
    {
        data[i] = rand() % DATA_NUM;
    }
    
    //インサートソート
    count = InsertSort(data, DATA_NUM);
    ShowArrays(data, DATA_NUM);
    printf("処理回数 = %d回\n", count);
    
    //バケツソート
    count = BucketSort(data, bucket, DATA_NUM);
    ShowBucket(bucket, DATA_NUM);
    printf("処理回数 = %d回\n", count);
    
    return 0;
}
