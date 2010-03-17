// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Object>
#include <osgAnimation/Action>
#include <osgAnimation/ActionVisitor>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::map< unsigned int COMMA  osg::ref_ptr< osgAnimation::Action::Callback > >, osgAnimation::Action::FrameCallback)

BEGIN_OBJECT_REFLECTOR(osgAnimation::Action)
	I_DeclaringFile("osgAnimation/Action");
	I_BaseType(osg::Object);
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method1(void, accept, IN, osgAnimation::ActionVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osgAnimation_ActionVisitor_R1,
	          "",
	          "");
	I_Constructor0(____Action,
	               "",
	               "");
	I_Constructor2(IN, const osgAnimation::Action &, x, IN, const osg::CopyOp &, x,
	               ____Action__C5_Action_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method2(void, setCallback, IN, double, when, IN, osgAnimation::Action::Callback *, callback,
	          Properties::NON_VIRTUAL,
	          __void__setCallback__double__Callback_P1,
	          "",
	          "");
	I_Method2(void, setCallback, IN, unsigned int, frame, IN, osgAnimation::Action::Callback *, callback,
	          Properties::NON_VIRTUAL,
	          __void__setCallback__unsigned_int__Callback_P1,
	          "",
	          "");
	I_Method1(osgAnimation::Action::Callback *, getCallback, IN, unsigned int, frame,
	          Properties::NON_VIRTUAL,
	          __Callback_P1__getCallback__unsigned_int,
	          "",
	          "");
	I_Method1(void, removeCallback, IN, osgAnimation::Action::Callback *, x,
	          Properties::NON_VIRTUAL,
	          __void__removeCallback__Callback_P1,
	          "",
	          "");
	I_Method1(osgAnimation::Action::Callback *, getFrameCallback, IN, unsigned int, frame,
	          Properties::NON_VIRTUAL,
	          __Callback_P1__getFrameCallback__unsigned_int,
	          "",
	          "");
	I_Method1(osgAnimation::Action::Callback *, getFrameCallback, IN, double, time,
	          Properties::NON_VIRTUAL,
	          __Callback_P1__getFrameCallback__double,
	          "",
	          "");
	I_Method0(unsigned int, getFramesPerSecond,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getFramesPerSecond,
	          "",
	          "");
	I_Method1(void, setNumFrames, IN, unsigned int, numFrames,
	          Properties::NON_VIRTUAL,
	          __void__setNumFrames__unsigned_int,
	          "",
	          "");
	I_Method1(void, setDuration, IN, double, duration,
	          Properties::NON_VIRTUAL,
	          __void__setDuration__double,
	          "",
	          "");
	I_Method0(unsigned int, getNumFrames,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getNumFrames,
	          "",
	          "");
	I_Method0(double, getDuration,
	          Properties::NON_VIRTUAL,
	          __double__getDuration,
	          "",
	          "");
	I_Method1(void, setLoop, IN, int, nb,
	          Properties::VIRTUAL,
	          __void__setLoop__int,
	          "",
	          "");
	I_Method0(unsigned int, getLoop,
	          Properties::VIRTUAL,
	          __unsigned_int__getLoop,
	          "",
	          "");
	I_Method3(bool, evaluateFrame, IN, unsigned int, frame, IN, unsigned int &, resultframe, IN, unsigned int &, nbloop,
	          Properties::NON_VIRTUAL,
	          __bool__evaluateFrame__unsigned_int__unsigned_int_R1__unsigned_int_R1,
	          "",
	          "");
	I_Method1(void, traverse, IN, osgAnimation::ActionVisitor &, visitor,
	          Properties::VIRTUAL,
	          __void__traverse__ActionVisitor_R1,
	          "",
	          "");
	I_IndexedProperty(osgAnimation::Action::Callback *, Callback, 
	                  __Callback_P1__getCallback__unsigned_int, 
	                  __void__setCallback__unsigned_int__Callback_P1, 
	                  0);
	I_SimpleProperty(double, Duration, 
	                 __double__getDuration, 
	                 __void__setDuration__double);
	I_SimpleProperty(unsigned int, FramesPerSecond, 
	                 __unsigned_int__getFramesPerSecond, 
	                 0);
	I_SimpleProperty(int, Loop, 
	                 0, 
	                 __void__setLoop__int);
	I_SimpleProperty(unsigned int, NumFrames, 
	                 0, 
	                 __void__setNumFrames__unsigned_int);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgAnimation::Action::Callback)
	I_DeclaringFile("osgAnimation/Action");
	I_BaseType(osg::Object);
	I_Constructor0(____Callback,
	               "",
	               "");
	I_Constructor2(IN, const osgAnimation::Action::Callback &, nc, IN, const osg::CopyOp &, x,
	               ____Callback__C5_Callback_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(osgAnimation::Action::Callback *, getNestedCallback,
	          Properties::NON_VIRTUAL,
	          __Callback_P1__getNestedCallback,
	          "",
	          "");
	I_Method1(void, addNestedCallback, IN, osgAnimation::Action::Callback *, callback,
	          Properties::NON_VIRTUAL,
	          __void__addNestedCallback__Callback_P1,
	          "",
	          "");
	I_Method1(void, removeCallback, IN, osgAnimation::Action::Callback *, cb,
	          Properties::NON_VIRTUAL,
	          __void__removeCallback__Callback_P1,
	          "",
	          "");
	I_SimpleProperty(osgAnimation::Action::Callback *, NestedCallback, 
	                 __Callback_P1__getNestedCallback, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgAnimation::Action::Callback >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgAnimation::Action::Callback *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgAnimation::Action::Callback > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgAnimation::Action::Callback *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgAnimation::Action::Callback *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgAnimation::Action::Callback > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgAnimation::Action::Callback *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< unsigned int COMMA  osg::ref_ptr< osgAnimation::Action::Callback > >)
