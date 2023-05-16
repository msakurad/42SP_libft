#include "tests.h"

void	test_ft_substr_normalconditions_true(void)
{
	char	*s;
	int		start;
	int		len;
	char	*sub_s;

	s = "camomila com verde";
	start = 2;
	len = 6;
	sub_s = ft_substr(s, start, len);
	printf("\nInputs: s=%s, start=%d, len=%d\n", s, start, len);
	printf("sub string: ft %s\n", sub_s);
	TEST_ASSERT_EQUAL_STRING("momila", sub_s);
	free(sub_s);
}

void	test_ft_substr_lenisgreaterthanallowed_returnsnull(void)
{
	char	*s;
	int		start;
	int		len;
	char	*sub_s;

	s = "com verde";
	start = 4;
	len = 6;
	sub_s = ft_substr(s, start, len);
	printf("\nInputs: s=%s, start=%d, len=%d\n", s, start, len);
	printf("sub string: ft %s\n", sub_s);
	TEST_ASSERT(sub_s == NULL);
	free(sub_s);
}

void	run_test_ft_substr(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_ft_substr_normalconditions_true);
	RUN_TEST(test_ft_substr_lenisgreaterthanallowed_returnsnull);
	UNITY_END();
}

// void	setUp(void)
// {
// }

// void	tearDown(void)
// {
// }

// int	main(void)
// {
// 	RUN_FT_TEST(00, ft_substr)
// 	return (0);
// }