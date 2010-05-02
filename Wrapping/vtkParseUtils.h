/*=========================================================================

  Program:   WrapVTK
  Module:    vtkParseUtils.h

  Copyright (c) 2010 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

#ifndef VTK_PARSE_UTILS_H
#define VTK_PARSE_UTILS_H

/* Macros and function to make vtkParse easier to use */

/*-------------------------------------------------------------------
 * The parser identifies VTK types with hexidecimal numbers:
 *
 * - The first two digits are the base type.
 * - The third digit is for indirection i.e. * and &
 * - The fourth digit is for const and static
 * - The special value 0x5000 is for function pointers 
*/

/*
 * The lowest two hex digits describe the basic type,
 * where bit 0x10 is used to indicate unsigned types,
 * value 0x8 is used for unrecognized types, and
 * value 0x9 is used for all VTK objects.
*/

#define VTK_PARSE_FLOAT               0x01
#define VTK_PARSE_VOID                0x02
#define VTK_PARSE_CHAR                0x03
#define VTK_PARSE_UNSIGNED_CHAR       0x13
#define VTK_PARSE_INT                 0x04
#define VTK_PARSE_UNSIGNED_INT        0x14
#define VTK_PARSE_SHORT               0x05
#define VTK_PARSE_UNSIGNED_SHORT      0x15
#define VTK_PARSE_LONG                0x06
#define VTK_PARSE_UNSIGNED_LONG       0x16
#define VTK_PARSE_DOUBLE              0x07
#define VTK_PARSE_UNKNOWN             0x08
#define VTK_PARSE_VTK_OBJECT          0x09
#define VTK_PARSE_ID_TYPE             0x0A
#define VTK_PARSE_LONG_LONG           0x0B
#define VTK_PARSE_UNSIGNED_LONG_LONG  0x1B
#define VTK_PARSE___INT64             0x0C
#define VTK_PARSE_UNSIGNED__INT64     0x1C
#define VTK_PARSE_SIGNED_CHAR         0x0D
#define VTK_PARSE_BOOL                0x0E

#define VTK_PARSE_FLOAT_PTR               0x301
#define VTK_PARSE_VOID_PTR                0x302
#define VTK_PARSE_CHAR_PTR                0x303
#define VTK_PARSE_UNSIGNED_CHAR_PTR       0x313
#define VTK_PARSE_INT_PTR                 0x304
#define VTK_PARSE_UNSIGNED_INT_PTR        0x314
#define VTK_PARSE_SHORT_PTR               0x305
#define VTK_PARSE_UNSIGNED_SHORT_PTR      0x315
#define VTK_PARSE_LONG_PTR                0x306
#define VTK_PARSE_UNSIGNED_LONG_PTR       0x316
#define VTK_PARSE_DOUBLE_PTR              0x307
#define VTK_PARSE_UNKNOWN_PTR             0x308
#define VTK_PARSE_VTK_OBJECT_PTR          0x309
#define VTK_PARSE_ID_TYPE_PTR             0x30A
#define VTK_PARSE_LONG_LONG_PTR           0x30B
#define VTK_PARSE_UNSIGNED_LONG_LONG_PTR  0x31B
#define VTK_PARSE___INT64_PTR             0x30C
#define VTK_PARSE_UNSIGNED__INT64_PTR     0x31C
#define VTK_PARSE_SIGNED_CHAR_PTR         0x30D
#define VTK_PARSE_BOOL_PTR                0x30E

