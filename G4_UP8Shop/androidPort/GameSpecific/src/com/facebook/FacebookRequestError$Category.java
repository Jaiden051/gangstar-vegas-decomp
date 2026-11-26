// Decompiled from classes.dex (SourceFile: FacebookRequestError$Category.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

public final class FacebookRequestError$Category extends com.gameloft.android.DecompRT.EnumBase<FacebookRequestError$Category> {
    // Fields
    private static final com.facebook.FacebookRequestError$Category[] $VALUES;
    public static final com.facebook.FacebookRequestError$Category AUTHENTICATION_REOPEN_SESSION;
    public static final com.facebook.FacebookRequestError$Category AUTHENTICATION_RETRY;
    public static final com.facebook.FacebookRequestError$Category BAD_REQUEST;
    public static final com.facebook.FacebookRequestError$Category CLIENT;
    public static final com.facebook.FacebookRequestError$Category OTHER;
    public static final com.facebook.FacebookRequestError$Category PERMISSION;
    public static final com.facebook.FacebookRequestError$Category SERVER;
    public static final com.facebook.FacebookRequestError$Category THROTTLING;

    // Methods
    static
    {
      com.facebook.FacebookRequestError$Category[] v0;
      AUTHENTICATION_RETRY = new com.facebook.FacebookRequestError$Category("AUTHENTICATION_RETRY", 0);
      AUTHENTICATION_REOPEN_SESSION = new com.facebook.FacebookRequestError$Category("AUTHENTICATION_REOPEN_SESSION", 1);
      PERMISSION = new com.facebook.FacebookRequestError$Category("PERMISSION", 2);
      SERVER = new com.facebook.FacebookRequestError$Category("SERVER", 3);
      THROTTLING = new com.facebook.FacebookRequestError$Category("THROTTLING", 4);
      OTHER = new com.facebook.FacebookRequestError$Category("OTHER", 5);
      BAD_REQUEST = new com.facebook.FacebookRequestError$Category("BAD_REQUEST", 6);
      CLIENT = new com.facebook.FacebookRequestError$Category("CLIENT", 7);
      v0 = new com.facebook.FacebookRequestError$Category[8];
      v0[0] = AUTHENTICATION_RETRY;
      v0[1] = AUTHENTICATION_REOPEN_SESSION;
      v0[2] = PERMISSION;
      v0[3] = SERVER;
      v0[4] = THROTTLING;
      v0[5] = OTHER;
      v0[6] = BAD_REQUEST;
      v0[7] = CLIENT;
      $VALUES = (com.facebook.FacebookRequestError$Category[])v0;
    }

    private FacebookRequestError$Category(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.facebook.FacebookRequestError$Category valueOf(String p0)
    {
      return (com.facebook.FacebookRequestError$Category)com.gameloft.android.DecompRT.EnumBase.valueOf(com.facebook.FacebookRequestError$Category.class, p0);
    }

    public static com.facebook.FacebookRequestError$Category[] values()
    {
      return (com.facebook.FacebookRequestError$Category[])$VALUES.clone();
    }

}
