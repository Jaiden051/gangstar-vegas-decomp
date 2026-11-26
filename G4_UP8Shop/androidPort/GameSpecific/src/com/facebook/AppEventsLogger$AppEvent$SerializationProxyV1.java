// Decompiled from classes.dex (SourceFile: AppEventsLogger$AppEvent$SerializationProxyV1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class AppEventsLogger$AppEvent$SerializationProxyV1 implements java.io.Serializable {
    // Fields
    private static long serialVersionUID;
    private final boolean isImplicit;
    private final java.lang.String jsonString;

    // Methods
    private AppEventsLogger$AppEvent$SerializationProxyV1(String p0, boolean p1)
    {
      super();
      this.jsonString = p0;
      this.isImplicit = p1;
    }

    /* synthetic */ AppEventsLogger$AppEvent$SerializationProxyV1(String p0, boolean p1, com.facebook.AppEventsLogger$1 p2)
    {
      this(p0, p1);
    }

    private Object readResolve()
 throws org.json.JSONException {
      return new com.facebook.AppEventsLogger$AppEvent(this.jsonString, this.isImplicit, null);
    }

}
