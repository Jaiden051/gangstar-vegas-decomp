// Decompiled from classes.dex (SourceFile: SessionDefaultAudience.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

public final class SessionDefaultAudience extends com.gameloft.android.DecompRT.EnumBase<SessionDefaultAudience> {
    // Fields
    private static final com.facebook.SessionDefaultAudience[] $VALUES;
    public static final com.facebook.SessionDefaultAudience EVERYONE;
    public static final com.facebook.SessionDefaultAudience FRIENDS;
    public static final com.facebook.SessionDefaultAudience NONE;
    public static final com.facebook.SessionDefaultAudience ONLY_ME;
    private final java.lang.String nativeProtocolAudience;

    // Methods
    static
    {
      com.facebook.SessionDefaultAudience[] v0;
      NONE = new com.facebook.SessionDefaultAudience("NONE", 0, null);
      ONLY_ME = new com.facebook.SessionDefaultAudience("ONLY_ME", 1, "only_me");
      FRIENDS = new com.facebook.SessionDefaultAudience("FRIENDS", 2, "friends");
      EVERYONE = new com.facebook.SessionDefaultAudience("EVERYONE", 3, "everyone");
      v0 = new com.facebook.SessionDefaultAudience[4];
      v0[0] = NONE;
      v0[1] = ONLY_ME;
      v0[2] = FRIENDS;
      v0[3] = EVERYONE;
      $VALUES = (com.facebook.SessionDefaultAudience[])v0;
    }

    private SessionDefaultAudience(String p0, int p1, String p2)
    {
      super(p0, p1);
      this.nativeProtocolAudience = p2;
    }

    public static com.facebook.SessionDefaultAudience valueOf(String p0)
    {
      return (com.facebook.SessionDefaultAudience)com.gameloft.android.DecompRT.EnumBase.valueOf(com.facebook.SessionDefaultAudience.class, p0);
    }

    public static com.facebook.SessionDefaultAudience[] values()
    {
      return (com.facebook.SessionDefaultAudience[])$VALUES.clone();
    }

    public final String getNativeProtocolAudience()
    {
      return this.nativeProtocolAudience;
    }

}
