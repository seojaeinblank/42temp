

// 문자 처리
// 부호 처리
// a to i
// 숫자를 벗어날 경우 반환

int	sort_type(char *arr, int idx)
{
	if (arr[idx] >= '0' && arr[idx] <= '9')
		return (1);
	else if (arr[idx] == '+' || arr[idx] == '-')
		return (0);
	else if (arr[idx] >= 9 || arr[idx] <= 13)
		return (-1);
	else return (2);
}
int	check_buho(char buho, int cnt)
{
	if (buho == '-')
		cnt++;
	return cnt;
}

int	ft_atoi(char *str)
{
	int result;
	int i;
	int type;
	int count;

	result = 0;
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		type = sort_type(str, i);
		if (type == 0)
		{
			if (str[i] == '-')
				count++;
			if (i != 0)
			{
				if (sort_type(str, i - 1) > 0)
					return (0);
			}
		}
		if (type == 1)
		{
			result = 10 * result + str[i] - '0';
			if (sort_type(str, i - 1) == 2)
				return (0);
			if (sort_type(str, i + 1) != 1)
				break;
		}
		i++;
	}
	if (count % 2 == 1)
		result = (-1) * result;
	return (result);
}
