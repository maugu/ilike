// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// simulate_distribution_cpp
List simulate_distribution_cpp(const SEXP& simulate_distribution_SEXP);
RcppExport SEXP _ilike_simulate_distribution_cpp(SEXP simulate_distribution_SEXPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type simulate_distribution_SEXP(simulate_distribution_SEXPSEXP);
    rcpp_result_gen = Rcpp::wrap(simulate_distribution_cpp(simulate_distribution_SEXP));
    return rcpp_result_gen;
END_RCPP
}
// evaluate_log_distribution_cpp
double evaluate_log_distribution_cpp(const SEXP& evaluate_log_distribution_SEXP, const List& parameter);
RcppExport SEXP _ilike_evaluate_log_distribution_cpp(SEXP evaluate_log_distribution_SEXPSEXP, SEXP parameterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type evaluate_log_distribution_SEXP(evaluate_log_distribution_SEXPSEXP);
    Rcpp::traits::input_parameter< const List& >::type parameter(parameterSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluate_log_distribution_cpp(evaluate_log_distribution_SEXP, parameter));
    return rcpp_result_gen;
END_RCPP
}
// evaluate_log_likelihood_cpp
double evaluate_log_likelihood_cpp(const SEXP& evaluate_log_likelihood_SEXP, const List& parameter, const List& observed_data);
RcppExport SEXP _ilike_evaluate_log_likelihood_cpp(SEXP evaluate_log_likelihood_SEXPSEXP, SEXP parameterSEXP, SEXP observed_dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type evaluate_log_likelihood_SEXP(evaluate_log_likelihood_SEXPSEXP);
    Rcpp::traits::input_parameter< const List& >::type parameter(parameterSEXP);
    Rcpp::traits::input_parameter< const List& >::type observed_data(observed_dataSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluate_log_likelihood_cpp(evaluate_log_likelihood_SEXP, parameter, observed_data));
    return rcpp_result_gen;
END_RCPP
}
// estimate_log_likelihood_cpp
double estimate_log_likelihood_cpp(const SEXP& estimate_log_likelihood_SEXP, const List& parameter, const List& observed_data, const List& auxiliary_variables);
RcppExport SEXP _ilike_estimate_log_likelihood_cpp(SEXP estimate_log_likelihood_SEXPSEXP, SEXP parameterSEXP, SEXP observed_dataSEXP, SEXP auxiliary_variablesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type estimate_log_likelihood_SEXP(estimate_log_likelihood_SEXPSEXP);
    Rcpp::traits::input_parameter< const List& >::type parameter(parameterSEXP);
    Rcpp::traits::input_parameter< const List& >::type observed_data(observed_dataSEXP);
    Rcpp::traits::input_parameter< const List& >::type auxiliary_variables(auxiliary_variablesSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_log_likelihood_cpp(estimate_log_likelihood_SEXP, parameter, observed_data, auxiliary_variables));
    return rcpp_result_gen;
END_RCPP
}
// simulate_model_cpp
List simulate_model_cpp(const SEXP& simulate_model_SEXP, const List& parameter, const List& observed_data);
RcppExport SEXP _ilike_simulate_model_cpp(SEXP simulate_model_SEXPSEXP, SEXP parameterSEXP, SEXP observed_dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type simulate_model_SEXP(simulate_model_SEXPSEXP);
    Rcpp::traits::input_parameter< const List& >::type parameter(parameterSEXP);
    Rcpp::traits::input_parameter< const List& >::type observed_data(observed_dataSEXP);
    rcpp_result_gen = Rcpp::wrap(simulate_model_cpp(simulate_model_SEXP, parameter, observed_data));
    return rcpp_result_gen;
END_RCPP
}
// simulate_auxiliary_variables_cpp
List simulate_auxiliary_variables_cpp(const SEXP& simulate_auxiliary_variables_SEXP, const List& parameter, const List& observed_data);
RcppExport SEXP _ilike_simulate_auxiliary_variables_cpp(SEXP simulate_auxiliary_variables_SEXPSEXP, SEXP parameterSEXP, SEXP observed_dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type simulate_auxiliary_variables_SEXP(simulate_auxiliary_variables_SEXPSEXP);
    Rcpp::traits::input_parameter< const List& >::type parameter(parameterSEXP);
    Rcpp::traits::input_parameter< const List& >::type observed_data(observed_dataSEXP);
    rcpp_result_gen = Rcpp::wrap(simulate_auxiliary_variables_cpp(simulate_auxiliary_variables_SEXP, parameter, observed_data));
    return rcpp_result_gen;
END_RCPP
}
// evaluate_log_abc_kernel_cpp
double evaluate_log_abc_kernel_cpp(const SEXP& evaluate_log_abc_kernel_SEXP, const arma::colvec& simulated_data, const arma::colvec& observed_data, const double& abc_tolerance);
RcppExport SEXP _ilike_evaluate_log_abc_kernel_cpp(SEXP evaluate_log_abc_kernel_SEXPSEXP, SEXP simulated_dataSEXP, SEXP observed_dataSEXP, SEXP abc_toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type evaluate_log_abc_kernel_SEXP(evaluate_log_abc_kernel_SEXPSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type simulated_data(simulated_dataSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type observed_data(observed_dataSEXP);
    Rcpp::traits::input_parameter< const double& >::type abc_tolerance(abc_toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(evaluate_log_abc_kernel_cpp(evaluate_log_abc_kernel_SEXP, simulated_data, observed_data, abc_tolerance));
    return rcpp_result_gen;
END_RCPP
}
// summary_statistics_cpp
arma::colvec summary_statistics_cpp(const SEXP& summary_statistics_SEXP, const List& observed_data);
RcppExport SEXP _ilike_summary_statistics_cpp(SEXP summary_statistics_SEXPSEXP, SEXP observed_dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type summary_statistics_SEXP(summary_statistics_SEXPSEXP);
    Rcpp::traits::input_parameter< const List& >::type observed_data(observed_dataSEXP);
    rcpp_result_gen = Rcpp::wrap(summary_statistics_cpp(summary_statistics_SEXP, observed_data));
    return rcpp_result_gen;
END_RCPP
}
// get_data_from_simulation_cpp
List get_data_from_simulation_cpp(const SEXP& get_data_from_simulation_SEXP, const List& simulation);
RcppExport SEXP _ilike_get_data_from_simulation_cpp(SEXP get_data_from_simulation_SEXPSEXP, SEXP simulationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP& >::type get_data_from_simulation_SEXP(get_data_from_simulation_SEXPSEXP);
    Rcpp::traits::input_parameter< const List& >::type simulation(simulationSEXP);
    rcpp_result_gen = Rcpp::wrap(get_data_from_simulation_cpp(get_data_from_simulation_SEXP, simulation));
    return rcpp_result_gen;
END_RCPP
}
// do_importance_sampler
List do_importance_sampler(const List& model, const List& algorithm);
RcppExport SEXP _ilike_do_importance_sampler(SEXP modelSEXP, SEXP algorithmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< const List& >::type algorithm(algorithmSEXP);
    rcpp_result_gen = Rcpp::wrap(do_importance_sampler(model, algorithm));
    return rcpp_result_gen;
END_RCPP
}
// do_smc
List do_smc(const List& model, const List& algorithm);
RcppExport SEXP _ilike_do_smc(SEXP modelSEXP, SEXP algorithmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< const List& >::type algorithm(algorithmSEXP);
    rcpp_result_gen = Rcpp::wrap(do_smc(model, algorithm));
    return rcpp_result_gen;
END_RCPP
}
// store_L1_uniform_evaluate_log_abc_kernel
SEXP store_L1_uniform_evaluate_log_abc_kernel();
RcppExport SEXP _ilike_store_L1_uniform_evaluate_log_abc_kernel() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(store_L1_uniform_evaluate_log_abc_kernel());
    return rcpp_result_gen;
END_RCPP
}
// store_L2_uniform_evaluate_log_abc_kernel
SEXP store_L2_uniform_evaluate_log_abc_kernel();
RcppExport SEXP _ilike_store_L2_uniform_evaluate_log_abc_kernel() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(store_L2_uniform_evaluate_log_abc_kernel());
    return rcpp_result_gen;
END_RCPP
}
// store_Linf_uniform_evaluate_log_abc_kernel
SEXP store_Linf_uniform_evaluate_log_abc_kernel();
RcppExport SEXP _ilike_store_Linf_uniform_evaluate_log_abc_kernel() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(store_Linf_uniform_evaluate_log_abc_kernel());
    return rcpp_result_gen;
END_RCPP
}
// store_gaussian_uniform_evaluate_log_abc_kernel
SEXP store_gaussian_uniform_evaluate_log_abc_kernel();
RcppExport SEXP _ilike_store_gaussian_uniform_evaluate_log_abc_kernel() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(store_gaussian_uniform_evaluate_log_abc_kernel());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ilike_simulate_distribution_cpp", (DL_FUNC) &_ilike_simulate_distribution_cpp, 1},
    {"_ilike_evaluate_log_distribution_cpp", (DL_FUNC) &_ilike_evaluate_log_distribution_cpp, 2},
    {"_ilike_evaluate_log_likelihood_cpp", (DL_FUNC) &_ilike_evaluate_log_likelihood_cpp, 3},
    {"_ilike_estimate_log_likelihood_cpp", (DL_FUNC) &_ilike_estimate_log_likelihood_cpp, 4},
    {"_ilike_simulate_model_cpp", (DL_FUNC) &_ilike_simulate_model_cpp, 3},
    {"_ilike_simulate_auxiliary_variables_cpp", (DL_FUNC) &_ilike_simulate_auxiliary_variables_cpp, 3},
    {"_ilike_evaluate_log_abc_kernel_cpp", (DL_FUNC) &_ilike_evaluate_log_abc_kernel_cpp, 4},
    {"_ilike_summary_statistics_cpp", (DL_FUNC) &_ilike_summary_statistics_cpp, 2},
    {"_ilike_get_data_from_simulation_cpp", (DL_FUNC) &_ilike_get_data_from_simulation_cpp, 2},
    {"_ilike_do_importance_sampler", (DL_FUNC) &_ilike_do_importance_sampler, 2},
    {"_ilike_do_smc", (DL_FUNC) &_ilike_do_smc, 2},
    {"_ilike_store_L1_uniform_evaluate_log_abc_kernel", (DL_FUNC) &_ilike_store_L1_uniform_evaluate_log_abc_kernel, 0},
    {"_ilike_store_L2_uniform_evaluate_log_abc_kernel", (DL_FUNC) &_ilike_store_L2_uniform_evaluate_log_abc_kernel, 0},
    {"_ilike_store_Linf_uniform_evaluate_log_abc_kernel", (DL_FUNC) &_ilike_store_Linf_uniform_evaluate_log_abc_kernel, 0},
    {"_ilike_store_gaussian_uniform_evaluate_log_abc_kernel", (DL_FUNC) &_ilike_store_gaussian_uniform_evaluate_log_abc_kernel, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_ilike(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
