//
//  Sort.h
//  Sort
//
//  Created by 小松亮太 on 2018/04/02.
//  Copyright © 2018年 小松亮太. All rights reserved.
//

#ifndef Sort_h
#define Sort_h

//インサートソート
int InsertSort(int data[], int length)
{
    int num, tmp, count;
    count = 0;
    
    for (int i = 0; i < length; i++)
    {
        num = i;
        while (num >= 1 && data[num - 1] > data[num])
        {
            tmp = data[num - 1];
            data[num - 1] = data[num];
            data[num] = tmp;
            num--;
            count++;
        }
    }
    return count;
}

//インサートソートした配列の中身を表示する
void ShowArrays(int data[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("[%d]", data[i]);
    }
    printf("\n");
}

//バケツソート
int BucketSort(int data[], int bucket[], int length)
{
    for (int i = 0; i < length; i++)
    {
        bucket[data[i]]++;
    }
    return length;
}

//バケツソートした配列の中身を表示
void ShowBucket(int bucket[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if(bucket[i] > 0)
        {
            for (int j = 1; j <= bucket[i]; j++)
            {
                printf("[%d]", i);
            }
        }
    }
    printf("\n");
}

#endif /* Sort_h */
