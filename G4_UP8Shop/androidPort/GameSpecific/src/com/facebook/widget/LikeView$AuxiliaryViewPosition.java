// Decompiled from classes.dex (SourceFile: LikeView$AuxiliaryViewPosition.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public final class LikeView$AuxiliaryViewPosition extends com.gameloft.android.DecompRT.EnumBase<LikeView$AuxiliaryViewPosition> {
    // Fields
    private static final com.facebook.widget.LikeView$AuxiliaryViewPosition[] $VALUES;
    public static final com.facebook.widget.LikeView$AuxiliaryViewPosition BOTTOM;
    static com.facebook.widget.LikeView$AuxiliaryViewPosition DEFAULT;
    public static final com.facebook.widget.LikeView$AuxiliaryViewPosition INLINE;
    public static final com.facebook.widget.LikeView$AuxiliaryViewPosition TOP;
    private int intValue;
    private java.lang.String stringValue;

    // Methods
    static
    {
      com.facebook.widget.LikeView$AuxiliaryViewPosition[] v0;
      BOTTOM = new com.facebook.widget.LikeView$AuxiliaryViewPosition("BOTTOM", 0, "bottom", 0);
      INLINE = new com.facebook.widget.LikeView$AuxiliaryViewPosition("INLINE", 1, "inline", 1);
      TOP = new com.facebook.widget.LikeView$AuxiliaryViewPosition("TOP", 2, "top", 2);
      v0 = new com.facebook.widget.LikeView$AuxiliaryViewPosition[3];
      v0[0] = BOTTOM;
      v0[1] = INLINE;
      v0[2] = TOP;
      $VALUES = (com.facebook.widget.LikeView$AuxiliaryViewPosition[])v0;
      DEFAULT = BOTTOM;
    }

    private LikeView$AuxiliaryViewPosition(String p0, int p1, String p2, int p3)
    {
      super(p0, p1);
      this.stringValue = p2;
      this.intValue = p3;
    }

    /* synthetic */ static int access$100(
            com.facebook.widget.LikeView$AuxiliaryViewPosition p0)
    {
      return p0.getValue();
    }

    static com.facebook.widget.LikeView$AuxiliaryViewPosition fromInt(int p0)
    {
      com.facebook.widget.LikeView$AuxiliaryViewPosition[] v1;
      int v2;
      int i;
      com.facebook.widget.LikeView$AuxiliaryViewPosition v4;
      v1 = values();
      v2 = v1.length;
      for ( i = 0; i < v2; ++i )
      {
        v4 = v1[i];
        if ( v4.getValue() == p0 )
          return v4;
      }
      return null;
    }

    private int getValue()
    {
      return this.intValue;
    }

    public static com.facebook.widget.LikeView$AuxiliaryViewPosition valueOf(String p0)
    {
      return (com.facebook.widget.LikeView$AuxiliaryViewPosition)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                   com.facebook.widget.LikeView$AuxiliaryViewPosition.class,
                                                                   p0);
    }

    public static com.facebook.widget.LikeView$AuxiliaryViewPosition[] values()
    {
      return (com.facebook.widget.LikeView$AuxiliaryViewPosition[])$VALUES.clone();
    }

    public final String toString()
    {
      return this.stringValue;
    }

}
