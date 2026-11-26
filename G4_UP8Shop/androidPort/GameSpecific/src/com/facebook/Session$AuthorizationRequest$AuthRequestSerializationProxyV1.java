// Decompiled from classes.dex (SourceFile: Session$AuthorizationRequest$AuthRequestSerializationProxyV1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class Session$AuthorizationRequest$AuthRequestSerializationProxyV1 implements java.io.Serializable {
    // Fields
    private static long serialVersionUID;
    private final java.lang.String applicationId;
    private final java.lang.String defaultAudience;
    private boolean isLegacy;
    private final com.facebook.SessionLoginBehavior loginBehavior;
    private final java.util.List permissions;
    private final int requestCode;
    private final java.lang.String validateSameFbidAsToken;

    // Methods
    private Session$AuthorizationRequest$AuthRequestSerializationProxyV1(
            com.facebook.SessionLoginBehavior p0,
            int p1,
            java.util.List<String> p2,
            String p3,
            boolean p4,
            String p5,
            String p6)
    {
      super();
      this.loginBehavior = p0;
      this.requestCode = p1;
      this.permissions = p2;
      this.defaultAudience = p3;
      this.isLegacy = p4;
      this.applicationId = p5;
      this.validateSameFbidAsToken = p6;
    }

    /* synthetic */ Session$AuthorizationRequest$AuthRequestSerializationProxyV1(
            com.facebook.SessionLoginBehavior p0,
            int p1,
            java.util.List p2,
            String p3,
            boolean p4,
            String p5,
            String p6,
            com.facebook.Session$1 p7)
    {
      this(p0, p1, p2, p3, p4, p5, p6);
    }

    private Object readResolve()
    {
      return new com.facebook.Session$AuthorizationRequest(this.loginBehavior, this.requestCode, this.permissions, this.defaultAudience, this.isLegacy, this.applicationId, this.validateSameFbidAsToken, null);
    }

}
