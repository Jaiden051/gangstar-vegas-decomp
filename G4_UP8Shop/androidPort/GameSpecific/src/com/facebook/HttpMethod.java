// Decompiled from classes.dex (SourceFile: HttpMethod.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

public final class HttpMethod extends com.gameloft.android.DecompRT.EnumBase<HttpMethod> {
    // Fields
    private static final com.facebook.HttpMethod[] $VALUES;
    public static final com.facebook.HttpMethod DELETE;
    public static final com.facebook.HttpMethod GET;
    public static final com.facebook.HttpMethod POST;

    // Methods
    static
    {
      com.facebook.HttpMethod[] v0;
      GET = new com.facebook.HttpMethod("GET", 0);
      POST = new com.facebook.HttpMethod("POST", 1);
      DELETE = new com.facebook.HttpMethod("DELETE", 2);
      v0 = new com.facebook.HttpMethod[3];
      v0[0] = GET;
      v0[1] = POST;
      v0[2] = DELETE;
      $VALUES = (com.facebook.HttpMethod[])v0;
    }

    private HttpMethod(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.facebook.HttpMethod valueOf(String p0)
    {
      return (com.facebook.HttpMethod)com.gameloft.android.DecompRT.EnumBase.valueOf(com.facebook.HttpMethod.class, p0);
    }

    public static com.facebook.HttpMethod[] values()
    {
      return (com.facebook.HttpMethod[])$VALUES.clone();
    }

}
