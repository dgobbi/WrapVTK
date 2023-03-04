# WrapVTK XML Format

The vtkWrapXML program is a simple tool that reads VTK class header
files and produces XML descriptions of the classes. Usually vtkWrapXML
is called from within WrapVTK, which contains CMake files to automate
the process.

## History

Originally, vtkXML was created as part of the SimVTK project at the
MedIA Lab at Queen's University. The basic structure was copied from
vtkWrapPython and utilized the vtkParse infrastructure that comes with
VTK. David Gobbi (lab staff) and Adam Campigotto (undergraduate student)
were the authors. This original version of vtkXML produced an XML format
that was specifically formulated for use with SimVTK, e.g. all Set methods
with vtkObject arguments were tagged as "Inputs", while all Set methods
with int/double arguments were tagged as "Parameters". These tags
specifically reflected how these methods would be used by Simulink.

In March 2010, vtkXML was re-written as vtkWrapXML by David Gobbi to
make it more general and more comprehensive. The new xml output uses
tags that reflect the C++ usage of the classes, and produces output for
all methods of each class (or at least, all methods recognized by
vtkParse) instead of only producing output for methods with
Get/Set/Add/Remove signatures.

## Purpose

The vtkWrapXML executable is part of the WrapVTK project, which enables
the building of wrappers for VTK from outside of the VTK source tree.
The first goal is to use the new vtkWrapXML in the SimVTK project, which
uses the XML description of the VTK classes to provide a Simulink wrapper
for VTK.

Another goal is to generate a "pseudo-wrapper" to allow the kind of
run-time object introspection that is currently only available in the
python wrappers, to also be available through C++. These pseudo-wrappers
would provide run-time access to:

- class and method documentation
- a list of all properties, including information such as variable
  type, current value, allowed values, etc.
- a list of all methods, including parameter types

This information could then be used for things such as automatic
creation of introspection GUIs, similar to existing pipeline inspectors
but written entirely in C++ (i.e. not requiring the use of Python or Tcl
to do the introspection).

## Element Descriptions

