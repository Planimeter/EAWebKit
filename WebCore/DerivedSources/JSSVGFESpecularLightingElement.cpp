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

#include "JSSVGFESpecularLightingElement.h"

#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFESpecularLightingElement.h"
#include <wtf/GetPtr.h>

#if ENABLE(SVG)
#include "JSSVGAnimatedLength.h"
#endif

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFESpecularLightingElementTableValues[] =
{
    { "in1", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementIn1), (intptr_t)0 },
    { "surfaceScale", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementSurfaceScale), (intptr_t)0 },
    { "specularConstant", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementSpecularConstant), (intptr_t)0 },
    { "specularExponent", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementSpecularExponent), (intptr_t)0 },
#if ENABLE(SVG)
    { "x", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementX), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "y", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementY), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "width", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementWidth), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "height", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementHeight), (intptr_t)0 },
#endif
#if ENABLE(SVG)
    { "result", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementResult), (intptr_t)0 },
#endif
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFESpecularLightingElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFESpecularLightingElementTable = { 35, 31, JSSVGFESpecularLightingElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFESpecularLightingElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFESpecularLightingElementConstructorTable = { 1, 0, JSSVGFESpecularLightingElementConstructorTableValues, 0 };
const ClassInfo JSSVGFESpecularLightingElementConstructor::s_info = { "SVGFESpecularLightingElementConstructor", &Base::s_info, &JSSVGFESpecularLightingElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFESpecularLightingElementConstructor) };

JSSVGFESpecularLightingElementConstructor::JSSVGFESpecularLightingElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFESpecularLightingElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGFESpecularLightingElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFESpecularLightingElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFESpecularLightingElementConstructor, JSDOMWrapper>(exec, JSSVGFESpecularLightingElementConstructorTable, jsCast<JSSVGFESpecularLightingElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFESpecularLightingElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFESpecularLightingElementPrototypeTable = { 1, 0, JSSVGFESpecularLightingElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFESpecularLightingElementPrototype::s_info = { "SVGFESpecularLightingElementPrototype", &Base::s_info, &JSSVGFESpecularLightingElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFESpecularLightingElementPrototype) };

JSObject* JSSVGFESpecularLightingElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFESpecularLightingElement>(vm, globalObject);
}

const ClassInfo JSSVGFESpecularLightingElement::s_info = { "SVGFESpecularLightingElement", &Base::s_info, &JSSVGFESpecularLightingElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFESpecularLightingElement) };

JSSVGFESpecularLightingElement::JSSVGFESpecularLightingElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFESpecularLightingElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGFESpecularLightingElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGFESpecularLightingElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGFESpecularLightingElementPrototype::create(vm, globalObject, JSSVGFESpecularLightingElementPrototype::createStructure(vm, globalObject, JSSVGElementPrototype::self(vm, globalObject)));
}

bool JSSVGFESpecularLightingElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFESpecularLightingElement* thisObject = jsCast<JSSVGFESpecularLightingElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGFESpecularLightingElement, Base>(exec, JSSVGFESpecularLightingElementTable, thisObject, propertyName, slot);
}

JSValue jsSVGFESpecularLightingElementIn1(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpecularLightingElement* castedThis = jsCast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFESpecularLightingElementSurfaceScale(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpecularLightingElement* castedThis = jsCast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.surfaceScaleAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFESpecularLightingElementSpecularConstant(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpecularLightingElement* castedThis = jsCast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.specularConstantAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFESpecularLightingElementSpecularExponent(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpecularLightingElement* castedThis = jsCast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedNumber> obj = impl.specularExponentAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


#if ENABLE(SVG)
JSValue jsSVGFESpecularLightingElementX(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpecularLightingElement* castedThis = jsCast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFESpecularLightingElementY(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpecularLightingElement* castedThis = jsCast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFESpecularLightingElementWidth(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpecularLightingElement* castedThis = jsCast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFESpecularLightingElementHeight(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpecularLightingElement* castedThis = jsCast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedLength> obj = impl.heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

#if ENABLE(SVG)
JSValue jsSVGFESpecularLightingElementResult(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpecularLightingElement* castedThis = jsCast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFESpecularLightingElement& impl = castedThis->impl();
    RefPtr<SVGAnimatedString> obj = impl.resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}

#endif

JSValue jsSVGFESpecularLightingElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGFESpecularLightingElement* domObject = jsCast<JSSVGFESpecularLightingElement*>(asObject(slotBase));
    return JSSVGFESpecularLightingElement::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSSVGFESpecularLightingElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFESpecularLightingElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(FILTERS) && ENABLE(SVG)