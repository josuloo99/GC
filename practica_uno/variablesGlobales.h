/*
 * variableGlobales.h
 *
 *  Created on: 04/10/2014
 *      Author: aitor
 */

#include "definicion.h"

#ifndef VARIABLEGLOBALES_H_
#define VARIABLEGLOBALES_H_

extern float	SELECTED_RED;
extern float	SELECTED_GREEN;
extern float	SELECTED_BLUE;
extern int		ANCHO, ALTO, color;
extern int		color, n_material;
extern int		MODO;
extern float	min_x, min_y, min_z, max_x, max_y, max_z;
extern struct 	NODO * nodo_actual;
extern float	nearVal, farVal;
extern struct	camara * cam;
extern float	factor_zoom;
extern MATERIAL materiales[5];

#endif /* VARIABLEGLOBALES_H_ */
