// Decompiled from classes.dex (SourceFile: LikeView$HorizontalAlignment.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public final class LikeView$HorizontalAlignment extends com.gameloft.android.DecompRT.EnumBase<LikeView$HorizontalAlignment> {
    // Fields
    private static final com.facebook.widget.LikeView$HorizontalAlignment[] $VALUES;
    public static final com.facebook.widget.LikeView$HorizontalAlignment CENTER;
    static com.facebook.widget.LikeView$HorizontalAlignment DEFAULT;
    public static final com.facebook.widget.LikeView$HorizontalAlignment LEFT;
    public static final com.facebook.widget.LikeView$HorizontalAlignment RIGHT;
    private int intValue;
    private java.lang.String stringValue;

    // Methods
    static
    {
      com.facebook.widget.LikeView$HorizontalAlignment[] v0;
      CENTER = new com.facebook.widget.LikeView$HorizontalAlignment("CENTER", 0, "center", 0);
      LEFT = new com.facebook.widget.LikeView$HorizontalAlignment("LEFT", 1, "left", 1);
      RIGHT = new com.facebook.widget.LikeView$HorizontalAlignment("RIGHT", 2, "right", 2);
      v0 = new com.facebook.widget.LikeView$HorizontalAlignment[3];
      v0[0] = CENTER;
      v0[1] = LEFT;
      v0[2] = RIGHT;
      $VALUES = (com.facebook.widget.LikeView$HorizontalAlignment[])v0;
      DEFAULT = CENTER;
    }

    private LikeView$HorizontalAlignment(String p0, int p1, String p2, int p3)
    {
      super(p0, p1);
      this.stringValue = p2;
      this.intValue = p3;
    }

    /* synthetic */ static int access$200(com.facebook.widget.LikeView$HorizontalAlignment p0)
    {
      return p0.getValue();
    }

    static com.facebook.widget.LikeView$HorizontalAlignment fromInt(int p0)
    {
      com.facebook.widget.LikeView$HorizontalAlignment[] v1;
      int v2;
      int i;
      com.facebook.widget.LikeView$HorizontalAlignment v4;
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

    public static com.facebook.widget.LikeView$HorizontalAlignment valueOf(String p0)
    {
      return (com.facebook.widget.LikeView$HorizontalAlignment)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                 com.facebook.widget.LikeView$HorizontalAlignment.class,
                                                                 p0);
    }

    public static com.facebook.widget.LikeView$HorizontalAlignment[] values()
    {
      return (com.facebook.widget.LikeView$HorizontalAlignment[])$VALUES.clone();
    }

    public final String toString()
    {
      return this.stringValue;
    }

}
