// Decompiled from classes.dex (SourceFile: TRACKING_EVENTS_TYPE.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.model;

public final class TRACKING_EVENTS_TYPE extends com.gameloft.android.DecompRT.EnumBase<TRACKING_EVENTS_TYPE> {
    // Fields
    private static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE[] $VALUES;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE acceptInvitation;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE close;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE collapse;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE complete;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE creativeView;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE expand;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE firstQuartile;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE fullscreen;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE midpoint;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE mute;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE pause;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE resume;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE rewind;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE start;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE thirdQuartile;
    public static final com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE unmute;

    // Methods
    static
    {
      com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE[] v0;
      creativeView = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("creativeView", 0);
      start = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("start", 1);
      midpoint = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("midpoint", 2);
      firstQuartile = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("firstQuartile", 3);
      thirdQuartile = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("thirdQuartile", 4);
      complete = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("complete", 5);
      mute = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("mute", 6);
      unmute = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("unmute", 7);
      pause = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("pause", 8);
      rewind = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("rewind", 9);
      resume = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("resume", 10);
      fullscreen = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("fullscreen", 11);
      expand = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("expand", 12);
      collapse = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("collapse", 13);
      acceptInvitation = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("acceptInvitation", 14);
      close = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE("close", 15);
      v0 = new com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE[16];
      v0[0] = creativeView;
      v0[1] = start;
      v0[2] = midpoint;
      v0[3] = firstQuartile;
      v0[4] = thirdQuartile;
      v0[5] = complete;
      v0[6] = mute;
      v0[7] = unmute;
      v0[8] = pause;
      v0[9] = rewind;
      v0[10] = resume;
      v0[11] = fullscreen;
      v0[12] = expand;
      v0[13] = collapse;
      v0[14] = acceptInvitation;
      v0[15] = close;
      $VALUES = (com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE[])v0;
    }

    private TRACKING_EVENTS_TYPE(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE valueOf(String p0)
    {
      return (com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                   com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE.class,
                                                                   p0);
    }

    public static com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE[] values()
    {
      return (com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE[])$VALUES.clone();
    }

}
