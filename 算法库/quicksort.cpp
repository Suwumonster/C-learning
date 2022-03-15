int qsort(int arr[], int left, int right);
void quickSort(int arr[], int low, int high);

void quickSort(int arr[], int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = qsort(arr, low, high);
		quickSort(arr, low, mid - 1);
		quickSort(arr, mid + 1, high);
	}
}

int qsort(int arr[], int left, int right)
{
	int base = arr[left];//��
	int postion = left;//��Ԫ�ص�λ��
	while (left < right)
	{
		while ((left < right) && (arr[right] >= base) )
		{
			right--;
		}
		if (arr[right] < base)
		{
			arr[postion] = arr[right];
			postion = right;
			right--;
		}
		while ((left < right) && (arr[left] <= base) )
		{
			left++;
		}
		if (arr[left] > base)
		{
			arr[postion] = arr[left];
			postion = left;
			left++;
		}
	}
	arr[postion] = base;//����λ�ô����
	return postion;//���ػ����յ�λ��
}