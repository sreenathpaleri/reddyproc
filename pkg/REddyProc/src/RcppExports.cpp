// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// whichValueGreaterEqualC
IntegerVector whichValueGreaterEqualC(IntegerVector x, IntegerVector threshold, IntegerVector iStart);
RcppExport SEXP REddyProc_whichValueGreaterEqualC(SEXP xSEXP, SEXP thresholdSEXP, SEXP iStartSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type iStart(iStartSEXP);
    __result = Rcpp::wrap(whichValueGreaterEqualC(x, threshold, iStart));
    return __result;
END_RCPP
}