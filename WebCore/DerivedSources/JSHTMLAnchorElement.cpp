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
#include "JSHTMLAnchorElement.h"

#include "ExceptionCode.h"
#include "HTMLAnchorElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLAnchorElementTableValues[] =
{
    { "charset", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementCharset), (intptr_t)setJSHTMLAnchorElementCharset },
    { "coords", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementCoords), (intptr_t)setJSHTMLAnchorElementCoords },
#if ENABLE(DOWNLOAD_ATTRIBUTE)
    { "download", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementDownload), (intptr_t)setJSHTMLAnchorElementDownload },
#endif
    { "href", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementHref), (intptr_t)setJSHTMLAnchorElementHref },
    { "hreflang", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementHreflang), (intptr_t)setJSHTMLAnchorElementHreflang },
    { "name", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementName), (intptr_t)setJSHTMLAnchorElementName },
    { "ping", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementPing), (intptr_t)setJSHTMLAnchorElementPing },
    { "rel", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementRel), (intptr_t)setJSHTMLAnchorElementRel },
    { "rev", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementRev), (intptr_t)setJSHTMLAnchorElementRev },
    { "shape", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementShape), (intptr_t)setJSHTMLAnchorElementShape },
    { "target", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementTarget), (intptr_t)setJSHTMLAnchorElementTarget },
    { "type", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementType), (intptr_t)setJSHTMLAnchorElementType },
    { "hash", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementHash), (intptr_t)setJSHTMLAnchorElementHash },
    { "host", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementHost), (intptr_t)setJSHTMLAnchorElementHost },
    { "hostname", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementHostname), (intptr_t)setJSHTMLAnchorElementHostname },
    { "pathname", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementPathname), (intptr_t)setJSHTMLAnchorElementPathname },
    { "port", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementPort), (intptr_t)setJSHTMLAnchorElementPort },
    { "protocol", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementProtocol), (intptr_t)setJSHTMLAnchorElementProtocol },
    { "search", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementSearch), (intptr_t)setJSHTMLAnchorElementSearch },
    { "origin", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementOrigin), (intptr_t)0 },
    { "text", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementText), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLAnchorElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLAnchorElementTable = { 68, 63, JSHTMLAnchorElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLAnchorElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLAnchorElementConstructorTable = { 1, 0, JSHTMLAnchorElementConstructorTableValues, 0 };
const ClassInfo JSHTMLAnchorElementConstructor::s_info = { "HTMLAnchorElementConstructor", &Base::s_info, &JSHTMLAnchorElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLAnchorElementConstructor) };

JSHTMLAnchorElementConstructor::JSHTMLAnchorElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLAnchorElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLAnchorElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLAnchorElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLAnchorElementConstructor, JSDOMWrapper>(exec, JSHTMLAnchorElementConstructorTable, jsCast<JSHTMLAnchorElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLAnchorElementPrototypeTableValues[] =
{
    { "toString", DontDelete | DontEnum | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHTMLAnchorElementPrototypeFunctionToString), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLAnchorElementPrototypeTable = { 2, 1, JSHTMLAnchorElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLAnchorElementPrototype::s_info = { "HTMLAnchorElementPrototype", &Base::s_info, &JSHTMLAnchorElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLAnchorElementPrototype) };

JSObject* JSHTMLAnchorElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLAnchorElement>(vm, globalObject);
}

bool JSHTMLAnchorElementPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLAnchorElementPrototype* thisObject = jsCast<JSHTMLAnchorElementPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSHTMLAnchorElementPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSHTMLAnchorElement::s_info = { "HTMLAnchorElement", &Base::s_info, &JSHTMLAnchorElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLAnchorElement) };

JSHTMLAnchorElement::JSHTMLAnchorElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLAnchorElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLAnchorElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSHTMLAnchorElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLAnchorElementPrototype::create(vm, globalObject, JSHTMLAnchorElementPrototype::createStructure(vm, globalObject, JSHTMLElementPrototype::self(vm, globalObject)));
}

bool JSHTMLAnchorElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLAnchorElement* thisObject = jsCast<JSHTMLAnchorElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSHTMLAnchorElement, Base>(exec, JSHTMLAnchorElementTable, thisObject, propertyName, slot);
}

JSValue jsHTMLAnchorElementCharset(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::charsetAttr));
    return result;
}


JSValue jsHTMLAnchorElementCoords(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::coordsAttr));
    return result;
}


