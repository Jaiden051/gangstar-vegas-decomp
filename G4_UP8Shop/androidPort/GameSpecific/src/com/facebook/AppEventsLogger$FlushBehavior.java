// Decompiled from classes.dex (SourceFile: AppEventsLogger$FlushBehavior.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

public final class AppEventsLogger$FlushBehavior extends com.gameloft.android.DecompRT.EnumBase<AppEventsLogger$FlushBehavior> {
    // Fields
    private static final com.facebook.AppEventsLogger$FlushBehavior[] $VALUES;
    public static final com.facebook.AppEventsLogger$FlushBehavior AUTO;
    public static final com.facebook.AppEventsLogger$FlushBehavior EXPLICIT_ONLY;

    // Methods
    static
    {
      com.facebook.AppEventsLogger$FlushBehavior[] v0;
      AUTO = new com.facebook.AppEventsLogger$FlushBehavior("AUTO", 0);
      EXPLICIT_ONLY = new com.facebook.AppEventsLogger$FlushBehavior("EXPLICIT_ONLY", 1);
      v0 = new com.facebook.AppEventsLogger$FlushBehavior[2];
      v0[0] = AUTO;
      v0[1] = EXPLICIT_ONLY;
      $VALUES = (com.facebook.AppEventsLogger$FlushBehavior[])v0;
    }

    private AppEventsLogger$FlushBehavior(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.facebook.AppEventsLogger$FlushBehavior valueOf(String p0)
    {
      return (com.facebook.AppEventsLogger$FlushBehavior)com.gameloft.android.DecompRT.EnumBase.valueOf(com.facebook.AppEventsLogger$FlushBehavior.class, p0);
    }

    public static com.facebook.AppEventsLogger$FlushBehavior[] values()
    {
      return (com.facebook.AppEventsLogger$FlushBehavior[])$VALUES.clone();
    }

}
