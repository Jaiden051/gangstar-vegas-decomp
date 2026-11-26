// Decompiled from classes.dex (SourceFile: ToolTipPopup$Style.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public final class ToolTipPopup$Style extends com.gameloft.android.DecompRT.EnumBase<ToolTipPopup$Style> {
    // Fields
    private static final com.facebook.widget.ToolTipPopup$Style[] $VALUES;
    public static final com.facebook.widget.ToolTipPopup$Style BLACK;
    public static final com.facebook.widget.ToolTipPopup$Style BLUE;

    // Methods
    static
    {
      com.facebook.widget.ToolTipPopup$Style[] v0;
      BLUE = new com.facebook.widget.ToolTipPopup$Style("BLUE", 0);
      BLACK = new com.facebook.widget.ToolTipPopup$Style("BLACK", 1);
      v0 = new com.facebook.widget.ToolTipPopup$Style[2];
      v0[0] = BLUE;
      v0[1] = BLACK;
      $VALUES = (com.facebook.widget.ToolTipPopup$Style[])v0;
    }

    private ToolTipPopup$Style(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.facebook.widget.ToolTipPopup$Style valueOf(String p0)
    {
      return (com.facebook.widget.ToolTipPopup$Style)com.gameloft.android.DecompRT.EnumBase.valueOf(com.facebook.widget.ToolTipPopup$Style.class, p0);
    }

    public static com.facebook.widget.ToolTipPopup$Style[] values()
    {
      return (com.facebook.widget.ToolTipPopup$Style[])$VALUES.clone();
    }

}
