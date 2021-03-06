/******************************************************************************
 *                      Code generated with sympy 1.6.1                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'ekf'                         *
 ******************************************************************************/
void err_fun(double *nom_x, double *delta_x, double *out_4793795122995228942);
void inv_err_fun(double *nom_x, double *true_x, double *out_1664103941613909424);
void H_mod_fun(double *state, double *out_212441384176172332);
void f_fun(double *state, double dt, double *out_3714352266407884559);
void F_fun(double *state, double dt, double *out_4521413872731011395);
void h_25(double *state, double *unused, double *out_9010470870943443566);
void H_25(double *state, double *unused, double *out_1174950662950397075);
void h_24(double *state, double *unused, double *out_2634279382811077010);
void H_24(double *state, double *unused, double *out_3293235470661685495);
void h_30(double *state, double *unused, double *out_3695862822254458359);
void H_30(double *state, double *unused, double *out_8438948247998786205);
void h_26(double *state, double *unused, double *out_1838395483279779233);
void H_26(double *state, double *unused, double *out_4564842853729618605);
void h_27(double *state, double *unused, double *out_8990603157829754913);
void H_27(double *state, double *unused, double *out_8720213837874140099);
void h_29(double *state, double *unused, double *out_9180946853595290814);
void H_29(double *state, double *unused, double *out_6183997056581933458);
void h_28(double *state, double *unused, double *out_4490002131666605758);
void H_28(double *state, double *unused, double *out_3724597007574809371);
#define DIM 8
#define EDIM 8
#define MEDIM 8
typedef void (*Hfun)(double *, double *, double *);

void predict(double *x, double *P, double *Q, double dt);
const static double MAHA_THRESH_25 = 3.841459;
void update_25(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_24 = 5.991465;
void update_24(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_30 = 3.841459;
void update_30(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_26 = 3.841459;
void update_26(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_27 = 3.841459;
void update_27(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_29 = 3.841459;
void update_29(double *, double *, double *, double *, double *);
const static double MAHA_THRESH_28 = 5.991465;
void update_28(double *, double *, double *, double *, double *);
void set_mass(double x);

void set_rotational_inertia(double x);

void set_center_to_front(double x);

void set_center_to_rear(double x);

void set_stiffness_front(double x);

void set_stiffness_rear(double x);
