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
#include "JSHTMLUListElement.h"

#include "HTMLNames.h"
#include "HTMLUListElement.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLUListElementTableValues[] =
{
    { "compact", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLUListElementCompact), (intptr_t)setJSHTMLUListElementCompact },
    { "type", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLUListElementType), (intptr_t)setJSHTMLUListElementType },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLUListElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLUListElementTable = { 8, 7, JSHTMLUListElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLUListElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLUListElementConstructorTable = { 1, 0, JSHTMLUListElementConstructorTableValues, 0 };
const ClassInfo JSHTMLUListElementConstructor::s_info = { "HTMLUListElementConstructor", &Base::s_info, &JSHTMLUListElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLUListElementConstructor) };

JSHTMLUListElementConstructor::JSHTMLUListElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLUListElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLUListElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLUListElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLUListElementConstructor, JSDOMWrapper>(exec, JSHTMLUListElementConstructorTable, jsCast<JSHTMLUListElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLUListElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLUListElementPrototypeTable = { 1, 0, JSHTMLUListElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLUListElementPrototype::s_info = { "HTMLUListElementPrototype", &Base::s_info, &JSHTMLUListElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLUListElementPrototype) };

JSObject* JSHTMLUListElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLUListElement>(vm, globalObject);
}

const ClassInfo JSHTMLUListElement::s_info = { "HTMLUListElement", &Base::s_info, &JSHTMLUListElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLUListElement) };

JSHTMLUListElement::JSHTMLUListElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLUListElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLUListElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSHTMLUListElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLUListElementPrototype::create(vm, globalObject, JSHTMLUListElementPrototype::createStructure(vm, globalObject, JSHTMLElementPrototype::self(vm, globalObject)));
}

bool JSHTMLUListElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLUListElement* thisObject = jsCast<JSHTMLUListElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSHTMLUListElement, Base>(exec, JSHTMLUListElementTable, thisObject, propertyName, slot);
}

JSValue jsHTMLUListElementCompact(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLUListElement* castedThis = jsCast<JSHTMLUListElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLUListElement& impl = castedThis->impl();
    JSValue result = jsBoolean(impl.fastHasAttribute(WebCore::HTMLNames::compactAttr));
    return result;
}


JSValue jsHTMLUListElementType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLUListElement* castedThis = jsCast<JSHTMLUListElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLUListElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::typeAttr));
    return result;
}


JSValue jsHTMLUListElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLUListElement* domObject = jsCast<JSHTMLUListElement*>(asObject(slotBase));
    return JSHTMLUListElement::getConstructor(exec->vm(), domObject->globalObject());
}

void JSHTMLUListElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLUListElement* thisObject = jsCast<JSHTMLUListElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSHTMLUListElement, Base>(exec, propertyName, value, JSHTMLUListElementTable, thisObject, slot);
}

void setJSHTMLUListElementCompact(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLUListElement* castedThis = jsCast<JSHTMLUListElement*>(thisObject);
    HTMLUListElement& impl = castedThis->impl();
    bool nativeValue(value.toBoolean(exec));
    if (exec->hadException())
        return;
    impl.setBooleanAttribute(WebCore::HTMLNames::compactAttr, nativeValue);
}


void setJSHTMLUListElementType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLUListElement* castedThis = jsCast<JSHTMLUListElement*>(thisObject);
    HTMLUListElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::typeAttr, nativeValue);
}


JSValue JSHTMLUListElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLUListElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}