// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.PushNotification;

import android.os.Message;
public final class g extends android.database.sqlite.SQLiteOpenHelper {
    // Fields
    public static java.lang.String a;
    public static java.lang.String b;
    public static java.lang.String c;
    public static java.lang.String d;
    public static java.lang.String e;
    public static java.lang.String f;
    public static java.lang.String g;
    public static java.lang.String h;
    public static java.lang.String i;
    public static java.lang.String j;
    public static java.lang.String k;
    public static java.lang.String l;
    public static java.lang.String m;
    private static int n;
    private static java.lang.String o;
    private static java.lang.String p;

    // Methods
    public g(android.content.Context p0)
    {
      super(p0, "PN.db", null, 1);
    }

    public final void onCreate(android.database.sqlite.SQLiteDatabase p0)
    {
      p0.execSQL("create table Message(_id integer primary key autoincrement, pn_alarm_id text not null, creation_time text n" +
                 "ot null, schedule_time text not null, message_group text not null, type text not null, message_content text not null);");
      p0.execSQL("create table Endpoint(_id integer primary key, transport text not null, registration_id text not null);");
    }

    public final void onUpgrade(android.database.sqlite.SQLiteDatabase p0, int p1, int p2)
    {
      p0.execSQL("DROP TABLE IF EXISTS Message");
      p0.execSQL("DROP TABLE IF EXISTS Endpoint");
      this.onCreate(p0);
    }

}
