// Decompiled from classes.dex (SourceFile: cy$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class cy$a extends android.database.sqlite.SQLiteOpenHelper {
    // Fields
    final com.google.android.gms.internal.cy a;

    // Methods
    public cy$a(com.google.android.gms.internal.cy p0, android.content.Context p1, String p2)
    {
      super(p1, p2, null, 4);
      this.a = p0;
    
    }

    public void onCreate(android.database.sqlite.SQLiteDatabase p0)
    {
      p0.execSQL(cy.bg());
    }

    public void onUpgrade(android.database.sqlite.SQLiteDatabase p0, int p1, int p2)
    {
      ev.B("Database updated from version " + p1 + " to version " + p2);
      p0.execSQL("DROP TABLE IF EXISTS InAppPurchase");
      this.onCreate(p0);
    }

}
