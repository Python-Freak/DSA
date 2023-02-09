public class quickSort {

  public static void main(String[] args) {
    int[] arr = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    int size = arr.length;
    quickSort__(arr, 0, size - 1);

    for (int i = 0; i < size; i++) {
      System.out.print(arr[i] + " ");
    }
  }

  public static void quickSort__(int[] arr, int s, int e) {
    //base case
    if (s >= e) return;

    //take the partition
    int p = partition(arr, s, e);

    //left part sort
    quickSort__(arr, s, p - 1);

    //right part sort
    quickSort__(arr, p + 1, e);
  }

  public static int partition(int[] arr, int s, int e) {
    int pivot = arr[s];
    int count = 0;
    //count of elements smaller than pivot element
    for (int i = s + 1; i <= e; i++) {
      if (arr[i] <= pivot) count++;
    }

    int pivotIdx = s + count;

    //put pivot element at correct position
    int temp = pivot;
    arr[s] = arr[pivotIdx];
    arr[pivotIdx] = temp;

    int sIdx = s;
    int eIdx = e;

    //make smaller elements lie before pivot & larger elements after pivot
    while (sIdx < pivotIdx && eIdx > pivotIdx) {
      //move sIdx++ till we find element greater than pivot element in left side
      while (arr[sIdx] <= pivot) {
        sIdx++;
      }
      //move eIdx-- till we find smaller elements than pivot in right side
      while (arr[eIdx] > pivot) {
        eIdx--;
      }
      //swap the values if found
      if (sIdx < pivotIdx && eIdx > pivotIdx) {
        temp = arr[sIdx];
        arr[sIdx] = arr[eIdx];
        arr[eIdx] = temp;

        sIdx++;
        eIdx--;
      }
    }
    return pivotIdx;
  }
}