The main body element of the XML is [\<file\>](#File-Element), which
acts as a container for all information about in the parsed header file.

### File Element

The **\<file\>** element has the following attributes:

- **"name"** giving the name of the header file

The **\<file\>** element has the following children:

- **[\<comment\>](#Comment-Element)** with commented lines
- **[\<typedef\>](#Typedef-Element)**
- **[\<class\>](#Class-Element)**
- **[\<struct\>](#Struct-Element)**
- **[\<union\>](#Union-Element)**
- **[\<function\>](#Function-Element)**
- **[\<enum\>](#Enum-Element)**
- **[\<constant\>](#Constant-Element)**
- **[\<variable\>](#Variable-Element)**
- **[\<using\>](#Using-Element)**
- **[\<namespace\>](#Namespace-Element)**
- **[\<alias\>](#Alias-Element)**

### Namespace Element

Each **\<namespace\>** element has the following attributes:

- **"name"** the namespace name

The **\<namespace\>** element has the following children:

- **[\<comment\>](#Comment-Element)**
- **[\<typedef\>](#Typedef-Element)**
- **[\<class\>](#Class-Element)**
- **[\<struct\>](#Struct-Element)**
- **[\<union\>](#Union-Element)**
- **[\<function\>](#Function-Element)**
- **[\<enum\>](#Enum-Element)**
- **[\<constant\>](#Constant-Element)**
- **[\<variable\>](#Variable-Element)**
- **[\<using\>](#Using-Element)**
- **[\<namespace\>](#Namespace-Element)**
- **[\<alias\>](#Alias-Element)**

### Class Element

Each **\<class\>** element has the following attributes:

- **"name"** the class name
- **"abstract"** with possible value 1
- **"template"** with possible value 1

The **\<class\>** element has the following children:

- **[\<comment\>](#Comment-Element)**
- **[\<tparam\>](#TParam-Element)** for each template parameter
- **[\<inheritance\>](#Inheritance-Element)** lists all of the base
  classes in the inheritance chain
- **[\<base\>](#Base-Element)** for each base class
- **[\<typedef\>](#Typedef-Element)**
- **[\<property\>](#Property-Element)**
- **[\<method\>](#Method-Element)**
- **[\<enum\>](#Enum-Element)**
- **[\<constant\>](#Constant-Element)**
- **[\<member\>](#Member-Element)**
- **[\<using\>](#Using-Element)**

Each child element except for \<tparam\> and \<inheritance\> will have
an **"access"** attribute with possible values *private*, *protected*,
*public*.

### TParam Element

There is one **\<tparam\>** element per template parameter in a
function, method, class, or struct definition. It has the following
attributes:

- **"type"** specifying a type or the keywords *typename* or *template*
- **"name"** giving the name of the template parameter
- **"value"** giving the default value of the parameter

There is one possible child for the \<tparam\> element:

- **\<tparam\>** child elements are present when type="template"

### Inheritance Element

The **\<inheritance\>** element provides a list of all base classes in
the inheritance chain. It starts with the current class and descends
through all base classes, taking multiple inheritance into account.

Its children are the following element:

- **[\<context\>](#Context-Element)** for the class and each class
  that is inherited from

### Context Element

The **\<context\>** element names a context for resolving methods,
typedefs, and other class attributes. It can only have the following
attributes:

- **"name"** the name of the class
- **"access"** with values *public*, *protected*, *private*

Every \<method\>, \<member\>, \<property\>, \<typedef\> etc. in a class
will have a **"context"** attribute to indicate where that particular
member was inherited from.

### Base Element

The **\<base\>** element can only have the following attributes:

- **"name"** the name of the base class
- **"access"** with values *public*, *protected*, *private*
- **"virtual"** with value 1 if this is a virtual base class

### Struct Element

The **\<struct\>** element is a copy of the
**[\<class\>](#Class-Element)** element

### Union Element

The **\<union\>** element is a copy of the
**[\<struct\>](#Struct-Element)** element

### Property Element

The properties are synthesized by inspection of the Get/Set/Add/Remove
methods. They reflect the way that VTK object properties are accessed.

Each **\<property\>** element can have the following attributes:

- **"name"**
- **"context"** the class this property was inherited from
- **"static"** with possible value 1
- **"type"** with values like "int", "const int", or "function"
- **"pointer"** with values like "\*" or "\*\*"
- **"size"** with values like "3" or "{2,2}"

Each **\<property\>** element can have the following children:

- **[\<comment\>](#Comment-Element)**
- **[\<function\>](#Function-Element)** if the "type" attribute is *function*
- **[\<methods\>](#Property-Methods-Element)** (see below)
- **[\<valname\>](#ValName-Element)** for each SetValueToSomething()
  method that exists

### Property Methods Element

The **\<methods\>** elements contain an **"access"** attribute with
values *public*, *protected*, *private* and a **"bitfield"** attribute
that describes all the methods that are available for accessing the
property. Each method type is separated by a pipe "\|".

- *GET* is "type GetValue()" or "type \*GetValue()"
- *SET* is "void SetValue(type)" or "type SetValue(type \[\])"
- *GET\_MULTI* is "void GetValue(type&, type&, type&)"
- *SET\_MULTI* is "void SetValue(type, type, type)"
- *GET\_IDX* is "type GetValue(int)" or "type \*GetValue(int)"
- *SET\_IDX* is "void SetValue(int, type)" or "void SetValue(int, type \[\])"
- *GET\_NTH* is "type GetNthValue(int)" or "type \*GetNthValue(int)"
- *SET\_NTH* is "void SetNthValue(int,type)" or "void
  SetNthValue(int,type \[\])"
- *GET\_RHS* is "void GetValue(type \[\])"
- *GET\_IDX\_RHS* is "void GetValue(int, type \[\])"
- *GET\_NTH\_RHS* is "void GetNthValue(int, type \[\])"
- *GET\_AS\_STRING* is "const char \*GetValueAsString()"
- *SET\_VALUE\_TO* is "void SetValueToSomething()"
- *SET\_BOOL* is "void ValueOn()" and "ValueOff()" (both must be present)
- *SET\_CLAMP* is "type GetVarMinValue()" and "type
  GetVarMaxValue()" (both must be present)
- *GET\_NUMBER\_OF* is "int GetNumberOfValues()"
- *SET\_NUMBER\_OF* is "void SetNumberOfValues(int)"
- *ADD* is "void AddValue(type)"
- *ADD\_MULTI* is "void AddValue(type, type, type)"
- *ADD\_IDX* is "void AddValue(int, type)"
- *REMOVE* is "void RemoveValue(type)"
- *REMOVE\_IDX* is "void RemoveValue(int, type)"
- *REMOVE\_ALL* is "void RemoveAllValues()"

### ValName Element

The **\<valname\>** element names a possible value for a property that
has SET\_VALUE\_TO in one of its method bitfields. It has one attribute:

- **"name"**

### Method Element

Each **\<method\>** element can have the following attributes:

- **"name"**
- **"context"** for the class this method is inherited from
- **"property"** with the name of the property associated with the
  method (if any)
- **"template"** with value 1 if the method is templated
- **"static"** with value 1 if the method is static
- **"virtual"** with value 1 if the method is virtual
- **"const"** with value 1 if the method can be called on a const
  instance
- **"legacy"** with value 1 if the method is obsolete

Each **\<method\>** element can have the following children:

- **[\<comment\>](#Comment-Element)**
- **[\<signature\>](#Signature-Element)** which is the C++ method
  signature, filtered through vtkParse
- **[\<tparam\>](#TParam-Element)** for each template arg, if the
  method is templated
- **[\<return\>](#Param-and-Return-Elements)** describing the return type
- **[\<param\>](#Param-and-Return-Elements)** for each of the method
  parameters

### Constructor and Destructor Elements

The **\<constructor\>** element is a copy of the
**[\<method\>](#Method-Element)** element, except that:

- **"explicit"** indicates that the constructor will not be used for
  implicit type conversions
- **"name"** is absent
- **\<return\>** is absent

The **\<destructor\>** element is a copy of the
**[\<method\>](#Method-Element)** element, except that:

- **"name"** is absent
- **\<return\>** and **\<param\>** are both absent

### Function Element

Each **\<function\>** element can have the following attributes:

- **"name"** which will be absent for anonymous functions
- **"static"** with value 1 if the function is static
- **"template"** with value 1 if the function is templated
- **"legacy"** with value 1 if the function is obsolete

Each **\<function\>** element can have the following children:

- **[\<comment\>](#Comment-Element)**
- **[\<signature\>](#Signature-Element)** which is the C++ function
  signature, filtered through vtkParse
- **[\<tparam\>](#TParam-Element)** for each template pamameter if the
  function is templated
- **[\<return\>](#Param-and-Return-Elements)** describing the return type
- **[\<param\>](#Param-and-Return-Elements)** for each of the function
  parameters

### Param and Return Elements

The **\<return\>** and **\<param\>** elements have the following
attributes:

- **"name"** for param but not for return
- **"type"** with values *int*, *const int*, *function*, *method*, etc.
- **"pointer"** with values like "\*", "\*\*", "\*const" etc.
- **"size"** with values like "3" or "{3, 4}"
- **"reference"** with value 1 to indicate a reference to a value
- **"value"** for param only, giving the default value

The **\<return\>** and **\<param\>** elements have the following
children:

- **[\<function\>](#Function-Element)** when "type" is *function*
- **[\<method\>](#Method-Element)** when "type" is *method*
- **[\<class\>](#Class-Element)** when "type" is *class* (future -
  to support anonymous classes)
- **[\<struct\>](#Struct-Element)** when "type" is *struct*
  (future - to support anonymous structs)
- **[\<union\>](#Union-Element)** when "type" is *union* (future -
  to support anonymous unions)
- **[\<enum\>](#Enum-Element)** when "type" is *enum* (future - to
  support anonymous enums)

### Variable Element

Each **\<variable\>** element represents a regular variable. It is a
copy of the **[\<param\>](#Param-and-Return-Elements)** element.

### Constant Element

The **\<constant\>** element represents either a macro constant, enum
value, or constant variable. It is a copy of the
**[\<variable\>](#Variable-Element)** element, with the following
differences:

- **"enum"** with value 1 indicates an enum constant
- **"type"** can be absent for macro constants
- **"value"** is mandatory

### Member Element

The **\<member\>** element, like **\<variable\>**, is a copy of the
**[\<param\>](#Param-and-Return-Elements)** element. It has the
following additional attributes:

- **"context"** giving the class the member is inherited from
- **"property"** giving the name of the property associated with the
  member (future)
- **"static"** with a value of 1 if the member is static
- **"access"** with values *public*, *protected*, *private*

### Typedef Element

The **\<typedef\>** element is a copy of the
**[\<param\>](#Param-and-Return-Elements)** element, with the following
additional attributes if the typedef is a class member:

- **"context"** giving the class this type is inherited from
- **"access"** with values *public*, *protected*, *private*

### Enum Element

The **\<enum\>** element defines an enum type. It has the following
attributes:

- **"name"** giving the name of the type (if not anonymous)
- **"context"** if the enum is a class member, giving the name of
  the class
- **"access"\'\'** if the enum is a class member, with values
  *public*, *protected*, *private*

The **\<enum\>** element can have the following child element:

- **[\<comment\>](#Comment-Element)**

The constants are kept at the same level as the \<enum\>, instead of
being contained within it. Any constant with **enum="1"** and with a
type that matches the enum name, is a member of the enum.

### Using Element

The **\<using\>** element contains the following attributes:

- **"name"** giving the item to use, or *namespace* if the whole
  namespace is to be used
- **"context"** the namespace scope, without a trailing \'\'::\'\'

### Alias Element

The **\<alias\>** element is used for a namespace alias declaration. It
contains the following attributes:

- **"name"** the alias
- **"context"** the namespace that is to be aliased

### Comment Element

The **\<comment\>** element contains an indented text block that
provides documentation. For example,

\<comment\>  
This is a comment.  
\</comment\>

The comment text may contain doxygen markup tags and even html (quoted,
of course, for inclusion in xml).

### Signature Element

The **\<signature\>** element provides a plain-text declaration of a
function or method.

## Future Extensions

The XML is intended to be VTK-specific, with the following intended
uses:

1. wrapper-generators
2. introspection code
3. automatic GUI generators

Specifically, the XML it is not meant to provide any information that
cannot be synthesized from the vtkParse FileInfo struct. However, as
vtkParse is enhanced, so will the XML be enhanced.

## Example

    <file name="vtkImageReslice.h">
    <comment>
    .NAME vtkImageReslice - Reslices a volume along a new set of axes.

    .SECTION Description
    vtkImageReslice is the swiss-army-knife of image geometry filters:

    .SECTION Caveats
    This filter is very inefficient if the output X dimension is 1.

    .SECTION See also
    vtkAbstractTransform
    vtkMatrix4x4
    </comment>

    <constant name="VTK_RESLICE_NEAREST" value="0" />
    <constant name="VTK_RESLICE_LINEAR" value="1" />
    <constant name="VTK_RESLICE_RESERVED_2" value="2" />
    <constant name="VTK_RESLICE_CUBIC" value="3" />

    <class name="vtkImageReslice">
    <base name="vtkThreadedImageAlgorithm" access="public" />

    <inheritance>
    <context name="vtkImageReslice" access="public" />
    <context name="vtkThreadedImageAlgorithm" access="public" />
    <context name="vtkImageAlgorithm" access="public" />
    <context name="vtkAlgorithm" access="public" />
    <context name="vtkObject" access="public" />
    <context name="vtkObjectBase" access="public" />
    </inheritance>

    <method name="New" context="vtkImageReslice" access="public" static="1">
    <signature>
    static vtkImageReslice *New()
    </signature>
    <comment>
    Create an object with Debug turned off, modified time initialized
    to zero, and reference counting on.
    </comment>
    <return type="vtkImageReslice" pointer="*" />
    </method>

    <property name="InterpolationMode" context="vtkImageReslice" access="public"
    type="int">
    <comment>
    Set interpolation mode (default: nearest neighbor).
    </comment>
    <methods bitfield="GET|SET|SET_CLAMP|GET_AS_STRING|SET_VALUE_TO" access="public" />
    <valname name="NearestNeighbor" />
    <valname name="Linear" />
    <valname name="Cubic" />
    </property>

    <method name="SetInterpolationMode" context="vtkImageReslice" access="public"
    property="InterpolationMode">
    <signature>
    void SetInterpolationMode(int)
    </signature>
    <comment>
    Set interpolation mode (default: nearest neighbor).
    </comment>
    <param type="int" />
    <return type="void" />
    </method>

    <method name="GetInterpolationModeMinValue" context="vtkImageReslice" access="public"
    property="InterpolationMode">
    <signature>
    int GetInterpolationModeMinValue()
    </signature>
    <comment>
    Set interpolation mode (default: nearest neighbor).
    </comment>
    <return type="int" />
    </method>

    <method name="GetInterpolationModeMaxValue" context="vtkImageReslice" access="public"
    property="InterpolationMode">
    <signature>
    int GetInterpolationModeMaxValue()
    </signature>
    <comment>
    Set interpolation mode (default: nearest neighbor).
    </comment>
    <return type="int" />
    </method>

    <method name="GetInterpolationMode" context="vtkImageReslice" access="public"
    property="InterpolationMode">
    <signature>
    int GetInterpolationMode()
    </signature>
    <comment>
    Set interpolation mode (default: nearest neighbor).
    </comment>
    <return type="int" />
    </method>

    <method name="SetInterpolationModeToNearestNeighbor" context="vtkImageReslice"
    access="public" property="InterpolationMode">
    <signature>
    void SetInterpolationModeToNearestNeighbor()
    </signature>
    <comment>
    Set interpolation mode (default: nearest neighbor).
    </comment>
    <return type="void" />
    </method>

    <method name="SetInterpolationModeToLinear" context="vtkImageReslice" access="public"
    property="InterpolationMode">
    <signature>
    void SetInterpolationModeToLinear()
    </signature>
    <comment>
    Set interpolation mode (default: nearest neighbor).
    </comment>
    <return type="void" />
    </method>

    <method name="SetInterpolationModeToCubic" context="vtkImageReslice" access="public"
    property="InterpolationMode">
    <signature>
    void SetInterpolationModeToCubic()
    </signature>
    <comment>
    Set interpolation mode (default: nearest neighbor).
    </comment>
    <return type="void" />
    </method>

    <method name="GetInterpolationModeAsString" context="vtkImageReslice" access="public"
    property="InterpolationMode" virtual="1">
    <signature>
    virtual const char *GetInterpolationModeAsString()
    </signature>
    <comment>
    Set interpolation mode (default: nearest neighbor).
    </comment>
    <return type="const char" pointer="*" />
    </method>

    <member name="InterpolationMode" access="protected" type="int" />

    </class>
    </file>
