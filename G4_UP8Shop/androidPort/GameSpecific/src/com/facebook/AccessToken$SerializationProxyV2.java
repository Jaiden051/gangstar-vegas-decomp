// Decompiled from classes.dex (SourceFile: AccessToken$SerializationProxyV2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class AccessToken$SerializationProxyV2 implements java.io.Serializable {
    // Fields
    private static long serialVersionUID;
    private final java.util.List declinedPermissions;
    private final java.util.Date expires;
    private final java.util.Date lastRefresh;
    private final java.util.List permissions;
    private final com.facebook.AccessTokenSource source;
    private final java.lang.String token;

    // Methods
    private AccessToken$SerializationProxyV2(
            String p0,
            java.util.Date p1,
            java.util.List<String> p2,
            java.util.List<String> p3,
            com.facebook.AccessTokenSource p4,
            java.util.Date p5)
    {
      super();
      this.expires = p1;
      this.permissions = p2;
      this.declinedPermissions = p3;
      this.token = p0;
      this.source = p4;
      this.lastRefresh = p5;
    }

    /* synthetic */ AccessToken$SerializationProxyV2(
            String p0,
            java.util.Date p1,
            java.util.List p2,
            java.util.List p3,
            com.facebook.AccessTokenSource p4,
            java.util.Date p5,
            com.facebook.AccessToken$1 p6)
    {
      this(p0, p1, p2, p3, p4, p5);
    }

    private Object readResolve()
    {
      return new com.facebook.AccessToken(this.token, this.expires, this.permissions, this.declinedPermissions, this.source, this.lastRefresh);
    }

}
