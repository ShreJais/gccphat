#ifndef __GCCPHAT_UTILS_MATRIX
#define __GCCPHAT_UTILS_MATRIX

   /**
    * \file         matrix.h
    * \author       Francois Grondin (fgrondin@mit.edu)
    * \version      1.0
    * \date         2018-07-13
    * \copyright
    *
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    *
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * You should have received a copy of the GNU General Public License
    * along with this program.  If not, see <http://www.gnu.org/licenses/>.
    *
    */

    #include <math.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
        
    typedef struct matrix_obj {

        float * real;
        float * imag;
        unsigned int nRows;
        unsigned int nCols;

    } matrix_obj;


    matrix_obj * matrix_construct(const unsigned int nRows, const unsigned int nCols);

    void matrix_destroy(matrix_obj * obj);   



    void matrix_printf(const matrix_obj * obj);

#endif