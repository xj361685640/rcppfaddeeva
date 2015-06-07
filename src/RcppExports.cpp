// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// Faddeeva_w
ComplexVector Faddeeva_w(const ComplexVector& z, double relerr);
RcppExport SEXP RcppFaddeeva_Faddeeva_w(SEXP zSEXP, SEXP relerrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const ComplexVector& >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type relerr(relerrSEXP);
    __result = Rcpp::wrap(Faddeeva_w(z, relerr));
    return __result;
END_RCPP
}
// erfcx
ComplexVector erfcx(const ComplexVector& z, double relerr);
RcppExport SEXP RcppFaddeeva_erfcx(SEXP zSEXP, SEXP relerrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const ComplexVector& >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type relerr(relerrSEXP);
    __result = Rcpp::wrap(erfcx(z, relerr));
    return __result;
END_RCPP
}
// erf
ComplexVector erf(const ComplexVector& z, double relerr);
RcppExport SEXP RcppFaddeeva_erf(SEXP zSEXP, SEXP relerrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const ComplexVector& >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type relerr(relerrSEXP);
    __result = Rcpp::wrap(erf(z, relerr));
    return __result;
END_RCPP
}
// erfi
ComplexVector erfi(const ComplexVector& z, double relerr);
RcppExport SEXP RcppFaddeeva_erfi(SEXP zSEXP, SEXP relerrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const ComplexVector& >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type relerr(relerrSEXP);
    __result = Rcpp::wrap(erfi(z, relerr));
    return __result;
END_RCPP
}
// erfc
ComplexVector erfc(const ComplexVector& z, double relerr);
RcppExport SEXP RcppFaddeeva_erfc(SEXP zSEXP, SEXP relerrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const ComplexVector& >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type relerr(relerrSEXP);
    __result = Rcpp::wrap(erfc(z, relerr));
    return __result;
END_RCPP
}
// Dawson
ComplexVector Dawson(const ComplexVector& z, double relerr);
RcppExport SEXP RcppFaddeeva_Dawson(SEXP zSEXP, SEXP relerrSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const ComplexVector& >::type z(zSEXP);
    Rcpp::traits::input_parameter< double >::type relerr(relerrSEXP);
    __result = Rcpp::wrap(Dawson(z, relerr));
    return __result;
END_RCPP
}
