// Decompiled from classes.dex (SourceFile: SessionAuthorizationType.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

public final class SessionAuthorizationType extends com.gameloft.android.DecompRT.EnumBase<SessionAuthorizationType> {
    // Fields
    private static final com.facebook.internal.SessionAuthorizationType[] $VALUES;
    public static final com.facebook.internal.SessionAuthorizationType PUBLISH;
    public static final com.facebook.internal.SessionAuthorizationType READ;

    // Methods
    static
    {
      com.facebook.internal.SessionAuthorizationType[] v0;
      READ = new com.facebook.internal.SessionAuthorizationType("READ", 0);
      PUBLISH = new com.facebook.internal.SessionAuthorizationType("PUBLISH", 1);
      v0 = new com.facebook.internal.SessionAuthorizationType[2];
      v0[0] = READ;
      v0[1] = PUBLISH;
      $VALUES = (com.facebook.internal.SessionAuthorizationType[])v0;
    }

    private SessionAuthorizationType(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.facebook.internal.SessionAuthorizationType valueOf(String p0)
    {
      return (com.facebook.internal.SessionAuthorizationType)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                               com.facebook.internal.SessionAuthorizationType.class,
                                                               p0);
    }

    public static com.facebook.internal.SessionAuthorizationType[] values()
    {
      return (com.facebook.internal.SessionAuthorizationType[])$VALUES.clone();
    }

}
