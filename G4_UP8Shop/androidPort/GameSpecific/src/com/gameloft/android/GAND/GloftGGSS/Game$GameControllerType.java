// Decompiled from classes.dex (SourceFile: Game$GameControllerType.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class Game$GameControllerType extends com.gameloft.android.DecompRT.EnumBase<Game$GameControllerType> {
    // Fields
    public static final com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType a;
    public static final com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType b;
    public static final com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType c;
    public static final com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType d;
    public static final com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType e;
    public static final com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType f;
    public static final com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType g;
    public static final com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType h;
    public static final com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType i;
    public static final com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType j;
    public static final com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType k;
    private static final com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType[] l;

    // Methods
    static
    {
      com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType[] v0;
      a = new com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType("CONTROLLER_TYPE_MOGA_POCKET", 0);
      b = new com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType("CONTROLLER_TYPE_MOGA", 1);
      c = new com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType("CONTROLLER_TYPE_MOGA_HID", 2);
      d = new com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType("CONTROLLER_TYPE_XPERIA", 3);
      e = new com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType("CONTROLLER_TYPE_NVSHIELD", 4);
      f = new com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType("CONTROLLER_TYPE_MOGA_PRO_UNUSED_ONLY_TO_MATCH_FLASH", 5);
      g = new com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType("CONTROLLER_TYPE_NYKO", 6);
      h = new com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType("CONTROLLER_TYPE_SAMSUNG", 7);
      i = new com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType("CONTROLLER_TYPE_GENERIC", 8);
      j = new com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType("CONTROLLER_TYPE_KEYBOARD", 9);
      k = new com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType("CONTROLLER_TYPE_COUNT", 10);
      v0 = new com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType[11];
      v0[0] = a;
      v0[1] = b;
      v0[2] = c;
      v0[3] = d;
      v0[4] = e;
      v0[5] = f;
      v0[6] = g;
      v0[7] = h;
      v0[8] = i;
      v0[9] = j;
      v0[10] = k;
      l = (com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType[])v0;
    }

    private Game$GameControllerType(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType valueOf(String p0)
    {
      return (com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                            com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType.class,
                                                                            p0);
    }

    public static com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType[] values()
    {
      return (com.gameloft.android.GAND.GloftGGSS.Game$GameControllerType[])l.clone();
    }

}
