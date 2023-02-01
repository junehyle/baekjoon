#include <stdio.h>
#include <string.h>

int	cnt;

int	count()
{
	cnt += 1;
	return (cnt);
}

int recursion(const char *s, int l, int r){
    if(l >= r)
	 return 1;
    else if(s[l] != s[r])
	 return 0;
    else
	count();
    return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}

int main(){
	int	cases;
	int	idx = 0;
	char	arr[1001];

	scanf("%d", &cases);
	while (idx < cases)
	{
		cnt = 0;
		scanf("%s", arr);
    		printf("%d ", isPalindrome(arr));
		printf("%d\n", count());
		idx++;
	}
	return 0;
}
