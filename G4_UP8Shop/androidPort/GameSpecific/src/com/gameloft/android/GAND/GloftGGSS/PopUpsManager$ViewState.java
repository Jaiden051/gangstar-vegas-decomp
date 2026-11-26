// Decompiled from classes.dex (SourceFile: PopUpsManager$ViewState.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

public final class PopUpsManager$ViewState extends com.gameloft.android.DecompRT.EnumBase<PopUpsManager$ViewState> {
    // Fields
    public static final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState a;
    public static final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState b;
    public static final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState c;
    public static final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState d;
    private static final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState[] f;
    private final int e;

    // Methods
    static
    {
      com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState[] v0;
      a = new com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState("E_VS_UNDEFINED", 0, -1);
      b = new com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState("E_VS_NOT_DOWNLOAD", 1, 0);
      c = new com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState("E_VS_INVISIBLE", 2, 1);
      d = new com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState("E_VS_VISIBLE", 3, 2);
      v0 = new com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState[4];
      v0[0] = a;
      v0[1] = b;
      v0[2] = c;
      v0[3] = d;
      f = (com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState[])v0;
    }

    private PopUpsManager$ViewState(String p0, int p1, int p2)
    {
      super(p0, p1);
      this.e = p2;
    }

    public static com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState valueOf(String p0)
    {
      return (com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                            com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState.class,
                                                                            p0);
    }

    public static com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState[] values()
    {
      return (com.gameloft.android.GAND.GloftGGSS.PopUpsManager$ViewState[])f.clone();
    }

    public final int a()
    {
      return this.e;
    }

}
