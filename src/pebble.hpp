extern "C" {
	#define _TIME_H_
	#define _LOCALE_H_
	#define LC_NUMERIC  4

	#include <pebble.h>

	int snprintf(char*, size_t, const char*, ...);

	struct lconv
	{
	  char *decimal_point;
	  char *thousands_sep;
	  char *grouping;
	  char *int_curr_symbol;
	  char *currency_symbol;
	  char *mon_decimal_point;
	  char *mon_thousands_sep;
	  char *mon_grouping;
	  char *positive_sign;
	  char *negative_sign;
	  char int_frac_digits;
	  char frac_digits;
	  char p_cs_precedes;
	  char p_sep_by_space;
	  char n_cs_precedes;
	  char n_sep_by_space;
	  char p_sign_posn;
	  char n_sign_posn;
	  char int_n_cs_precedes;
	  char int_n_sep_by_space;
	  char int_n_sign_posn;
	  char int_p_cs_precedes;
	  char int_p_sep_by_space;
	  char int_p_sign_posn;
	};
	char *_EXFUN(setlocale,(int, const char *));
	struct lconv *_EXFUN(localeconv,(void));
}