#define VTK_PARSE_FLOAT_REF               0x101
#define VTK_PARSE_VOID_REF                0x102
#define VTK_PARSE_CHAR_REF                0x103
#define VTK_PARSE_UNSIGNED_CHAR_REF       0x113
#define VTK_PARSE_INT_REF                 0x104
#define VTK_PARSE_UNSIGNED_INT_REF        0x114
#define VTK_PARSE_SHORT_REF               0x105
#define VTK_PARSE_UNSIGNED_SHORT_REF      0x115
#define VTK_PARSE_LONG_REF                0x106
#define VTK_PARSE_UNSIGNED_LONG_REF       0x116
#define VTK_PARSE_DOUBLE_REF              0x107
#define VTK_PARSE_UNKNOWN_REF             0x108
#define VTK_PARSE_VTK_OBJECT_REF          0x109
#define VTK_PARSE_ID_TYPE_REF             0x10A
#define VTK_PARSE_LONG_LONG_REF           0x10B
#define VTK_PARSE_UNSIGNED_LONG_LONG_REF  0x11B
#define VTK_PARSE___INT64_REF             0x10C
#define VTK_PARSE_UNSIGNED__INT64_REF     0x11C
#define VTK_PARSE_SIGNED_CHAR_REF         0x10D
#define VTK_PARSE_BOOL_REF                0x10E

#define VTK_PARSE_BASE_TYPE           0x1F

#define typeBaseType(x)     ((x) & VTK_PARSE_BASE_TYPE)

/*
 * Pointers, arrays, and references
 * (note that []  and * are equivalent)
 *
 * 0x100 = &
 * 0x300 = *    or e.g. int val[n]
 * 0x500 = *&   i.e. a ref to a pointer, like vtkIdType* &pts
 * 0x700 = **   or e.g. char *val[3]
 *
 * The following are defined, but not really supported by vtkParse
 * 0x200 = &&
 * 0x400 = &*
 * 0x600 = [n][m]
 * 0x900 = [n][m][l]
 */

#define VTK_PARSE_INDIRECT  0xF00
#define VTK_PARSE_REF       0x100
#define VTK_PARSE_POINTER   0x300
#define VTK_PARSE_POINTER_REF 0x500
#define VTK_PARSE_POINTER_POINTER 0x700

#define typeIndirection(x) ((x) & VTK_PARSE_INDIRECT)
#define typeIsIndirect(x) (typeIndirection(x) != 0)
#define typeIsPointer(x) (typeIndirection(x) == VTK_PARSE_POINTER || \
                          typeIndirection(x) == VTK_PARSE_POINTER_REF || \
                          typeIndirection(x) == VTK_PARSE_POINTER_POINTER)
#define typeIsReference(x) (typeIndirection(x) == VTK_PARSE_REF || \
                            typeIndirection(x) == VTK_PARSE_POINTER_REF)

/*
 * Decorators: static and const, plus the special "function pointer"
 */

#define VTK_PARSE_DECORATOR   0x3000
#define VTK_PARSE_CONST       0x1000
#define VTK_PARSE_STATIC      0x2000
#define VTK_PARSE_STATIC_CONST 0x3000

#define typeDecorator(x)    (((x) & 0x4000) ? 0 : ((x) & VTK_PARSE_DECORATOR))
#define typeHasDecorator(x) (typeDecorator(x) != 0)
#define typeIsStatic(x)     ((typeDecorator(x) & VTK_PARSE_STATIC) != 0)
#define typeIsConst(x)      ((typeDecorator(x) & VTK_PARSE_CONST) != 0)

#define VTK_PARSE_FUNCTION    0x5000

#define typeIsFunction(x)   ((x) == VTK_PARSE_FUNCTION)

#ifdef __cplusplus
extern "C" {
#endif

/* return the base type as a VTK type constant */
int parseBaseTypeAsVTKType(int type);

/* return the storage class decorator as a string, with possible
 * return values being "", "const", "static", and "static const" */
const char *parseStorageClassAsString(int type);

/* return the indirection decorators as a string, with possible
 * return values "", "&", "&&", "*", "**", and "*&" */
const char *parseIndirectionAsString(int type);

/* return the base type as a string,
 * prefix with "unsigned" if the type is unsigned,
 * return second arg "vtkname" if type is a vtkObject,
 * return "function" if type is a function pointer,
 * return empty string for impossible types */
const char *parseBaseTypeAsString(int type, const char *vtkname);

/* return the base type constant name as a string, i.e. 
 * VTK_PARSE_INT -> "INT" */
const char *parseTypeConstAsString(int type);

#ifdef __cplusplus
}
#endif


#endif
