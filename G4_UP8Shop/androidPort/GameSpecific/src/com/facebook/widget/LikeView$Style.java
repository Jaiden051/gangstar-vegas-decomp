// Decompiled from classes.dex (SourceFile: LikeView$Style.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public final class LikeView$Style extends com.gameloft.android.DecompRT.EnumBase<LikeView$Style> {
    // Fields
    private static final com.facebook.widget.LikeView$Style[] $VALUES;
    public static final com.facebook.widget.LikeView$Style BOX_COUNT;
    public static final com.facebook.widget.LikeView$Style BUTTON;
    static com.facebook.widget.LikeView$Style DEFAULT;
    public static final com.facebook.widget.LikeView$Style STANDARD;
    private int intValue;
    private java.lang.String stringValue;

    // Methods
    static
    {
      com.facebook.widget.LikeView$Style[] v0;
      STANDARD = new com.facebook.widget.LikeView$Style("STANDARD", 0, "standard", 0);
      BUTTON = new com.facebook.widget.LikeView$Style("BUTTON", 1, "button", 1);
      BOX_COUNT = new com.facebook.widget.LikeView$Style("BOX_COUNT", 2, "box_count", 2);
      v0 = new com.facebook.widget.LikeView$Style[3];
      v0[0] = STANDARD;
      v0[1] = BUTTON;
      v0[2] = BOX_COUNT;
      $VALUES = (com.facebook.widget.LikeView$Style[])v0;
      DEFAULT = STANDARD;
    }

    private LikeView$Style(String p0, int p1, String p2, int p3)
    {
      super(p0, p1);
      this.stringValue = p2;
      this.intValue = p3;
    }

    /* synthetic */ static int access$000(com.facebook.widget.LikeView$Style p0)
    {
      return p0.getValue();
    }

    static com.facebook.widget.LikeView$Style fromInt(int p0)
    {
      com.facebook.widget.LikeView$Style[] v1;
      int v2;
      int i;
      com.facebook.widget.LikeView$Style v4;
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

    public static com.facebook.widget.LikeView$Style valueOf(String p0)
    {
      return (com.facebook.widget.LikeView$Style)com.gameloft.android.DecompRT.EnumBase.valueOf(com.facebook.widget.LikeView$Style.class, p0);
    }

    public static com.facebook.widget.LikeView$Style[] values()
    {
      return (com.facebook.widget.LikeView$Style[])$VALUES.clone();
    }

    public final String toString()
    {
      return this.stringValue;
    }

}
