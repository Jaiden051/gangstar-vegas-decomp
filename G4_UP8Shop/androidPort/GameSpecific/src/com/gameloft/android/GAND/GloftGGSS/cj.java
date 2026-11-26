// Decompiled from classes.dex (SourceFile: cj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

public final class cj extends android.database.sqlite.SQLiteOpenHelper {
    // Fields
    public static java.lang.String a;
    public static java.lang.String b;
    public static java.lang.String c;
    private static int d;
    private static java.lang.String e;
    private static java.lang.String f;
    private static java.lang.String g;

    // Methods
    public cj(android.content.Context p0)
    {
      super(p0, "gameloft_sharing", null, 1);
    }

    public final void onCreate(android.database.sqlite.SQLiteDatabase p0)
    {
      p0.execSQL("create table glshare (key text primary key, value text not null);");
    }

    public final void onUpgrade(android.database.sqlite.SQLiteDatabase p0, int p1, int p2)
    {
      p0.execSQL("DROP TABLE IF EXISTS glshare");
      p0.execSQL("create table glshare (key text primary key, value text not null);");
    }

}
