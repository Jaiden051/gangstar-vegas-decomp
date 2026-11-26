// Decompiled from classes.dex (SourceFile: LoginButton$ToolTipMode.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

public final class LoginButton$ToolTipMode extends com.gameloft.android.DecompRT.EnumBase<LoginButton$ToolTipMode> {
    // Fields
    private static final com.facebook.widget.LoginButton$ToolTipMode[] $VALUES;
    public static final com.facebook.widget.LoginButton$ToolTipMode DEFAULT;
    public static final com.facebook.widget.LoginButton$ToolTipMode DISPLAY_ALWAYS;
    public static final com.facebook.widget.LoginButton$ToolTipMode NEVER_DISPLAY;

    // Methods
    static
    {
      com.facebook.widget.LoginButton$ToolTipMode[] v0;
      DEFAULT = new com.facebook.widget.LoginButton$ToolTipMode("DEFAULT", 0);
      DISPLAY_ALWAYS = new com.facebook.widget.LoginButton$ToolTipMode("DISPLAY_ALWAYS", 1);
      NEVER_DISPLAY = new com.facebook.widget.LoginButton$ToolTipMode("NEVER_DISPLAY", 2);
      v0 = new com.facebook.widget.LoginButton$ToolTipMode[3];
      v0[0] = DEFAULT;
      v0[1] = DISPLAY_ALWAYS;
      v0[2] = NEVER_DISPLAY;
      $VALUES = (com.facebook.widget.LoginButton$ToolTipMode[])v0;
    }

    private LoginButton$ToolTipMode(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.facebook.widget.LoginButton$ToolTipMode valueOf(String p0)
    {
      return (com.facebook.widget.LoginButton$ToolTipMode)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                            com.facebook.widget.LoginButton$ToolTipMode.class,
                                                            p0);
    }

    public static com.facebook.widget.LoginButton$ToolTipMode[] values()
    {
      return (com.facebook.widget.LoginButton$ToolTipMode[])$VALUES.clone();
    }

}
