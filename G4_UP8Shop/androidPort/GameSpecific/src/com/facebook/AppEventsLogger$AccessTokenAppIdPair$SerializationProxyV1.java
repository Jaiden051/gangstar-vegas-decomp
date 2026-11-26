// Decompiled from classes.dex (SourceFile: AppEventsLogger$AccessTokenAppIdPair$SerializationProxyV1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class AppEventsLogger$AccessTokenAppIdPair$SerializationProxyV1 implements java.io.Serializable {
    // Fields
    private static long serialVersionUID;
    private final java.lang.String accessToken;
    private final java.lang.String appId;

    // Methods
    private AppEventsLogger$AccessTokenAppIdPair$SerializationProxyV1(String p0, String p1)
    {
      super();
      this.accessToken = p0;
      this.appId = p1;
    }

    /* synthetic */ AppEventsLogger$AccessTokenAppIdPair$SerializationProxyV1(String p0, String p1, com.facebook.AppEventsLogger$1 p2)
    {
      this(p0, p1);
    }

    private Object readResolve()
    {
      return new com.facebook.AppEventsLogger$AccessTokenAppIdPair(this.accessToken, this.appId);
    }

}
