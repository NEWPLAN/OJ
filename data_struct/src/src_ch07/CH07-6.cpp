/*********************************************
*  P234 算法7.6  简单选择排序
**********************************************/
// 对序列R[1..n]按升序进行简单选择排列
void sort_simple_select( int R[], int num )
{
    int i, j, k;

    for(i = 1; i < num; ++i){  // num-1趟选择
        k = i;
        for( j = i+1; j <= num; ++j ){
            // 找出关键字最小的记录
            if( R[j] < R[k] ){
                k = j; 
            } 
        }
        if( i != k ){
            // 最小记录不为i，则交换
            R[0] = R[k];  
            R[k] = R[i]; 
            R[i] = R[0]; 
        }
    }
}