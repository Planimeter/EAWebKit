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
#include "JSCharacterData.h"

#include "CharacterData.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSCharacterDataTableValues[] =
{
    { "data", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCharacterDataData), (intptr_t)setJSCharacterDataData },
    { "length", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCharacterDataLength), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsCharacterDataConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSCharacterDataTable = { 9, 7, JSCharacterDataTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSCharacterDataConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSCharacterDataConstructorTable = { 1, 0, JSCharacterDataConstructorTableValues, 0 };
const ClassInfo JSCharacterDataConstructor::s_info = { "CharacterDataConstructor", &Base::s_info, &JSCharacterDataConstructorTable, 0, CREATE_METHOD_TABLE(JSCharacterDataConstructor) };

JSCharacterDataConstructor::JSCharacterDataConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSCharacterDataConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSCharacterDataPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSCharacterDataConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCharacterDataConstructor, JSDOMWrapper>(exec, JSCharacterDataConstructorTable, jsCast<JSCharacterDataConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSCharacterDataPrototypeTableValues[] =
{
    { "substringData", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsCharacterDataPrototypeFunctionSubstringData), (intptr_t)0 },
    { "appendData", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsCharacterDataPrototypeFunctionAppendData), (intptr_t)0 },
    { "insertData", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsCharacterDataPrototypeFunctionInsertData), (intptr_t)0 },
    { "deleteData", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsCharacterDataPrototypeFunctionDeleteData), (intptr_t)0 },
    { "replaceData", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsCharacterDataPrototypeFunctionReplaceData), (intptr_t)0 },
    { "remove", DontDelete | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsCharacterDataPrototypeFunctionRemove), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSCharacterDataPrototypeTable = { 16, 15, JSCharacterDataPrototypeTableValues, 0 };
const ClassInfo JSCharacterDataPrototype::s_info = { "CharacterDataPrototype", &Base::s_info, &JSCharacterDataPrototypeTable, 0, CREATE_METHOD_TABLE(JSCharacterDataPrototype) };

JSObject* JSCharacterDataPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSCharacterData>(vm, globalObject);
}

bool JSCharacterDataPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSCharacterDataPrototype* thisObject = jsCast<JSCharacterDataPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSCharacterDataPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSCharacterData::s_info = { "CharacterData", &Base::s_info, &JSCharacterDataTable, 0 , CREATE_METHOD_TABLE(JSCharacterData) };

JSCharacterData::JSCharacterData(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<CharacterData> impl)
    : JSNode(structure, globalObject, impl)
{
}

void JSCharacterData::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSCharacterData::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSCharacterDataPrototype::create(vm, globalObject, JSCharacterDataPrototype::createStructure(vm, globalObject, JSNodePrototype::self(vm, globalObject)));
}

bool JSCharacterData::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSCharacterData* thisObject = jsCast<JSCharacterData*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSCharacterData, Base>(exec, JSCharacterDataTable, thisObject, propertyName, slot);
}

JSValue jsCharacterDataData(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSCharacterData* castedThis = jsCast<JSCharacterData*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CharacterData& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.data());
    return result;
}


JSValue jsCharacterDataLength(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSCharacterData* castedThis = jsCast<JSCharacterData*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    CharacterData& impl = castedThis->impl();
    JSValue result = jsNumber(impl.length());
    return result;
}


JSValue jsCharacterDataConstructor(ExecState* exec, JSValue slotBase, PropertyName)
{
    JSCharacterData* domObject = jsCast<JSCharacterData*>(asObject(slotBase));
    return JSCharacterData::getConstructor(exec->vm(), domObject->globalObject());
}

void JSCharacterData::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSCharacterData* thisObject = jsCast<JSCharacterData*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSCharacterData, Base>(exec, propertyName, value, JSCharacterDataTable, thisObject, slot);
}

void setJSCharacterDataData(ExecState* exec, JSObject* thisObject, JSValue value)
{
    UNUSED_PARAM(exec);
    JSCharacterData* castedThis = jsCast<JSCharacterData*>(thisObject);
    CharacterData& impl = castedThis->impl();
    ExceptionCode ec = 0;
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setData(nativeValue, ec);
    setDOMException(exec, ec);
}


JSValue JSCharacterData::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSCharacterDataConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsCharacterDataPrototypeFunctionSubstringData(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSCharacterData::info()))
        return throwVMTypeError(exec);
    JSCharacterData* castedThis = jsCast<JSCharacterData*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSCharacterData::info());
    CharacterData& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int offset(toUInt32(exec, exec->argument(0), NormalConversion));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int length(toUInt32(exec, exec->argument(1), NormalConversion));
    if (length < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsStringOrNull(exec, impl.substringData(offset, length, ec));
    setDOMException(exec, ec);
    return JSValue::encode(result);
}

EncodedJSValue JSC_HOST_CALL jsCharacterDataPrototypeFunctionAppendData(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSCharacterData::info()))
        return throwVMTypeError(exec);
    JSCharacterData* castedThis = jsCast<JSCharacterData*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSCharacterData::info());
    CharacterData& impl = castedThis->impl();
    ExceptionCode ec = 0;
    const String& data(exec->argument(0).isEmpty() ? String() : exec->argument(0).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.appendData(data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsCharacterDataPrototypeFunctionInsertData(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSCharacterData::info()))
        return throwVMTypeError(exec);
    JSCharacterData* castedThis = jsCast<JSCharacterData*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSCharacterData::info());
    CharacterData& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int offset(toUInt32(exec, exec->argument(0), NormalConversion));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& data(exec->argument(1).isEmpty() ? String() : exec->argument(1).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.insertData(offset, data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsCharacterDataPrototypeFunctionDeleteData(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSCharacterData::info()))
        return throwVMTypeError(exec);
    JSCharacterData* castedThis = jsCast<JSCharacterData*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSCharacterData::info());
    CharacterData& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int offset(toUInt32(exec, exec->argument(0), NormalConversion));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int length(toUInt32(exec, exec->argument(1), NormalConversion));
    if (length < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.deleteData(offset, length, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsCharacterDataPrototypeFunctionReplaceData(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSCharacterData::info()))
        return throwVMTypeError(exec);
    JSCharacterData* castedThis = jsCast<JSCharacterData*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSCharacterData::info());
    CharacterData& impl = castedThis->impl();
    ExceptionCode ec = 0;
    int offset(toUInt32(exec, exec->argument(0), NormalConversion));
    if (offset < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    int length(toUInt32(exec, exec->argument(1), NormalConversion));
    if (length < 0) {
        setDOMException(exec, INDEX_SIZE_ERR);
        return JSValue::encode(jsUndefined());
    }
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    const String& data(exec->argument(2).isEmpty() ? String() : exec->argument(2).toString(exec)->value(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.replaceData(offset, length, data, ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsCharacterDataPrototypeFunctionRemove(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(JSCharacterData::info()))
        return throwVMTypeError(exec);
    JSCharacterData* castedThis = jsCast<JSCharacterData*>(asObject(thisValue));
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSCharacterData::info());
    CharacterData& impl = castedThis->impl();
    ExceptionCode ec = 0;
    impl.remove(ec);
    setDOMException(exec, ec);
    return JSValue::encode(jsUndefined());
}


}