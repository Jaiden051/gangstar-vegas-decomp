// Decompiled from classes.dex (SourceFile: LikeBoxCountView$LikeBoxCountViewCaretPosition.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

public final class LikeBoxCountView$LikeBoxCountViewCaretPosition extends com.gameloft.android.DecompRT.EnumBase<LikeBoxCountView$LikeBoxCountViewCaretPosition> {
    // Fields
    private static final com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition[] $VALUES;
    public static final com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition BOTTOM;
    public static final com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition LEFT;
    public static final com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition RIGHT;
    public static final com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition TOP;

    // Methods
    static
    {
      com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition[] v0;
      LEFT = new com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition("LEFT", 0);
      TOP = new com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition("TOP", 1);
      RIGHT = new com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition("RIGHT", 2);
      BOTTOM = new com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition("BOTTOM", 3);
      v0 = new com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition[4];
      v0[0] = LEFT;
      v0[1] = TOP;
      v0[2] = RIGHT;
      v0[3] = BOTTOM;
      $VALUES = (com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition[])v0;
    }

    private LikeBoxCountView$LikeBoxCountViewCaretPosition(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition valueOf(
            String p0)
    {
      return (com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                                     com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition.class,
                                                                                     p0);
    }

    public static com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition[] values()
    {
      return (com.facebook.internal.LikeBoxCountView$LikeBoxCountViewCaretPosition[])$VALUES.clone();
    }

}
