// Decompiled from classes.dex (SourceFile: AccessTokenSource.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

public final class AccessTokenSource extends com.gameloft.android.DecompRT.EnumBase<AccessTokenSource> {
    // Fields
    private static final com.facebook.AccessTokenSource[] $VALUES;
    public static final com.facebook.AccessTokenSource CLIENT_TOKEN;
    public static final com.facebook.AccessTokenSource FACEBOOK_APPLICATION_NATIVE;
    public static final com.facebook.AccessTokenSource FACEBOOK_APPLICATION_SERVICE;
    public static final com.facebook.AccessTokenSource FACEBOOK_APPLICATION_WEB;
    public static final com.facebook.AccessTokenSource NONE;
    public static final com.facebook.AccessTokenSource TEST_USER;
    public static final com.facebook.AccessTokenSource WEB_VIEW;
    private final boolean canExtendToken;

    // Methods
    static
    {
      com.facebook.AccessTokenSource[] v0;
      NONE = new com.facebook.AccessTokenSource("NONE", 0, false);
      FACEBOOK_APPLICATION_WEB = new com.facebook.AccessTokenSource("FACEBOOK_APPLICATION_WEB", 1, true);
      FACEBOOK_APPLICATION_NATIVE = new com.facebook.AccessTokenSource("FACEBOOK_APPLICATION_NATIVE", 2, true);
      FACEBOOK_APPLICATION_SERVICE = new com.facebook.AccessTokenSource("FACEBOOK_APPLICATION_SERVICE", 3, true);
      WEB_VIEW = new com.facebook.AccessTokenSource("WEB_VIEW", 4, false);
      TEST_USER = new com.facebook.AccessTokenSource("TEST_USER", 5, true);
      CLIENT_TOKEN = new com.facebook.AccessTokenSource("CLIENT_TOKEN", 6, true);
      v0 = new com.facebook.AccessTokenSource[7];
      v0[0] = NONE;
      v0[1] = FACEBOOK_APPLICATION_WEB;
      v0[2] = FACEBOOK_APPLICATION_NATIVE;
      v0[3] = FACEBOOK_APPLICATION_SERVICE;
      v0[4] = WEB_VIEW;
      v0[5] = TEST_USER;
      v0[6] = CLIENT_TOKEN;
      $VALUES = (com.facebook.AccessTokenSource[])v0;
    }

    private AccessTokenSource(String p0, int p1, boolean p2)
    {
      super(p0, p1);
      this.canExtendToken = p2;
    }

    public static com.facebook.AccessTokenSource valueOf(String p0)
    {
      return (com.facebook.AccessTokenSource)com.gameloft.android.DecompRT.EnumBase.valueOf(com.facebook.AccessTokenSource.class, p0);
    }

    public static com.facebook.AccessTokenSource[] values()
    {
      return (com.facebook.AccessTokenSource[])$VALUES.clone();
    }

    final boolean canExtendToken()
    {
      return this.canExtendToken;
    }

}