#if ENABLE(DOWNLOAD_ATTRIBUTE)
JSValue jsHTMLAnchorElementDownload(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::downloadAttr));
    return result;
}

#endif

JSValue jsHTMLAnchorElementHref(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.getURLAttribute(WebCore::HTMLNames::hrefAttr));
    return result;
}


JSValue jsHTMLAnchorElementHreflang(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::hreflangAttr));
    return result;
}


JSValue jsHTMLAnchorElementName(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.getNameAttribute());
    return result;
}


JSValue jsHTMLAnchorElementPing(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::pingAttr));
    return result;
}


JSValue jsHTMLAnchorElementRel(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::relAttr));
    return result;
}


JSValue jsHTMLAnchorElementRev(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::revAttr));
    return result;
}


JSValue jsHTMLAnchorElementShape(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::shapeAttr));
    return result;
}


JSValue jsHTMLAnchorElementTarget(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::targetAttr));
    return result;
}


JSValue jsHTMLAnchorElementType(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::typeAttr));
    return result;
}


JSValue jsHTMLAnchorElementHash(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.hash());
    return result;
}


JSValue jsHTMLAnchorElementHost(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.host());
    return result;
}


JSValue jsHTMLAnchorElementHostname(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.hostname());
    return result;
}


JSValue jsHTMLAnchorElementPathname(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.pathname());
    return result;
}


JSValue jsHTMLAnchorElementPort(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.port());
    return result;
}


JSValue jsHTMLAnchorElementProtocol(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.protocol());
    return result;
}


JSValue jsHTMLAnchorElementSearch(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.search());
    return result;
}


JSValue jsHTMLAnchorElementOrigin(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.origin());
    return result;
}


JSValue jsHTMLAnchorElementText(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    HTMLAnchorElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.text());
    return result;
}


JSValue jsHTMLAnchorElementConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSHTMLAnchorElement* domObject = jsCast<JSHTMLAnchorElement*>(asObject(slotBase));
    return JSHTMLAnchorElement::getConstructor(exec->vm(), domObject->globalObject());
}

void JSHTMLAnchorElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLAnchorElement* thisObject = jsCast<JSHTMLAnchorElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSHTMLAnchorElement, Base>(exec, propertyName, value, JSHTMLAnchorElementTable, thisObject, slot);
}

void setJSHTMLAnchorElementCharset(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::charsetAttr, nativeValue);
}


void setJSHTMLAnchorElementCoords(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::coordsAttr, nativeValue);
}


#if ENABLE(DOWNLOAD_ATTRIBUTE)
void setJSHTMLAnchorElementDownload(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::downloadAttr, nativeValue);
}

#endif

void setJSHTMLAnchorElementHref(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::hrefAttr, nativeValue);
}


void setJSHTMLAnchorElementHreflang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::hreflangAttr, nativeValue);
}


void setJSHTMLAnchorElementName(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::nameAttr, nativeValue);
}


void setJSHTMLAnchorElementPing(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::pingAttr, nativeValue);
}


void setJSHTMLAnchorElementRel(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::relAttr, nativeValue);
}


void setJSHTMLAnchorElementRev(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::revAttr, nativeValue);
}


void setJSHTMLAnchorElementShape(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::shapeAttr, nativeValue);
}


void setJSHTMLAnchorElementTarget(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::targetAttr, nativeValue);
}


void setJSHTMLAnchorElementType(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::typeAttr, nativeValue);
}


void setJSHTMLAnchorElementHash(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setHash(nativeValue);
}


void setJSHTMLAnchorElementHost(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setHost(nativeValue);
}


void setJSHTMLAnchorElementHostname(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setHostname(nativeValue);
}


void setJSHTMLAnchorElementPathname(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setPathname(nativeValue);
}


void setJSHTMLAnchorElementPort(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setPort(nativeValue);
}


void setJSHTMLAnchorElementProtocol(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setProtocol(nativeValue);
}


void setJSHTMLAnchorElementSearch(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(thisObject);
    HTMLAnchorElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setSearch(nativeValue);
}


JSValue JSHTMLAnchorElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLAnchorElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHTMLAnchorElementPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSHTMLAnchorElement::info()))
        return throwVMTypeError(exec);
    JSHTMLAnchorElement* castedThis = jsCast<JSHTMLAnchorElement*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHTMLAnchorElement::info());
    HTMLAnchorElement& impl = castedThis->impl();

    JSC::JSValue result = jsStringWithCache(exec, impl.toString());
    return JSValue::encode(result);
}


}