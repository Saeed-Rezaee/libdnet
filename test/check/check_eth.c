
#include <sys/types.h>

#include <dnet.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <check.h>

START_TEST(test_eth_fill)
{
}
END_TEST

START_TEST(test_eth_open)
{
}
END_TEST

START_TEST(test_eth_get)
{
}
END_TEST

START_TEST(test_eth_set)
{
}
END_TEST

START_TEST(test_eth_send)
{
}
END_TEST

START_TEST(test_eth_close)
{
}
END_TEST

Suite *
eth_suite(void)
{
	Suite *s = suite_create("eth");
	TCase *tc_core = tcase_create("core");

	suite_add_tcase(s, tc_core);
	tcase_add_test(tc_core, test_eth_fill);
	tcase_add_test(tc_core, test_eth_open);
	tcase_add_test(tc_core, test_eth_get);
	tcase_add_test(tc_core, test_eth_set);
	tcase_add_test(tc_core, test_eth_send);
	tcase_add_test(tc_core, test_eth_close);
	
	return (s);
}

int
main(void)
{
	Suite *s = eth_suite();
	SRunner *sr = srunner_create(s);
	int nf;
	
	srunner_run_all (sr, CK_NORMAL);
	nf = srunner_ntests_failed(sr);
	srunner_free(sr);
	suite_free(s);
	
	return (nf == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}