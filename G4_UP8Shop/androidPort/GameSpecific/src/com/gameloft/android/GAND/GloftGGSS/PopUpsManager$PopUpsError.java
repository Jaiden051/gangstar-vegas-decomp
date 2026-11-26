// Decompiled from classes.dex (SourceFile: PopUpsManager$PopUpsError.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

public final class PopUpsManager$PopUpsError extends com.gameloft.android.DecompRT.EnumBase<PopUpsManager$PopUpsError> {
    // Fields
    public static final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError a;
    public static final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError b;
    public static final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError c;
    public static final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError d;
    public static final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError e;
    public static final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError f;
    public static final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError g;
    public static final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError h;
    private static final com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError[] j;
    private final int i;

    // Methods
    static
    {
      com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError[] v0;
      a = new com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError("E_UNDEFINED", 0, -1);
      b = new com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError("E_SUCCESSFUL", 1, 0);
      c = new com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError("E_FILE_NOT_VALID", 2, 1);
      d = new com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError("E_FILE_DOWNLONDING", 3, 2);
      e = new com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError("E_FILE_DOWNLOND_FAILED", 4, 3);
      f = new com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError("E_BRIDGE_CLASS_NEVER_INIT", 5, 4);
      g = new com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError("E_UNZIP_FAILED", 6, 5);
      h = new com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError("E_FAILED_TO_CREATE_WEBVIEW", 7, 6);
      v0 = new com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError[8];
      v0[0] = a;
      v0[1] = b;
      v0[2] = c;
      v0[3] = d;
      v0[4] = e;
      v0[5] = f;
      v0[6] = g;
      v0[7] = h;
      j = (com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError[])v0;
    }

    private PopUpsManager$PopUpsError(String p0, int p1, int p2)
    {
      super(p0, p1);
      this.i = p2;
    }

    public static com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError valueOf(
            String p0)
    {
      return (com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                              com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError.class,
                                                                              p0);
    }

    public static com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError[] values()
    {
      return (com.gameloft.android.GAND.GloftGGSS.PopUpsManager$PopUpsError[])j.clone();
    }

    public final int a()
    {
      return this.i;
    }

}
