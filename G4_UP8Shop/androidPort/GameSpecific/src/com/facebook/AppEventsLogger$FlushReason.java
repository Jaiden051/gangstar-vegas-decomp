// Decompiled from classes.dex (SourceFile: AppEventsLogger$FlushReason.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class AppEventsLogger$FlushReason extends com.gameloft.android.DecompRT.EnumBase<AppEventsLogger$FlushReason> {
    // Fields
    private static final com.facebook.AppEventsLogger$FlushReason[] $VALUES;
    public static final com.facebook.AppEventsLogger$FlushReason EAGER_FLUSHING_EVENT;
    public static final com.facebook.AppEventsLogger$FlushReason EVENT_THRESHOLD;
    public static final com.facebook.AppEventsLogger$FlushReason EXPLICIT;
    public static final com.facebook.AppEventsLogger$FlushReason PERSISTED_EVENTS;
    public static final com.facebook.AppEventsLogger$FlushReason SESSION_CHANGE;
    public static final com.facebook.AppEventsLogger$FlushReason TIMER;

    // Methods
    static
    {
      com.facebook.AppEventsLogger$FlushReason[] v0;
      EXPLICIT = new com.facebook.AppEventsLogger$FlushReason("EXPLICIT", 0);
      TIMER = new com.facebook.AppEventsLogger$FlushReason("TIMER", 1);
      SESSION_CHANGE = new com.facebook.AppEventsLogger$FlushReason("SESSION_CHANGE", 2);
      PERSISTED_EVENTS = new com.facebook.AppEventsLogger$FlushReason("PERSISTED_EVENTS", 3);
      EVENT_THRESHOLD = new com.facebook.AppEventsLogger$FlushReason("EVENT_THRESHOLD", 4);
      EAGER_FLUSHING_EVENT = new com.facebook.AppEventsLogger$FlushReason("EAGER_FLUSHING_EVENT", 5);
      v0 = new com.facebook.AppEventsLogger$FlushReason[6];
      v0[0] = EXPLICIT;
      v0[1] = TIMER;
      v0[2] = SESSION_CHANGE;
      v0[3] = PERSISTED_EVENTS;
      v0[4] = EVENT_THRESHOLD;
      v0[5] = EAGER_FLUSHING_EVENT;
      $VALUES = (com.facebook.AppEventsLogger$FlushReason[])v0;
    }

    private AppEventsLogger$FlushReason(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.facebook.AppEventsLogger$FlushReason valueOf(String p0)
    {
      return (com.facebook.AppEventsLogger$FlushReason)com.gameloft.android.DecompRT.EnumBase.valueOf(com.facebook.AppEventsLogger$FlushReason.class, p0);
    }

    public static com.facebook.AppEventsLogger$FlushReason[] values()
    {
      return (com.facebook.AppEventsLogger$FlushReason[])$VALUES.clone();
    }

}
