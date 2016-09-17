// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// a_sptree_open
std::string a_sptree_open(bool standalone, int id, double offx, double offy);
RcppExport SEXP flextable_a_sptree_open(SEXP standaloneSEXP, SEXP idSEXP, SEXP offxSEXP, SEXP offySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type standalone(standaloneSEXP);
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< double >::type offx(offxSEXP);
    Rcpp::traits::input_parameter< double >::type offy(offySEXP);
    rcpp_result_gen = Rcpp::wrap(a_sptree_open(standalone, id, offx, offy));
    return rcpp_result_gen;
END_RCPP
}
// a_graphic_frame_open
std::string a_graphic_frame_open(int id, double offx, double offy);
RcppExport SEXP flextable_a_graphic_frame_open(SEXP idSEXP, SEXP offxSEXP, SEXP offySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type id(idSEXP);
    Rcpp::traits::input_parameter< double >::type offx(offxSEXP);
    Rcpp::traits::input_parameter< double >::type offy(offySEXP);
    rcpp_result_gen = Rcpp::wrap(a_graphic_frame_open(id, offx, offy));
    return rcpp_result_gen;
END_RCPP
}
// a_sptree_close
std::string a_sptree_close();
RcppExport SEXP flextable_a_sptree_close() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(a_sptree_close());
    return rcpp_result_gen;
END_RCPP
}
// a_graphic_frame_close
std::string a_graphic_frame_close();
RcppExport SEXP flextable_a_graphic_frame_close() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(a_graphic_frame_close());
    return rcpp_result_gen;
END_RCPP
}
// wml_run_pic
std::string wml_run_pic(std::string src, double width, double height);
RcppExport SEXP flextable_wml_run_pic(SEXP srcSEXP, SEXP widthSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type src(srcSEXP);
    Rcpp::traits::input_parameter< double >::type width(widthSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    rcpp_result_gen = Rcpp::wrap(wml_run_pic(src, width, height));
    return rcpp_result_gen;
END_RCPP
}
