// Decompiled from classes.dex (SourceFile: AccessToken$SerializationProxyV1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class AccessToken$SerializationProxyV1 implements java.io.Serializable {
    // Fields
    private static long serialVersionUID;
    private final java.util.Date expires;
    private final java.util.Date lastRefresh;
    private final java.util.List permissions;
    private final com.facebook.AccessTokenSource source;
    private final java.lang.String token;

    // Methods
    private AccessToken$SerializationProxyV1(
            String p0,
            java.util.Date p1,
            java.util.List<String> p2,
            com.facebook.AccessTokenSource p3,
            java.util.Date p4)
    {
      super();
      this.expires = p1;
      this.permissions = p2;
      this.token = p0;
      this.source = p3;
      this.lastRefresh = p4;
    }

    private Object readResolve()
    {
      return new com.facebook.AccessToken(this.token, this.expires, this.permissions, null, this.source, this.lastRefresh);
    }

}
