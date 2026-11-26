// Decompiled from classes.dex (SourceFile: Session$SerializationProxyV1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class Session$SerializationProxyV1 implements java.io.Serializable {
    // Fields
    private static long serialVersionUID;
    private final java.lang.String applicationId;
    private final java.util.Date lastAttemptedTokenExtendDate;
    private final com.facebook.Session$AuthorizationRequest pendingAuthorizationRequest;
    private final boolean shouldAutoPublish;
    private final com.facebook.SessionState state;
    private final com.facebook.AccessToken tokenInfo;

    // Methods
    Session$SerializationProxyV1(
            String p0,
            com.facebook.SessionState p1,
            com.facebook.AccessToken p2,
            java.util.Date p3,
            boolean p4,
            com.facebook.Session$AuthorizationRequest p5)
    {
      super();
      this.applicationId = p0;
      this.state = p1;
      this.tokenInfo = p2;
      this.lastAttemptedTokenExtendDate = p3;
      this.shouldAutoPublish = p4;
      this.pendingAuthorizationRequest = p5;
    }

    private Object readResolve()
    {
      return new com.facebook.Session(this.applicationId, this.state, this.tokenInfo, this.lastAttemptedTokenExtendDate, this.shouldAutoPublish, this.pendingAuthorizationRequest, null);
    }

}
