/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(FILTERS) && ENABLE(SVG)

#include "JSSVGFEDisplacementMapElement.h"

#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEDisplacementMapElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedLength.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFEDisplacementMapElementTableValues[] =
{
    { "in1", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementIn1), (intptr_t)0 },
    { "in2", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementIn2), (intptr_t)0 },
    { "scale", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementScale), (intptr_t)0 },
    { "xChannelSelector", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementXChannelSelector), (intptr_t)0 },
    { "yChannelSelector", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementYChannelSelector), (intptr_t)0 },
#if ENABLE(SVG)
    { "x", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementX), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "y", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementY), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "width", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementWidth), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "height", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementHeight), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "result", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementResult), (intptr_t)0 },
#endif
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFEDisplacementMapElementTable = { 35, 31, JSSVGFEDisplacementMapElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFEDisplacementMapElementConstructorTableValues[] =
{
    { "SVG_CHANNEL_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementSVG_CHANNEL_UNKNOWN), (intptr_t)0 },
    { "SVG_CHANNEL_R", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementSVG_CHANNEL_R), (intptr_t)0 },
    { "SVG_CHANNEL_G", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementSVG_CHANNEL_G), (intptr_t)0 },
    { "SVG_CHANNEL_B", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementSVG_CHANNEL_B), (intptr_t)0 },
    { "SVG_CHANNEL_A", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementSVG_CHANNEL_A), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFEDisplacementMapElementConstructorTable = { 16, 15, JSSVGFEDisplacementMapElementConstructorTableValues, 0 };
const ClassInfo JSSVGFEDisplacementMapElementConstructor::s_info = { "SVGFEDisplacementMapElementConstructor", &Base::s_info, &JSSVGFEDisplacementMapElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFEDisplacementMapElementConstructor) };

JSSVGFEDisplacementMapElementConstructor::JSSVGFEDisplacementMapElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFEDisplacementMapElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGFEDisplacementMapElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFEDisplacementMapElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEDisplacementMapElementConstructor, JSDOMWrapper>(exec, JSSVGFEDisplacementMapElementConstructorTable, jsCast<JSSVGFEDisplacementMapElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFEDisplacementMapElementPrototypeTableValues[] =
{
    { "SVG_CHANNEL_UNKNOWN", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementSVG_CHANNEL_UNKNOWN), (intptr_t)0 },
    { "SVG_CHANNEL_R", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementSVG_CHANNEL_R), (intptr_t)0 },
    { "SVG_CHANNEL_G", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementSVG_CHANNEL_G), (intptr_t)0 },
    { "SVG_CHANNEL_B", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementSVG_CHANNEL_B), (intptr_t)0 },
    { "SVG_CHANNEL_A", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDisplacementMapElementSVG_CHANNEL_A), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFEDisplacementMapElementPrototypeTable = { 16, 15, JSSVGFEDisplacementMapElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEDisplacementMapElementPrototype::s_info = { "SVGFEDisplacementMapElementPrototype", &Base::s_info, &JSSVGFEDisplacementMapElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFEDisplacementMapElementPrototype) };

JSObject* JSSVGFEDisplacementMapElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEDisplacementMapElement>(vm, globalObject);
}

bool JSSVGFEDisplacementMapElementPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEDisplacementMapElementPrototype* thisObject = jsCast<JSSVGFEDisplacementMapElementPrototype*>(object);
    return getStaticValueSlot<JSSVGFEDisplacementMapElementPrototype, JSObject>(exec, JSSVGFEDisplacementMapElementPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSSVGFEDisplacementMapElement::s_info = { "SVGFEDisplacementMapElement", &Base::s_info, &JSSVGFEDisplacementMapElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFEDisplacementMapElement) };

JSSVGFEDisplacementMapElement::JSSVGFEDisplacementMapElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEDisplacementMapElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGFEDisplacementMapElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGFEDisplacementMapElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGFEDisplacementMapElementPrototype::create(vm, globalObject, JSSVGFEDisplacementMapElementPrototype::createStructure(vm, globalObject, JSSVGElementPrototype::self(vm, globalObject)));
}

bool JSSVGFEDisplacementMapElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFEDisplacementMapElement* thisObject = jsCast<JSSVGFEDisplacementMapElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGFEDisplacementMapElement, Base>(exec, JSSVGFEDisplacementMapElementTable, thisObject, propertyName, slot);
}

JSValue jsSVGFEDisplacementMapElementIn1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDisplacementMapElement* castedThis = jsCast<JSSVGFEDisplacementMapElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDisplacementMapElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDisplacementMapElementIn2(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDisplacementMapElement* castedThis = jsCast<JSSVGFEDisplacementMapElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDisplacementMapElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.in2Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDisplacementMapElementScale(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDisplacementMapElement* castedThis = jsCast<JSSVGFEDisplacementMapElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDisplacementMapElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.scaleAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDisplacementMapElementXChannelSelector(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDisplacementMapElement* castedThis = jsCast<JSSVGFEDisplacementMapElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDisplacementMapElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedEnumeration> obj = impl.xChannelSelectorAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDisplacementMapElementYChannelSelector(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDisplacementMapElement* castedThis = jsCast<JSSVGFEDisplacementMapElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDisplacementMapElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedEnumeration> obj = impl.yChannelSelectorAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGFEDisplacementMapElementX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDisplacementMapElement* castedThis = jsCast<JSSVGFEDisplacementMapElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDisplacementMapElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEDisplacementMapElementY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDisplacementMapElement* castedThis = jsCast<JSSVGFEDisplacementMapElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDisplacementMapElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEDisplacementMapElementWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDisplacementMapElement* castedThis = jsCast<JSSVGFEDisplacementMapElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDisplacementMapElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEDisplacementMapElementHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDisplacementMapElement* castedThis = jsCast<JSSVGFEDisplacementMapElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDisplacementMapElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFEDisplacementMapElementResult(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDisplacementMapElement* castedThis = jsCast<JSSVGFEDisplacementMapElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDisplacementMapElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGFEDisplacementMapElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFEDisplacementMapElement* domObject = jsCast<JSSVGFEDisplacementMapElement*>(asObject(slotBase));
    return JSSVGFEDisplacementMapElement::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSSVGFEDisplacementMapElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEDisplacementMapElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

// Constant getters

JSValue jsSVGFEDisplacementMapElementSVG_CHANNEL_UNKNOWN(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(0));
}

JSValue jsSVGFEDisplacementMapElementSVG_CHANNEL_R(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsSVGFEDisplacementMapElementSVG_CHANNEL_G(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSValue jsSVGFEDisplacementMapElementSVG_CHANNEL_B(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(3));
}

JSValue jsSVGFEDisplacementMapElementSVG_CHANNEL_A(ExecState* exec, JSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(4));
}


}

#endif // ENABLE(FILTERS) && ENABLE(SVG)