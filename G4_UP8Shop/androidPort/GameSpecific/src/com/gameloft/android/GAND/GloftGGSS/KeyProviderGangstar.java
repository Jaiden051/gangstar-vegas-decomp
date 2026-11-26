// Decompiled from classes.dex (SourceFile: KeyProviderGangstar.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.content.ContentUris;
import android.net.Uri;
public class KeyProviderGangstar extends android.content.ContentProvider {
    // Fields
    public static int a;
    public static final android.net.Uri b;
    public static java.lang.String c;
    private static java.lang.String e;
    private static java.lang.String f;
    private static final android.content.UriMatcher g;
    private com.gameloft.android.GAND.GloftGGSS.cj d;

    // Methods
    static
    {
      android.content.UriMatcher v0;
      b = Uri.parse("content://com.gameloft.android.GAND.GloftGGSS.KeyProviderGangstar/key");
      v0 = new android.content.UriMatcher(-1);
      g = v0;
      v0.addURI("com.gameloft.android.GAND.GloftGGSS.KeyProviderGangstar", "key", 1);
    }

    public KeyProviderGangstar()
    {
      super();
    }

    public int delete(android.net.Uri p0, String p1, String[] p2)
    {
      int v4;
      android.database.sqlite.SQLiteDatabase WritableDatabase; // RETVAL
      int v6;
      v4 = g.match(p0);
      WritableDatabase = this.d.getWritableDatabase();
      if ( v4 != 1 )
        throw new IllegalArgumentException("Unknown or Invalid URI " + p0);
      v6 = WritableDatabase.delete("glshare", p1, p2);
      this.getContext().getContentResolver().notifyChange(p0, null);
      return v6;
    }

    public String getType(android.net.Uri p0)
    {
      if ( g.match(p0) == 1 )
        return "vnd.android.cursor.dir/mt-key";
      else
        return null;
    }

    public android.net.Uri insert(android.net.Uri p0, android.content.ContentValues p1)
    {
      long v3; // RETVAL
      android.net.Uri v4;
      if ( g.match(p0) != 1 )
        throw new IllegalArgumentException("Invalid URI for insert");
      v3 = this.d.getWritableDatabase().insert("glshare", null, p1);
      if ( v3 <= 0 )
        throw new android.database.SQLException("Failed to insert row into " + p0);
      v4 = ContentUris.withAppendedId(p0, v3);
      this.getContext().getContentResolver().notifyChange(p0, null);
      return v4;
    }

    public boolean onCreate()
    {
      this.d = new com.gameloft.android.GAND.GloftGGSS.cj(this.getContext());
      return true;
    }

    public android.database.Cursor query(
            android.net.Uri p0,
            String[] p1,
            String p2,
            String[] p3,
            String p4)
    {
      android.database.sqlite.SQLiteQueryBuilder v6;
      android.database.Cursor v7;
      v6 = new android.database.sqlite.SQLiteQueryBuilder();
      v6.setTables("glshare");
      if ( g.match(p0) != 1 )
        throw new IllegalArgumentException("Unknown URI");
      v7 = v6.query(this.d.getReadableDatabase(), p1, p2, p3, null, null, p4);
      v7.setNotificationUri(this.getContext().getContentResolver(), p0);
      return v7;
    }

    public int update(android.net.Uri p0, android.content.ContentValues p1, String p2, String[] p3)
    {
      int v5;
      android.database.sqlite.SQLiteDatabase WritableDatabase; // RETVAL
      int v7;
      v5 = g.match(p0);
      WritableDatabase = this.d.getWritableDatabase();
      if ( v5 != 1 )
        throw new IllegalArgumentException("Unknown URI");
      v7 = WritableDatabase.update("glshare", p1, p2, p3);
      this.getContext().getContentResolver().notifyChange(p0, null);
      return v7;
    }

}
