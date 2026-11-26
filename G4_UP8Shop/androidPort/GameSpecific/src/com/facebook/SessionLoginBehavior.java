// Decompiled from classes.dex (SourceFile: SessionLoginBehavior.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

public final class SessionLoginBehavior extends com.gameloft.android.DecompRT.EnumBase<SessionLoginBehavior> {
    // Fields
    private static final com.facebook.SessionLoginBehavior[] $VALUES;
    public static final com.facebook.SessionLoginBehavior SSO_ONLY;
    public static final com.facebook.SessionLoginBehavior SSO_WITH_FALLBACK;
    public static final com.facebook.SessionLoginBehavior SUPPRESS_SSO;
    private final boolean allowsKatanaAuth;
    private final boolean allowsWebViewAuth;

    // Methods
    static
    {
      com.facebook.SessionLoginBehavior[] v0;
      SSO_WITH_FALLBACK = new com.facebook.SessionLoginBehavior("SSO_WITH_FALLBACK", 0, true, true);
      SSO_ONLY = new com.facebook.SessionLoginBehavior("SSO_ONLY", 1, true, false);
      SUPPRESS_SSO = new com.facebook.SessionLoginBehavior("SUPPRESS_SSO", 2, false, true);
      v0 = new com.facebook.SessionLoginBehavior[3];
      v0[0] = SSO_WITH_FALLBACK;
      v0[1] = SSO_ONLY;
      v0[2] = SUPPRESS_SSO;
      $VALUES = (com.facebook.SessionLoginBehavior[])v0;
    }

    private SessionLoginBehavior(String p0, int p1, boolean p2, boolean p3)
    {
      super(p0, p1);
      this.allowsKatanaAuth = p2;
      this.allowsWebViewAuth = p3;
    }

    public static com.facebook.SessionLoginBehavior valueOf(String p0)
    {
      return (com.facebook.SessionLoginBehavior)com.gameloft.android.DecompRT.EnumBase.valueOf(com.facebook.SessionLoginBehavior.class, p0);
    }

    public static com.facebook.SessionLoginBehavior[] values()
    {
      return (com.facebook.SessionLoginBehavior[])$VALUES.clone();
    }

    final boolean allowsKatanaAuth()
    {
      return this.allowsKatanaAuth;
    }

    final boolean allowsWebViewAuth()
    {
      return this.allowsWebViewAuth;
    }

}
