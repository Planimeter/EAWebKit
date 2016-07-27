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

#ifndef JSMediaStreamTrack_h
#define JSMediaStreamTrack_h

#if ENABLE(MEDIA_STREAM)

#include "JSDOMBinding.h"
#include "MediaStreamTrack.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSMediaStreamTrack : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSMediaStreamTrack* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<MediaStreamTrack> impl)
    {
        JSMediaStreamTrack* ptr = new (NotNull, JSC::allocateCell<JSMediaStreamTrack>(globalObject->vm().heap)) JSMediaStreamTrack(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSMediaStreamTrack();
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, JSC::JSGlobalObject*);
    static void visitChildren(JSCell*, JSC::SlotVisitor&);

    MediaStreamTrack& impl() const { return *m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    MediaStreamTrack* m_impl;
protected:
    JSMediaStreamTrack(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<MediaStreamTrack>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSMediaStreamTrackOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, MediaStreamTrack*)
{
    DEFINE_STATIC_LOCAL(JSMediaStreamTrackOwner, jsMediaStreamTrackOwner, ());
    return &jsMediaStreamTrackOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, MediaStreamTrack*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, MediaStreamTrack*);
MediaStreamTrack* toMediaStreamTrack(JSC::JSValue);

class JSMediaStreamTrackPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSMediaStreamTrackPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSMediaStreamTrackPrototype* ptr = new (NotNull, JSC::allocateCell<JSMediaStreamTrackPrototype>(vm.heap)) JSMediaStreamTrackPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSMediaStreamTrackPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSMediaStreamTrackConstructor : public DOMConstructorObject {
private:
    JSMediaStreamTrackConstructor(JSC::Structure*, JSDOMGlobalObject*);
    void finishCreation(JSC::VM&, JSDOMGlobalObject*);

public:
    typedef DOMConstructorObject Base;
    static JSMediaStreamTrackConstructor* create(JSC::VM& vm, JSC::Structure* structure, JSDOMGlobalObject* globalObject)
    {
        JSMediaStreamTrackConstructor* ptr = new (NotNull, JSC::allocateCell<JSMediaStreamTrackConstructor>(vm.heap)) JSMediaStreamTrackConstructor(structure, globalObject);
        ptr->finishCreation(vm, globalObject);
        return ptr;
    }

    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsMediaStreamTrackConstructorFunctionGetSources(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaStreamTrackPrototypeFunctionConstraints(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaStreamTrackPrototypeFunctionStates(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaStreamTrackPrototypeFunctionCapabilities(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaStreamTrackPrototypeFunctionApplyConstraints(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaStreamTrackPrototypeFunctionClone(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaStreamTrackPrototypeFunctionStop(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaStreamTrackPrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaStreamTrackPrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsMediaStreamTrackPrototypeFunctionDispatchEvent(JSC::ExecState*);
// Attributes

JSC::JSValue jsMediaStreamTrackKind(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaStreamTrackId(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaStreamTrackLabel(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaStreamTrackEnabled(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSMediaStreamTrackEnabled(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsMediaStreamTrackMuted(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaStreamTrackOnmute(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSMediaStreamTrackOnmute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsMediaStreamTrackOnunmute(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSMediaStreamTrackOnunmute(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsMediaStreamTrackReadonly(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaStreamTrackRemote(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaStreamTrackReadyState(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
JSC::JSValue jsMediaStreamTrackOnstarted(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSMediaStreamTrackOnstarted(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsMediaStreamTrackOnended(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSMediaStreamTrackOnended(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsMediaStreamTrackOnoverconstrained(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);
void setJSMediaStreamTrackOnoverconstrained(JSC::ExecState*, JSC::JSObject*, JSC::JSValue);
JSC::JSValue jsMediaStreamTrackConstructor(JSC::ExecState*, JSC::JSValue, JSC::PropertyName);

} // namespace WebCore

#endif // ENABLE(MEDIA_STREAM)

#endif