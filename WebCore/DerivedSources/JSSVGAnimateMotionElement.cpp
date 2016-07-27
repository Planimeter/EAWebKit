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

#if ENABLE(SVG)

#include "JSSVGAnimateMotionElement.h"

#include "SVGAnimateMotionElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGAnimateMotionElementTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGAnimateMotionElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGAnimateMotionElementTable = { 2, 1, JSSVGAnimateMotionElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGAnimateMotionElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGAnimateMotionElementConstructorTable = { 1, 0, JSSVGAnimateMotionElementConstructorTableValues, 0 };
const ClassInfo JSSVGAnimateMotionElementConstructor::s_info = { "SVGAnimateMotionElementConstructor", &Base::s_info, &JSSVGAnimateMotionElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGAnimateMotionElementConstructor) };

JSSVGAnimateMotionElementConstructor::JSSVGAnimateMotionElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGAnimateMotionElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGAnimateMotionElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGAnimateMotionElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAnimateMotionElementConstructor, JSDOMWrapper>(exec, JSSVGAnimateMotionElementConstructorTable, jsCast<JSSVGAnimateMotionElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGAnimateMotionElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGAnimateMotionElementPrototypeTable = { 1, 0, JSSVGAnimateMotionElementPrototypeTableValues, 0 };
const ClassInfo JSSVGAnimateMotionElementPrototype::s_info = { "SVGAnimateMotionElementPrototype", &Base::s_info, &JSSVGAnimateMotionElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGAnimateMotionElementPrototype) };

JSObject* JSSVGAnimateMotionElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGAnimateMotionElement>(vm, globalObject);
}

const ClassInfo JSSVGAnimateMotionElement::s_info = { "SVGAnimateMotionElement", &Base::s_info, &JSSVGAnimateMotionElementTable, 0 , CREATE_METHOD_TABLE(JSSVGAnimateMotionElement) };

JSSVGAnimateMotionElement::JSSVGAnimateMotionElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGAnimateMotionElement> impl)
    : JSSVGAnimationElement(structure, globalObject, impl)
{
}

void JSSVGAnimateMotionElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGAnimateMotionElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGAnimateMotionElementPrototype::create(vm, globalObject, JSSVGAnimateMotionElementPrototype::createStructure(vm, globalObject, JSSVGAnimationElementPrototype::self(vm, globalObject)));
}

bool JSSVGAnimateMotionElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGAnimateMotionElement* thisObject = jsCast<JSSVGAnimateMotionElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGAnimateMotionElement, Base>(exec, JSSVGAnimateMotionElementTable, thisObject, propertyName, slot);
}

JSValue jsSVGAnimateMotionElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSSVGAnimateMotionElement* domObject = jsCast<JSSVGAnimateMotionElement*>(asObject(slotBase));
    return JSSVGAnimateMotionElement::getConstructor(exec->vm(), domObject->globalObject());
}

JSValue JSSVGAnimateMotionElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGAnimateMotionElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG)